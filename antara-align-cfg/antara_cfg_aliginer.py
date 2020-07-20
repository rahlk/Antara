import os
import sys
import logging
import scipy as sp
import numpy as np
import pandas as pd
import matplotlib
import matplotlib.pyplot as plt
import networkx as nx
from tqdm import tqdm
from pathlib import Path
from pdb import set_trace
from secern_cfg_builder import CFGBuilder
from graph_align_tk import FINAL
from utils import heatmap, annotate_heatmap

# Logging Config
logging.basicConfig(format='[+] %(message)s', level=logging.INFO)

root = Path('/workspace/secern/')
py_path = Path('/workspace/secern/secern-align-cfg')

if py_path not in sys.path:
    sys.path.append(py_path)

def draw_heatmap(sim_matrix, row_labels, col_labels, save_name="foo.pdf"):
    w = 4
    h = 3
    d = 150
    plt.figure(figsize=(w, h), dpi=d)
    heatmap = plt.imshow(sim_matrix)
    heatmap.set_cmap("YlGn")
    plt.colorbar()
    plt.savefig(save_name, bbox_inches='tight')

if __name__ == "__main__":
    # Test inputs to parse
    test_input_path = Path(root.joinpath('projects/elf/test_in/'))
    
    # ------------------------------------------------------ #
    #  Run instrumented programs to get dynamic call graphs  #
    # ------------------------------------------------------ #

    # Get call graphs of readelf
    seed_range_G1 = np.random.randint(0, 500, size=50)
    G1_bin_path = Path(root.joinpath('projects/elf/binutils/bin/readelf'))
    with CFGBuilder(G1_bin_path, test_input_path, 'readelf') as G1_builder:
        G1 = G1_builder.get_dynamic_call_graph(opt_flags='--all', seed_range_G1)
        G1_builder.draw_call_graph(G1, fname="readelf1.dot")
        _, G1_adj = G1_builder.graph_to_adjacency_matrix(G1, use_weights=False)
        G1_nodes, G1_edge_attr = G1_builder.graph_to_adjacency_matrix(G1, use_weights=False)
    
    # Get call graphs of objdump
    seed_range_G2 = np.random.randint(501, 1000, size=50)
    G2_bin_path = Path(root.joinpath('projects/elf/binutils/bin/readelf'))
    with CFGBuilder(G2_bin_path, test_input_path, 'readelf') as G2_builder:
        G2 = G2_builder.get_dynamic_call_graph(opt_flags='--all', seed_range_G2)
        G2_builder.draw_call_graph(G2, fname="readelf2.dot")
        _, G2_adj = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)
        G2_nodes, G2_edge_attr = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)

    # # Get call graphs of objdump
    # G2_bin_path = Path(root.joinpath('projects/elf/binutils/bin/objdump'))
    # with CFGBuilder(G2_bin_path, test_input_path, 'objdump') as G2_builder:
    #     G2 = G2_builder.get_dynamic_call_graph(opt_flags='-s')
    #     G2_builder.draw_call_graph(G2, fname="objdump.dot")
    #     _, G2_adj = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)
    #     G2_nodes, G2_edge_attr = G2_builder.graph_to_adjacency_matrix(G2, use_weights=False)
    
    # ------------------------------- #
    #  Align call graphs using FINAL  #
    # ------------------------------- #

    # Get adjacency matrices
    A1 = G1_adj
    A2 = G2_adj

    # Get the vertex counts
    n1 = A1.shape[0]
    n2 = A2.shape[0]
    
    # Get node attribute matrix. We initialize with ones. 
    N1 = np.ones((n1, 1))
    N2 = np.ones((n2, 1))

    # Get edge attribute matrix
    E1 = list()
    E2 = list()
    # -- Use call counts as edge attributes --
    E1.append(G1_edge_attr)
    E2.append(G2_edge_attr)

    # Previous similarity matrix (initialize with equal weights)
    # weight = (n1 * n2) ** -1
    H = np.random.random(((n2, n1)))
    # H = np.ones((n2, n1))
    H = H / np.sum(np.sum(H))
    H = sp.sparse.coo_matrix(H)

    for _ in tqdm(range(20), desc="Computing CFG similarity..."):
        final = FINAL(A1, A2, H, N1, N2, E1, E2)
        sim_matrix = final.main_proc().tocoo()
        H = sim_matrix

    if n1 == sim_matrix.shape[1]:
        row_labels = G1_nodes
        col_labels = G2_nodes
    else:
        col_labels = G1_nodes
        row_labels = G2_nodes
    
    # Convert to a numpy.ndarray
    sim_matrix = sim_matrix.A
    
    # Normalize weights using min/max normalization
    lo = sim_matrix.min()
    hi = sim_matrix.max()
    sim_matrix = (sim_matrix - lo) / (hi - lo)

    get_G1_label = lambda i: tuple(G1_nodes)[i]

    for i, row in enumerate(sim_matrix):
        top_matches = np.argsort(row)[::-1]
        top_five = top_matches[:5]
        G2_nodes = tuple(G2_nodes)
        G1_nodes = tuple(G1_nodes)
        print(G2_nodes[i], "-->", ", ".join(map(get_G1_label, top_five)))

    # Plot as heatmap
    draw_heatmap(sim_matrix, row_labels, col_labels, save_name='Readelf <-> Objdump.pdf')


