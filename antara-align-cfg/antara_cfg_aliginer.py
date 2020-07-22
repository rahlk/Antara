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
from node2vec import node2vec
import matplotlib.pyplot as plt
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

def _jw_distance(str1, str2):
    """ Compute the edit distance between two strings

    Parameters
    ----------
    str1: string
        First string
    str2: string
        Second string

    Returns
    -------
    float
        The edit distance
    """
    return jaro_winkler_similarity(str1, str2)

def get_prior_similarity(G1_nodes, G2_nodes, dist="jw"):
    """ Generate similarity matrix based on textual distance

    Parameters
    ----------
    G1_nodes: tuple (size n1)
        Nodes in G1. 
    G2_nodes: tuple (size n2)
        Nodes in G2.
    dist: str (default="jw")
        Which distance measure to use. Defaults to jw (jaro-winkler) distance.

    Returns
    -------
    sp.sparse.coo_matrix
        A (n2*n1) matrix of node similarities
    """

    if not isinstance(G1_nodes, tuple):
        G1_nodes = tuple(G1_nodes)
        
    if not isinstance(G2_nodes, tuple):
        G2_nodes = tuple(G2_nodes)

    # Get Rank of the simililarity matrix
    cols = len(G1_nodes)
    rows = len(G2_nodes)

    # Initialize with zeros
    H = np.zeros((n2, n1))

    # Populate with distance scores
    for i in range(rows):
        for j in range(cols):
            H[i, j] = _jw_distance(G1_nodes[j], G2_nodes[i])
    
    # H = H / np.sum(np.sum(H))
    H = sp.sparse.coo_matrix(H)
    return H

def accuracy(mat):
    correct = 0
    total = 0
    for i, row in enumerate(mat):
        top_match = np.argsort(row)[::-1]
        correct += 1 if i in top_match[:10] else 0
        total += 1
    
    return round((correct / total) * 100, 3) 

def minmax_norm(x):
    return (x - x.min())/(x.max() - x.min())

# ============================================================================ #


if __name__ == "__main__":
    
    learning_rate = 0.99

    # Test inputs to parse
    test_input_path = Path(root.joinpath('projects/elf/test_in/'))
    G1 = None
    G2 = None

    #  ----------------------------------------------------  #
    #  Run instrumented programs to get dynamic call graphs  #
    #  ----------------------------------------------------  #
    np.random.seed(1729)
    seeds_to_use = np.random.randint(0, 500, size=2)
    sim_matrix_prev = None

    for i in tqdm(range(len(seeds_to_use) - 1), desc=":: Computing CFG alignment... :"):
        seed_1 = seeds_to_use[i]
        seed_2 = seeds_to_use[i+1]
        G1_bin_path = Path(root.joinpath('projects/elf/binutils/bin/readelf'))
        G2_bin_path = G1_bin_path
        
        # Get call graphs of readelf
        with CFGBuilder(G1_bin_path, test_input_path, 'readelf') as G1_builder:
            G1 = G1_builder.get_dynamic_call_graph(opt_flags='--all', seed_id=seed_1)
            # if G1 is None:
            #     G1 = G
            # else:
            #     G1.update(G)
            _, G1_adj = G1_builder.graph_to_adjacency_matrix(G1, use_weights=False)
            G1_nodes, G1_edge_attr = G1_builder.graph_to_adjacency_matrix(G1, use_weights=False)
        
        with CFGBuilder(G2_bin_path, test_input_path, 'readelf') as G2_builder:
            G2 = G2_builder.get_dynamic_call_graph(opt_flags='--all', seed_id=seed_2)
            # if G2 is None:
            #     G2 = G
            # else:
            #     G2.update(G)
            _, G2_adj = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)
            G2_nodes, G2_edge_attr = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)

        # # Get call graphs of objdump
        # G2_bin_path = Path(root.joinpath('projects/elf/binutils/bin/objdump'))
        # with CFGBuilder(G2_bin_path, test_input_path, 'objdump') as G2_builder:
        #     G2 = G2_builder.get_dynamic_call_graph(opt_flags='-s', seed_range=seeds_to_use)
        #     G2_builder.draw_call_graph(G2, fname="objdump.dot")
        #     _, G2_adj = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)
        #     G2_nodes, G2_edge_attr = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)
        
        
        # ----------------------------- #
        # Align call graphs using FINAL #
        # ----------------------------- #

        # Get adjacency matrices
        A1 = G1_adj
        A2 = G2_adj

        # Get the vertex counts
        n1 = A1.shape[0]
        n2 = A2.shape[0]
        
        # # Get node attribute matrix. We initialize with ones. 
        # N1 = np.ones((n1, 1))
        # N2 = np.ones((n2, 1))

        # Get node attribute matrix. We initialize with deepwalk. 
        # with Deepwalk(G1) as dw:
        #     N1 = dw.get_node_embeddings()
        
        # with Deepwalk(G2) as dw:
        #     N2 = dw.get_node_embeddings()
        
        N1 = node2vec(G1)
        N2 = node2vec(G2)

        # Get edge attribute matrix
        E1 = list()
        E2 = list()

        # -- Use call counts as edge attributes --
        G1_edge_attr = sp.sparse.csr_matrix(cosine_similarity(N1, N1))
        G2_edge_attr = sp.sparse.csr_matrix(cosine_similarity(N2, N2))
        E1.append(G1_edge_attr)
        E2.append(G2_edge_attr)

        # Get initial similarity matrix
        H = cosine_similarity(N2, N1)
        H = (H - H.min()) / (H.max()-H.min())
        
        if sim_matrix_prev is not None:
            
            if sim_matrix_prev.size < H.size:
                temp = sim_matrix_prev
                sim_matrix_prev = np.zeros(H.shape)
                sim_matrix_prev[:temp.shape[0], :temp.shape[1]] = temp
                sim_matrix_prev = minmax_norm(sim_matrix_prev)
            
            elif sim_matrix_prev.size > H.size:
                sim_matrix_prev = sim_matrix_prev[:H.shape[0], :H.shape[1]]
                sim_matrix_prev = minmax_norm(sim_matrix_prev)
            
            H = learning_rate * sim_matrix_prev + (1 - learning_rate) * H
            
        
        # H = H / np.sum(np.sum(H))
        H = sp.sparse.coo_matrix(H)
        # H = get_prior_similarity(G1_nodes, G2_nodes)

        # H = np.identity(n1)
        final = FINAL(A1, A2, H, N1, N2, E1, E2, maxiter=1000, tol=1e-9)
        sim_matrix = final.main_proc().tocoo()
        
        if n1 == sim_matrix.shape[1]:
            row_labels = G1_nodes
            col_labels = G2_nodes
        else:
            col_labels = G1_nodes
            row_labels = G2_nodes
        
        # Convert to a numpy.ndarray
        sim_matrix = sim_matrix.A
        # TODO: Why are there NaN's?
        sim_matrix = np.nan_to_num(sim_matrix)
        # Normalize weights using min/max normalization
        lo = sim_matrix.min()
        hi = sim_matrix.max()
        sim_matrix = (sim_matrix - lo) / (hi - lo)
        sim_matrix_prev = sim_matrix
        print("Accuracy", accuracy(sim_matrix_prev))
    
    get_G1_label = lambda i: G1_nodes[i]

    for i, row in enumerate(sim_matrix):
        top_matches = np.argsort(row)[::-1]
        top_five = top_matches[:3]
        G1_nodes = tuple(G1_nodes)
        G2_nodes = tuple(G2_nodes)
        print(G2_nodes[i], "-->", ", ".join(map(get_G1_label, top_five)))

    print("======")
    print("Accuracy", accuracy(sim_matrix_prev))
    
    # Plot as heatmap
    _draw_heatmap(sim_matrix, save_name='readelf-objdump.pdf')
    set_trace()


