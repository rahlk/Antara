import os
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

root=Path('/workspace/antara/')

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
        self.int_G = nx.relabel.convert_node_labels_to_integers(
            G, label_attribute='label')
        
    def __enter__(self):
        """ Context manager initialization.
        """
        file_to_clean_up = '.node2vec.emb'
        for f in map(Path, file_to_clean_up):
            if f.exists():
                os.remove(f)
            else:
                continue
        
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
        embeddings = defaultdict(lamda: list())
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

