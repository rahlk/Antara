import os
import sys
import logging
import matplotlib
import scipy as sp
import numpy as np
import pandas as pd
import networkx as nx
from tqdm import tqdm
from pdb import set_trace
import node2vec as n2v
import matplotlib.pyplot as plt
import deterministic_deepwalk as ddw
from nltk.metrics.distance import jaro_winkler_similarity
from sklearn.metrics.pairwise import cosine_similarity

from deepwalk import Deepwalk
from graph_align_tk import FINAL
from antara_cfg_builder import CFGBuilder
from utils import heatmap, annotate_heatmap
from pathlib import Path

# Logging Config
logging.basicConfig(format='[+] %(message)s', level=logging.INFO)

# Add project source to path
root = Path(os.path.abspath(os.path.join(
    os.getcwd().split('antara')[0], 'antara')))

py_path = root.joinpath('antara-align-cfg')
if py_path not in sys.path:
    sys.path.append(py_path)

np.random.seed(1729)


class CFGAlign:
    def __init__(self, learning_rate=0.1,
                 decay=1,
                 mini_batch_size=50,
                 max_repeats=20,
                 test_input_path=Path(root.joinpath('projects/elf/test_in/'))):
        # Hyperparameters
        self.learning_rate = learning_rate
        self.decay = decay
        self.mini_batch_size = mini_batch_size
        self.max_repeats = max_repeats
        self.test_input_path = test_input_path
        # Auxiliary methods
        self.sim_matrix_prev = None
        self.G1_prev_call_path = None
        self.G2_prev_call_path = None

    def __enter__(self):
        """ Clean up opertaions
        """
        # Undertake cleanup operations
        if os.path.exists(".G1.model"):
            os.remove(".G1.model")
        if os.path.exists(".G2.model"):
            os.remove(".G2.model")
        
        return self

    @staticmethod
    def _draw_heatmap(sim_matrix, save_name="foo.pdf"):
        """ Visualize similarity matrix as a heatmap

        Parameters
        ----------
        sim_matrix: np.ndarray
            Similarity matrix
        save_name: str
            Filename
        """
        w = 4
        h = 3
        d = 150
        plt.figure(figsize=(w, h), dpi=d)
        heatmap = plt.imshow(sim_matrix)
        heatmap.set_cmap("YlGn")
        plt.colorbar()
        plt.savefig(save_name, bbox_inches='tight')

    @staticmethod
    def accuracy(sim_matrix, G1_nodes, G2_nodes, K=10):
        """ Measures the similarity matching accuracy.

        Parameters
        ----------
        G1_nodes, G2_nodes: nx.nodes (or something)
            Nodes of graphs G1 and G2 respectively
        K: int
            The top-k values within which we need to find a match.

        Returns
        -------
        float
            The accuracy score
        """
        correct = 0
        total = 0
        for i, row in enumerate(sim_matrix):
            top_matches = np.argsort(row)[::-1]
            top_K = top_matches[:K]
            G1_nodes = tuple(G1_nodes)
            G2_nodes = tuple(G2_nodes)
            if G2_nodes[i] in map(lambda i: G1_nodes[i], top_K):
                correct += 1
            total += 1
        
        return round((correct / total) * 100, 2) 

    @staticmethod
    def minmax_norm(x):
        """ Return the min/max norm or a matrix/array

        Parameters
        ----------
        x: np.array
            The matrix
        
        Returns
        -------
        np.array:
            The normalized matrix
        """
        return (x - x.min())/(x.max() - x.min())

    def align_cfg(self):
        """ Align the call graphs of two programs

        Returns
        -------
        np.array
            The similarity matrix.
        """
        sim_matrix_prev = self.sim_matrix_prev
        G1_prev_call_path = self.G1_prev_call_path
        G2_prev_call_path = self.G2_prev_call_path

        for repeat in range(self.max_repeats):
            G1_bin_path = Path(root.joinpath('projects/elf/binutils-2.32/bin/readelf'))
            G2_bin_path = Path(root.joinpath('projects/elf/binutils-2.34/bin/readelf'))
            
            # Get call graphs of program version vi
            with CFGBuilder(G1_bin_path, self.test_input_path, 'readelf') as G1_builder:
                G1_builder = G1_builder.build_dynamic_call_graph(
                    prev_edges=G1_prev_call_path, opt_flags='--all', seed_range=list(range(repeat, repeat + self.mini_batch_size + 1)))
                G1 = G1_builder.get_dynamic_call_graph()
                G1_prev_call_path = G1_builder.get_call_path()
                _, G1_adj = G1_builder.graph_to_adjacency_matrix(G1, use_weights=False)
                G1_nodes, G1_edge_attr = G1_builder.graph_to_adjacency_matrix(G1, use_weights=False)
            
            # Get call graphs of program version vj
            with CFGBuilder(G1_bin_path, self.test_input_path, 'readelf') as G2_builder:
                G2_builder = G2_builder.build_dynamic_call_graph(
                    prev_edges=G2_prev_call_path, opt_flags='--all', seed_range=list(range(repeat, repeat + self.mini_batch_size + 1)))
                G2 = G2_builder.get_dynamic_call_graph()
                G2_prev_call_path = G2_builder.get_call_path()
                _, G2_adj = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)
                G2_nodes, G2_edge_attr = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)


            # ----------------------------- #
            # Align call graphs using FINAL #
            # ----------------------------- #

            # Get adjacency matrices
            A1 = G1_adj
            A2 = G2_adj

            # Get the vertex counts
            n1 = A1.shape[0]
            n2 = A2.shape[0]
            
            # Get node attribute matrix. We initialize with a custom deepwalk. 
            N1 = n2v.node_embedding(G1, embedding_name=".G1.model")
            N2 = n2v.node_embedding(G2, embedding_name=".G2.model")

            # Get edge attribute matrix
            E1 = list()
            E2 = list()

            # -- Use edge similarity which is the cosine similarity masked with the edge weights --  
            # -- TODO: Can we use a sophiticated similarity measure here? (thought vector maybe) -- 
            G1_edge_attr *= sp.sparse.csr_matrix(cosine_similarity(N1, N1))
            G2_edge_attr *= sp.sparse.csr_matrix(cosine_similarity(N2, N2))
            E1.append(G1_edge_attr)
            E2.append(G2_edge_attr)

            # Get initial similarity estimate
            H = cosine_similarity(N2, N1)
            H = (H - H.min()) / (H.max()-H.min())
            
            if sim_matrix_prev is not None:
                
                if sim_matrix_prev.size < H.size:
                    temp = sim_matrix_prev
                    sim_matrix_prev = np.zeros(H.shape)
                    sim_matrix_prev[:temp.shape[0], :temp.shape[1]] = temp
                    sim_matrix_prev = self.G1_prev_call_path(sim_matrix_prev)
                
                elif sim_matrix_prev.size > H.size:
                    sim_matrix_prev = sim_matrix_prev[:H.shape[0], :H.shape[1]]
                    sim_matrix_prev = self.G1_prev_call_path(sim_matrix_prev)
                
                H = self.learning_rate * sim_matrix_prev + (1 - self.learning_rate) * H
                self.learning_rate = self.learning_rate * ((1 + self.decay * repeat) ** -1)
                
            H = sp.sparse.coo_matrix(H)

            final = FINAL(A1, A2, H, N1, N2, E1, E2, maxiter=1000, alpha=self.learning_rate,tol=1e-9)
            sim_matrix = final.main_proc().tocoo()
            
            # Convert to a numpy.ndarray
            sim_matrix = sim_matrix.A

            # Normalize weights using min/max normalization
            lo = sim_matrix.min()
            hi = sim_matrix.max()
            sim_matrix = (sim_matrix - lo) / (hi - lo)
            sim_matrix_prev = sim_matrix
            print("Accuracy", self.accuracy(sim_matrix, G1_nodes, G2_nodes))

        for i, row in enumerate(sim_matrix):
            top_matches = np.argsort(row)[::-1]
            top_five = top_matches[:3]
            G1_nodes = tuple(G1_nodes)
            G2_nodes = tuple(G2_nodes)
            print(G2_nodes[i], "-->", ", ".join(map(lambda i: G1_nodes[i], top_five)))

        print("======")
        print("Final Accuracy", self.accuracy(sim_matrix, G1_nodes, G2_nodes))
        
        # Plot similarity heatmap
        self.accuracy(sim_matrix, save_name='readelf-objdump.pdf')

    def __exit__(self, exc_type, exc_val, exc_tb):
        """ Undertake auxiliary file cleanup operations
        """
        if os.path.exists(".G1.model"):
            os.remove(".G1.model")
        if os.path.exists(".G2.model"):
            os.remove(".G2.model")

if __name__ == "__main__":
    opt = {
        "learning_rate": 0.1,
        "decay": 1,
        "mini_batch_size": 50,
        "max_repeats": 20,
        "test_input_path": Path(root.joinpath('projects/elf/test_in/'))
    }
    
    with CFGAlign(**opt) as cfg_align:
        cfg_align.align_cfg()
    


