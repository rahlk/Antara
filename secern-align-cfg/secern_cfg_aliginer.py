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
    fig, ax = plt.subplots()
    im, cbar = heatmap(sim_matrix, col_labels, row_labels, ax=ax, cmap="YlGn", cbarlabel="Similarity Score")
    # texts = annotate_heatmap(im, valfmt="{x:.1f} t")
    fig.tight_layout()
    fig.savefig(save_name, bbox_inches='tight')

if __name__ == "__main__":
    # Test inputs to parse
    test_input_path = Path(root.joinpath('projects/elf/test_in/'))
    
    # ------------------------------------------------------ #
    #  Run instrumented programs to get dynamic call graphs  #
    # ------------------------------------------------------ #

    # Get call graphs of readelf
    readelf_bin_path = Path(root.joinpath('projects/elf/binutils/bin/readelf'))
    with CFGBuilder(readelf_bin_path, test_input_path) as readelf_builder:
        readelf_cfg = readelf_builder.get_dynamic_call_graph(opt_flags='--all')
        readelf_builder.draw_call_graph(readelf_cfg, fname="readelf.dot")
        _, readelf_adj = readelf_builder.graph_to_adjacency_matrix(readelf_cfg, use_weights=False)
        readelf_nodes, readelf_edge_attr = readelf_builder.graph_to_adjacency_matrix(readelf_cfg, use_weights=False)
    
    # Get call graphs of objdump
    objdump_bin_path = Path(root.joinpath('projects/elf/binutils/bin/objdump'))
    with CFGBuilder(objdump_bin_path, test_input_path) as objdump_builder:
        objdump_cfg = objdump_builder.get_dynamic_call_graph(opt_flags='-s')
        objdump_builder.draw_call_graph(objdump_cfg, fname="objdump.dot")
        _, objdump_adj = objdump_builder.graph_to_adjacency_matrix(objdump_cfg, use_weights=False)
        objdump_nodes, objdump_edge_attr = objdump_builder.graph_to_adjacency_matrix(objdump_cfg, use_weights=False)
    
    # ------------------------------- #
    #  Align call graphs using FINAL  #
    # ------------------------------- #

    # Get adjacency matrices
    A1 = readelf_adj
    A2 = objdump_adj

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
    E1.append(readelf_edge_attr)
    E2.append(objdump_edge_attr)

    # Previous similarity matrix (initialize with equal weights)
    # weight = (n1 * n2) ** -1
    H = np.random.random(((n2, n1)))
    # H = np.ones((n2, n1))
    H = H / np.sum(np.sum(H))
    H = sp.sparse.coo_matrix(H)

    for _ in range(100):
        final = FINAL(A1, A2, H, N1, N2, E1, E2)
        sim_matrix = final.main_proc().tocoo()
        H = sim_matrix

    if n1 == sim_matrix.shape[0]:
        row_labels = readelf_nodes
        col_labels = objdump_nodes
    else:
        col_labels = readelf_nodes
        row_labels = objdump_nodes
    
    # Convert to a numpy.ndarray
    sim_matrix = sim_matrix.A

    # Normalize weights using min/max normalization
    for i, row in enumerate(sim_matrix):
        lo = min(row)
        hi = max(row)
        sim_matrix[i] = (sim_matrix[i] - lo) / (hi - lo)
    
    print(sim_matrix)

    # Plot as heatmap
    draw_heatmap(sim_matrix, row_labels, col_labels, save_name='Readelf <-> Objdump.pdf')


