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
from functools import partial
from deepwalk import Deepwalk
from graph_align_tk import FINAL
from antara_cfg_builder import CFGBuilder
from pathlib import Path
from tabulate import tabulate
from sklearn.preprocessing import KBinsDiscretizer

# Logging Config
logging.basicConfig(format='[+] %(message)s', level=logging.INFO)

# Add project source to path
root = Path(os.path.abspath(os.path.join(
    os.getcwd().split('antara')[0], 'antara')))

py_path = root.joinpath('antara-align-cfg')
if py_path not in sys.path:
    sys.path.append(py_path)

np.random.seed(1729)

class IllegalArgumentError(ValueError):
    pass

class CFGAlign:
    def __init__(self, learning_rate=0.1,
                 decay=1,
                 mini_batch_size=50,
                 max_repeats=20,
                 test_input_path=Path(root.joinpath('projects/elf/test_in/')),
                 G1_bin_path = Path(root.joinpath('projects/elf/binutils-2.32/bin/readelf')), 
                 G2_bin_path = Path(root.joinpath('projects/elf/binutils-2.34/bin/readelf'))):
        # Hyperparameters
        self.learning_rate = learning_rate
        self.decay = decay
        self.mini_batch_size = mini_batch_size
        self.max_repeats = max_repeats
        self.test_input_path = test_input_path
        # Auxiliary methods
        self.S_prev = None
        self.table = [
            ["Seed", "Acc (Top 1)", "Acc (Top 3)", "Acc (Top 5)", "Acc (Top 10)", "Acc (Top 20)"]]
        self.G1_prev_call_path = None
        self.G2_prev_call_path = None
        self.G1_bin_path = G1_bin_path
        self.G2_bin_path = G2_bin_path

    def __enter__(self):
        """ Clean up opertaions
        """
        # Undertake cleanup operations
        if os.path.exists(".G1.model"):
            os.remove(".G1.model")
        if os.path.exists(".G2.model"):
            os.remove(".G2.model")
        
        print(tabulate(self.table, tablefmt='grid'))
        return self

    @staticmethod
    def _draw_heatmap(S, save_name="foo.pdf"):
        """ Visualize similarity matrix as a heatmap

        Parameters
        ----------
        S: np.ndarray
            Similarity matrix
        save_name: str
            Filename
        """
        w = 4
        h = 3
        d = 150
        plt.figure(figsize=(w, h), dpi=d)
        heatmap = plt.imshow(S)
        heatmap.set_cmap("YlGn")
        plt.colorbar()
        plt.savefig(save_name, bbox_inches='tight')
        plt.close('all')

    @staticmethod
    def accuracy(S, G1_nodes, G2_nodes, K=1):
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
        for i, row in enumerate(S):
            top_matches = np.argsort(row)[-K-1:]
            G1_nodes = tuple(G1_nodes)
            G2_nodes = tuple(G2_nodes)
            if G2_nodes[i] in map(lambda i: G1_nodes[i], top_matches):
                correct += 1
            total += 1
        
        return round((correct / total) * 100, 2) 

    def accuracy_binned(self, S, G1_nodes, G2_nodes, bins=[1, 3, 5, 10, 20]):
        """ Measures the similarity matching accuracy with top-1, 3, 5, 10, 20.

        Parameters
        ----------
        G1_nodes, G2_nodes: nx.nodes (or something like that)
            Nodes of graphs G1 and G2 respectively

        Returns
        -------
        list
            The list of accuracy scores at various K's
        """
        acc = partial(self.accuracy, S, G1_nodes, G2_nodes)
        acc_binned = [acc(k) for k in bins]
        return acc_binned

    @staticmethod
    def most_divergent_methods(S, G1_nodes, G2_nodes):
        mismatched = []
        for i, row in enumerate(S):
            actual_index = G1_nodes.index(G2_nodes[i])
            top_matches = np.argsort(row)[::-1]
            predicted_index = G1_nodes.index(G2_nodes[i])
            distance = abs(row[actual_index] - row[predicted_index])
            mismatched.append((G2_nodes[i], distance))
        most_dissimilar = [node for _, node in sorted(mismatched, key=lambda mismatched:mismatched[1], reverse=True)]
        
        set_trace()
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

    @staticmethod
    def discretize(S, bins=10):
        """ Discretizes the similarity matrix

        Parameters
        ----------
        S: np.array
            Continuous similarity matrix
        n_bins: int (default n_bins=10)
            Number of bins to use

        Returns
        -------
        np.array
            Discrete similarity matrix
        """

        def _discretize_row(row):
            discretizer = KBinsDiscretizer(n_bins=bins, strategy="uniform")
            discretizer = discretizer.fit(row.reshape(-1, 1))
            ranges = discretizer.bin_edges_[0]
            digitized = np.digitize(row, ranges)
            # -- Sort in increasing (from 0) rank order -- 
            digitized = np.max(digitized) - digitized
            return digitized
        
        S = np.apply_along_axis(func1d=_discretize_row, axis=1, arr=S)
        return S 

    @staticmethod
    def _get_node_embedding(G1, G2, embed_with='node2vec'):
        # Get node attribute matrix. We initialize with a custom deepwalk.
        if embed_with.lower() == 'node2vec':
            N1 = n2v.node_embedding(G1, normed=True)
            N2 = n2v.node_embedding(G2, normed=True)
        elif embed_with.lower() == 'deepwalk':
            with Deepwalk(G1) as dw:
                N1 = dw.node_embedding()
            with Deepwalk(G2) as dw:
                N2 = dw.node_embedding()
        else:
            raise IllegalArgumentError("embed_with must either be deepwalk or node2vec.")

        return N1, N2

    def align_cfg(self):
        """ Align the call graphs of two programs

        Returns
        -------
        np.array
            The similarity matrix.
        """
        S_prev = self.S_prev
        G1_prev_call_path = self.G1_prev_call_path
        G2_prev_call_path = self.G2_prev_call_path

        G1_bin_path = self.G1_bin_path
        G2_bin_path = self.G2_bin_path
        for repeat in range(self.max_repeats):
            # Get call graphs of program version vi
            with CFGBuilder(G1_bin_path, self.test_input_path, 'readelf') as G1_builder:
                G1_builder = G1_builder.build_dynamic_call_graph(
                    prev_edges=G1_prev_call_path, opt_flags='--all', seed_range=list(range(repeat, repeat + self.mini_batch_size)))
                G1 = G1_builder.get_dynamic_call_graph()
                G1_prev_call_path = G1_builder.get_call_path()
                _, G1_adj = G1_builder.graph_to_adjacency_matrix(G1, use_weights=False)
                G1_nodes, G1_edge_attr = G1_builder.graph_to_adjacency_matrix(G1, use_weights=False)
            
            # Get call graphs of program version vj
            with CFGBuilder(G2_bin_path, self.test_input_path, 'readelf') as G2_builder:
                G2_builder = G2_builder.build_dynamic_call_graph(
                    # prev_edges=G2_prev_call_path, opt_flags='--all', seed_range=list(range(1500-repeat+1, 1500-repeat + self.mini_batch_size + 1)))
                    prev_edges=G1_prev_call_path, opt_flags='--all', seed_range=list(range(repeat, repeat + self.mini_batch_size)))
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
            N1,N2 = self._get_node_embedding(G1, G2, embed_with="node2vec")

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
            H = self.minmax_norm(H)
            
            if S_prev is not None:
                
                if S_prev.size < H.size:
                    temp = S_prev
                    S_prev = np.zeros(H.shape)
                    S_prev[:temp.shape[0], :temp.shape[1]] = temp
                
                elif S_prev.size > H.size:
                    S_prev = S_prev[:H.shape[0], :H.shape[1]]
                
                H = self.learning_rate * S_prev + (1 - self.learning_rate) * H
                self.learning_rate = self.learning_rate * ((1 + self.decay * repeat) ** -1)
                
            H = sp.sparse.coo_matrix(H)
            
            final = FINAL(A1, A2, H, N1, N2, E1, E2, maxiter=1000, alpha=self.learning_rate,tol=1e-9)
            S = final.main_proc().tocoo()
            
            # Convert to a numpy.ndarray
            S = S.A

            # Normalize weights using min/max normalization
            S = self.minmax_norm(S)
            S_prev=S

            S_discrete = self.discretize(S, bins=10)
            # Populate results table
            self.table.append(
                [repeat] + self.accuracy_binned(S, G1_nodes, G2_nodes))

            result_str = tabulate(self.table, tablefmt='grid', numalign="right")
            result_str = "\n".join(result_str.split('\n')[-2:])
            print(result_str)

            self.most_divergent_methods(S, G1_nodes, G2_nodes)
            self._draw_heatmap(S, save_name="readelf-{}.pdf".format(repeat))
        return self.table

    def __exit__(self, exc_type, exc_val, exc_tb):
        """ Undertake auxiliary file cleanup operations
        """
        if os.path.exists(".G1.model"):
            os.remove(".G1.model")
        if os.path.exists(".G2.model"):
            os.remove(".G2.model")

if __name__ == "__main__":
    opt = {
        "decay": 1,
        "max_repeats": 40,
        "learning_rate": 0.1,
        "mini_batch_size": 1,
        "test_input_path": Path(root.joinpath('projects/elf/test_in/')),
        "G1_bin_path": Path(root.joinpath('projects/elf/binutils-2.32/bin/readelf')),
        "G2_bin_path": Path(root.joinpath('projects/elf/binutils-2.34/bin/readelf'))
        }
    
    with CFGAlign(**opt) as cfg_align:
        res = cfg_align.align_cfg()

    set_trace()
    # Plot similarity heatmap


