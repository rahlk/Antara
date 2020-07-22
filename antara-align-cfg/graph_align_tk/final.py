import sys
import time
import logging
import numpy as np
from pdb import set_trace
import scipy.sparse as sp
from scipy.sparse.linalg import norm
from tqdm import tqdm

# Logging Config
logger = logging.getLogger()
logger.disabled = True
logging.basicConfig(format='[+] %(message)s', level=logging.CRITICAL)

# Silence SparseEfficiencyWarning
import warnings
from scipy.sparse import (spdiags, SparseEfficiencyWarning, csc_matrix,
                          csr_matrix, isspmatrix, dok_matrix, lil_matrix, bsr_matrix)
warnings.simplefilter('ignore', SparseEfficiencyWarning)

class FINAL(object):
    """ FINAL: Fast Attributed Network Alignment

    The algorithm is the generalized attributed network alignment algorithm. The algorithm can handle the cases no 
    matter node attributes and/or edge attributes are given. The algorithm can handle either numerical or categorical 
    attributes (feature vectors) for both edges and nodes. The algorithm uses cosine similarity to calculate node and 
    edge feature vector similarities. E.g., sim(v1, v2) = <v1, v2>/(||v1||_2*||v2||_2). For categorical attributes, 
    this is still equivalent to the indicator function in the original published paper.

    Parameters
    ----------
    A1, A2: np.array (n1*n1 square matrix for G1 n2*n2 for G2)
            Input adjacency matrix of G1 with n1 nodes. A2 is the same for graph G2.

    N1, N2: np.array (n1*K matrix or n2*K matrix for G1 or G2 respectively)
            Node attribute matrix for graph G1. Each row is a node, and each column represents an attribute. 
            N2 is the same for graph G2.

    E1, E2: List (L*1)
            Edge attribute list where E1[i] is an n1*n1 matrix and nonzero entry is the i-th attribute of edges. 
            E2{i} is same. Similarly, if the input edge attributes are categorical, we can use one hot encoding, 
            i.e., E1{i}(a,b)=1 if edge (a,b) has categorical attribute i. If E1 and E2 are empty, i.e., E1 = {} or [], 
            E2 = {} or [], then no edge attributes are input.

    H: a n2*n1 prior node similarity matrix, e.g., degree similarity. H
        should be normalized, e.g., sum(sum(H)) = 1.
    
    alpha: decay factor 
    
    maxiter, tol: maximum number of iterations and difference tolerance.
    

    S: an n2*n1 alignment matrix, entry (x,y) represents to what extend node-
        x in A2 is aligned to node-y in A1

    Reference
    ---------
    [1] Zhang, Si, and Hanghang Tong. "FINAL: Fast Attributed Network Alignment." Proceedings of the 22nd ACM SIGKDD 
        International Conference on Knowledge Discovery and Data Mining. ACM, 2016.
    """

    def __init__(self, A1, A2, H, N1=None, N2=None, E1=None, E2=None, alpha=0.2, maxiter=100, tol=1e-9):
        if not sp.isspmatrix_coo(A1):
            A1 = A1.tocoo()
        if not sp.isspmatrix_coo(A2):
            A2 = A2.tocoo()
        self.A1 = A1
        self.A2 = A2
        if not sp.isspmatrix_coo(H):
            H = H.tocoo()
        self.H = H
        self.N1 = N1
        self.N2 = N2
        self.E1 = E1
        self.E2 = E2
        self.alpha = alpha
        self.maxiter = maxiter
        self.tol = tol

    def main_proc(self):
        alpha = self.alpha

        A1 = self.A1.tocsr()
        A2 = self.A2.tocsr()

        n1 = self.A1.shape[0]
        n2 = self.A2.shape[0]

        N1 = self.N1
        N2 = self.N2

        E1 = self.E1
        E2 = self.E2

        # If no node attributes input, then initialize as a vector of 1
        # so that all nodes are treated to have the save attributes which 
        # is equivalent to no given node attribute.
        
        if N1 is None:
            N1 = np.ones((n1, 1))
        if N2 is None:
            N2 = np.ones((n2, 1))

        # If no edge attributes are input, i.e., E1 and E2 are empty, then
        # initialize as a cell with 1 element, which is same as adjacency matrix
        # but the entries that are nonzero in adjacency matrix are equal to 1 so 
        # that all edges are treated as with the same edge attributes. This is 
        # equivalent to no given edge attributes.
        
        if E1 is None:
            E1 = list()
            E1.append(A1)
        if E2 is None:
            E2 = list()
            E2.append(A2)
    
        K = N1.shape[1]
        L = len(E1)
        T1 = sp.coo_matrix((n1, n1))
        T2 = sp.coo_matrix((n2, n2))

        # Normalize edge feature vectors 
        for l in range(L):
            T1 = T1 + E1[l].power(2) # calculate ||v1||_2^2
            T2 = T2 + E2[l].power(2)  # calculate ||v2||_2^2

        T1.data = 1./np.sqrt(T1.data)
        T2.data = 1./np.sqrt(T2.data)

        for l in range(L):
           E1[l].data = E1[l].data * T1.data # normalize each entry by vector norm T1
           E2[l].data = E2[l].data * T2.data # normalize each entry by vector norm T2

        # Normalize node feature vectors
        K1 = np.power(np.sum(np.power(N1, 2),1), -.5)
        K1[np.isinf(K1)] = 0
        K1 = np.tile(K1.reshape((n1, 1)), (1, K))
        K2 = np.power(np.sum(np.power(N2, 2),1), -.5)
        K2[np.isinf(K2)] = 0
        K2 = np.tile(K2.reshape((n2, 1)), (1, K))

        N1 = K1 * N1 # normalize the node attribute for A1
        N2 = K2 * N2 # normalize the node attribute for A2

        # Compute node feature cosine cross-similarity
        N = sp.csr_matrix((n1*n2, 1));
        for k in range(K):
            N = N + sp.csr_matrix(np.kron(N1[:,k], N2[:,k]).reshape((-1,1))) # compute N as a kronecker similarity

        # Compute the Kronecker degree vector
        t1 = time.time()
        d = sp.csr_matrix((n1*n2, 1));
        for l in range(L):
            for k in range(K):
                d = d + sp.csr_matrix(np.kron(E1[l].multiply(A1).dot(N1[:,k])
                                , E2[l].multiply(A2).dot(N2[:,k])).reshape((-1,1)))

        D = N.multiply(d)
        DD = D.power(2)
        DD = D.power(-0.25)
        DD[D == 0] = 0  # define inf to 0
        
        # fixed-point solution
        q = DD.multiply(N).tolil().reshape((n2, n1))
        h = self.H.tolil()
        s = h
        # for i in tqdm(range(self.maxiter), desc=":: Computing Graph Similarity ::"):
        for i in range(self.maxiter):
            t2 = time.time()
            prev = s
            try:  M = q.multiply(s)
            except:  set_trace()
            S = sp.coo_matrix((n2, n1))
            for l in range(L):
                S = S + E2[l].multiply(A2).dot(M).dot(E1[l].multiply(A1)) # calculate the consistency part

            s = (1 - alpha) * h + (alpha * q).multiply(S)  # add the prior part
            # Compute erroe
            diff = norm(np.nan_to_num(s-prev));
            logging.critical(' Iteration: {} | Time: {} sec/it | error = {}'.format(i, round(time.time()-t2, 2), 100*diff))
            if diff < self.tol: # if converge
                break

        return s 
