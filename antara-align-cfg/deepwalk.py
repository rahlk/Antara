import os
import sys
import shlex
import subprocess
import numpy as np
import pandas as pd
import networkx as nx
from tqdm import tqdm
from pathlib import Path
from pdb import set_trace
import matplotlib.pyplot as plt
from collections import defaultdict

# Add project source to path
root = Path(os.path.abspath(os.path.join(
    os.getcwd().split('antara')[0], 'antara')))

py_path = root.joinpath('antara-align-cfg')
if py_path not in sys.path:
    sys.path.append(py_path)

class Arg:
    def __init__(self):
        self.seed = 0
        self.log = "INFO"
        self.workers = 1
        self.debug = False
        self.window_size = 5
        self.walk_length = 40
        self.undirected = True
        self.number_walks = 10
        self.format = 'edgelist'
        self.representation_size = 64
        self.vertex_freq_degree = False
        self.input = '.deepwalk.edgelist'
        self.output = '.deepwalk.embedding'
        self.matfile_variable_name = 'network'
        self.max_memory_data_size = 1000000000

class Deepwalk:
    def __init__(self, G):
        """ Get node embedding using Deepwalk
        
        Parameters
        ----------
        G: nx.DiGraph
            Networkx graph
        """
        self.G = G
        # Convert nodes to integers for deepwalk. 
        # Note: By default, node ordering is infered form G.nodes() below.
        self.int_G = nx.relabel.convert_node_labels_to_integers(G)
        
    def __enter__(self):
        """ Context manager initialization.
        """
        files_to_clean_up = ['.deepwalk.edgelist', '.deepwalk.embedding']
        for f in map(Path, files_to_clean_up):
            if f.exists():
                os.remove(f)
            else:
                continue
        # Save the graph as edgelist
        nx.write_edgelist(self.int_G, '.deepwalk.edgelist')
        return self
        
    @staticmethod
    def _get_embeddings():
        """
        Read saved embedding file and convert to an array
        
        Returns
        -------
        dict{str, list}
            A dictionary of node: node_embeddings 
        """
        embeddings = defaultdict(lambda: list())
        with open('.deepwalk.embedding', 'r') as embedding_file:
            for i, line in enumerate(embedding_file):
                if i == 0:  # Ignore header
                    continue
                else:
                    contents = line.split(" ")
                    index = int(contents[0])
                    embeddings[index] = list(map(float, contents[1:]))
        
        # Preserve ordering
        embedding_matrix = [] 
        for node in self.G.nodes():
            key = self.int_G.node_labels()
            embedding_matrix.append(embeddings[key[node]])

        return embeddings

    def get_node_embeddings(self):
        """
        Get node embedding by running deepwalk on CFG

        Returns
        -------
        np.ndarray
            Node embeddings (of size n*64)
        """

        # Build command
        cmd = ""
        cmd += "deepwalk "  # Call deepwalk
        # Input arguements to deepwalk
        cmd += "--number-walks 64 --seed 0 --format edgelist --input .deepwalk.edgelist --output .deepwalk.embedding --undirected False"
        cmd = shlex.split(cmd)
        # Run command
        proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        out, err = proc.communicate()
        embeddings = self._get_embeddings()

        # Convert to np.ndarray
        embeddings = np.array(embeddings)
        return embeddings

    def __exit__(self, exc_type, exc_val, exc_tb):
        """ Clean up opertaions
        """
        files_to_clean_up = ['.deepwalk.edgelist', '.deepwalk.embedding']
        for f in map(Path, files_to_clean_up):
            if f.exists():
                os.remove(f)
            else:
                continue

