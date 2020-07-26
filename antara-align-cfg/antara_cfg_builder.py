import os
import sys
import shlex
import subprocess
import pandas as pd
import networkx as nx
from tqdm import tqdm
from pathlib import Path
from pdb import set_trace
import matplotlib.pyplot as plt

# Add project source to path
root = Path(os.path.abspath(os.path.join(
    os.getcwd().split('antara')[0], 'antara')))

py_path = root.joinpath('antara-align-cfg')
if py_path not in sys.path:
    sys.path.append(py_path)

class CFGBuilder:
    def __init__(self, binary_path, test_input_path, project_name=""):
        """ Build a dynamic call graph.
        
        Parameters
        ----------
        binary_path: str (or pathlib.PosixPath)
            Path to the binary
        test_input_path: str (or pathlib.PosixPath)
            Directory containing the test_inputs 
        """
        self.G = None
        self.call_path = []
        self.prj_name = project_name
        self.binary_path = binary_path
        self.test_input_path = test_input_path
        self.all_seeds = [seed for seed in test_input_path.glob("*")]
    
    def __enter__(self):
        """ Context manager initialization.
        """
        return self

    @staticmethod
    def draw_call_graph(G, fname="tmp.pdf"):
        """ Convert callgraph to a pdf

        Parameters
        ----------
        G: nx.DiGraph
            Input graph
        fname: str
            File name to save as
        """
        try:
            nx.drawing.nx_pydot.write_dot(G, ".tmp.dot")
            subprocess.run(["dot", "-Tpdf", ".tmp.dot", "-o", fname],
                           stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        finally:
            if os.path.exists(".tmp.dot"):
                os.remove(".tmp.dot")

    @staticmethod
    def _calltrace_to_callgraph(trace_df):
        """ Convert call trace to the callgraph

        Parameters
        ----------
        trace_df: pandas.DataFrame
            The call trace over several runs a dataframe 
        
        Returns
        -------
        nx.DiGraph
            Call graph
        """

        # Aggregate the run callgraph edge counts
        grouped = trace_df.groupby(trace_df.columns.tolist()).size().reset_index().rename(columns={0: 'label'})

        # Initialize and populate weighted-directed-graph 
        Graphtype = nx.DiGraph()
        G = nx.from_pandas_edgelist(grouped, edge_attr=True, create_using=Graphtype)
        return G

    @staticmethod
    def graph_to_adjacency_matrix(G, use_weights=True):
        """ Convert a networkx graph to an adjacency matrix

        Parameters
        ----------
        G: nx.DiGraph
            Input networkx graph
        use_weights: bool
            Include weights to populate the adjacency matrix values

        Returns
        -------
        scipy.sparse
            A sparse adjacency matrix
        """
        node_list = tuple(G.nodes())
        if use_weights:
            adj_mtx = nx.linalg.graphmatrix.adjacency_matrix(G, weight='label')
        else:
            adj_mtx = nx.linalg.graphmatrix.adjacency_matrix(G, weight=None)

        return node_list, adj_mtx

    @staticmethod
    def _compute_call_path(trace_df):
        """ Convert call trace edge list to a set of paths 

        Parameters
        ----------
        trace_df: pd.DataFrame
            Edge list as a dataframe.

        Returns
        -------
        list
            A list of all takes paths
        """

        num_edges = len(trace_df)
        path = [trace_df.iloc[0].source]
        for i in range(1, num_edges):
            prev_target = trace_df.iloc[i - 1].target
            curr_source = trace_df.iloc[i].source
            # If the path continues from the same node, 
            # then consider it only once
            if prev_target != curr_source:
                path.append(prev_target)
            path.append(curr_source)
        return path

    def get_dynamic_call_graph(self):
        """ Getter method to return the call graph
        
        Returns
        -------
        nx.DiGraph
            The dynamic graph
        """
        
        assert self.G, "Dynamic graph has not been built yet. Please call self.build_dynamic_call_graph first."
        return self.G 

    def get_call_path(self):
        """ Getter method to return the call path
        
        Returns
        -------
        list
            The paths taken by the program as a list of nodes
        """

        return self.call_path 

    def build_dynamic_call_graph(self, seed_range, opt_flags="", prev_edges=None):
        """ Runs a test input on the instrumented program to gather the dynamic 
            call graph.

        Parameters
        ----------
        opt_flags: str 
            Commandline arguments/flag
        test_input_path: str (or pathlib.PosixPath)
            Directory containing the test_inputs 
        
        Returns
        -------
        nx.DiGraph
            A networkx style directed weighted call graph.
        
        Notes
        -----
          - The edge weights represent the number of times the <caller, callee> 
            pair has been invoked.
        """
        binary_path = self.binary_path
        test_input_path = self.test_input_path
        all_seeds = self.all_seeds

        if isinstance(binary_path, str):
            binary_path = Path(binary_path)
        
        if isinstance(test_input_path, str):
            test_input_path = Path(test_input_path)
        
        assert binary_path.exists(), "Binary path does not exist."
        assert test_input_path.exists(), "Test inputs path does not exist."

        if prev_edges is None:
            call_trace_df = pd.DataFrame(columns=['source', 'target'])
        else:
            call_trace_df = prev_edges

        # Loop through the test files and run them on the binary.
        for input_num in seed_range:
            # Remove any previous instances of callgraph.csv
            if os.path.exists("callgraph.csv"):
                os.remove("callgraph.csv")
            test_input = all_seeds[input_num]
            # Run the instrumented binary
            subprocess.run([binary_path, opt_flags, test_input],
                stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            # Convert the raw calltrace to a pandas dataframe
            call_trace = pd.read_csv('callgraph.csv')
            call_trace_df = call_trace_df.append(call_trace)
                    
        # Convert the calltrace to a NetworkX graph
        self.call_path = call_trace_df
        self.G = self._calltrace_to_callgraph(call_trace_df)

        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        """ Clean up opertaions
        """
        pwd = os.getcwd()
        files_to_clean_up = ['callgraph.csv', 'callgraph.dot', 'out_data.dot', 'outfile.pdf', 'plotgraph.png']
        for f in map(Path, files_to_clean_up):
            if f.exists():
                os.remove(f)
            else:
                continue

