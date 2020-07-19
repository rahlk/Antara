import os
import networkx as nx
import pandas as pd
from pathlib import Path
from pdb import set_trace
import matplotlib.pyplot as plt
import shlex
import subprocess
from tqdm import tqdm

root=Path('/workspace/secern/')

class CFGBuilder:
    def __init__(self):
        pass
    
    def __enter__(self, binary_path, test_input_path):
        """ Context manager initialization.
        
        Parameters
        ----------
        binary_path: str (or pathlib.PosixPath)
            Path to the binary
        test_input_path: str (or pathlib.PosixPath)
            Directory containing the test_inputs 
        """
        self.binary_path = binary_path
        self.test_input_path = test_input_path

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
        dot_data = StringIO()
        nx.drawing.nx_pydot.write_dot(G, "dot_data.dot")
        nx.drawing.nx_pydot.write_dot(G, dot_data)
        graph = pydot.graph_from_dot_data(dot_data.getvalue())[0]

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

        if use_weights:
            adj_mtx = nx.linalg.graphmatrix.adjacency_matrix(G, weight='label')
        else:
            adj_mtx = nx.linalg.graphmatrix.adjacency_matrix(G, weight=None)

        return adj_mtx

    def get_dynamic_call_graph(self, opt_flags=""):
        """ Runs a test input on the instrumented program to gather the dynamic 
            call graph.

        Parameters
        ----------
        binary_path: str (or pathlib.PosixPath)
            Path to the binary
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
        
        if isinstance(binary_path, str):
            binary_path = Path(binary_path)
        
        if isinstance(test_input_path, str):
            test_input_path = Path(test_input_path)
        
        assert binary_path.exists(), "Binary path does not exist."
        assert test_input_path.exists(), "Test inputs path does not exist."

        call_trace_df = pd.DataFrame(columns=['source', 'target'])

        # Loop through the test files and run them on the binary. 
        with tqdm(total=50) as pbar:
            for input_num, test_input in enumerate(test_input_path.glob("*")):
                # TODO: REMOVE THE FOLLOWING 2 LINES
                if input_num > 50:
                    continue

                # Run the instrumented binary
                subprocess.run([binary_path, opt_flags, test_input],
                    stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
                
                # Convert the raw calltrace to a pandas dataframe
                call_trace = pd.read_csv('callgraph.csv')
                call_trace_df = call_trace_df.append(call_trace)
                
                # Update progress bar
                pbar.update(1)
        
        # Convert the calltrace to a NetworkX graph
        G = self._calltrace_to_callgraph(call_trace_df)

        return G

    def __exit__(self, exc_type, exc_val, exc_tb):
        """ Clean up opertaions
        """
        pwd = os.getcwd()
        files_to_clean_up = ['callgraph.csv', 
            'callgraph.dot', 'out_data.dot', 'outfile.pdf', 'plotgraph.png']
        for f in map(Path, files_to_clean_up):
            if f.exists():
                os.remove(f)
            else:
                continue

 
if __name__ == "__main__":
    # Testing readelf
    binary_path = root.joinpath("projects/elf/binutils/bin/readelf")
    test_input_path = root.joinpath("projects/elf/test_in/")    
    G = get_dynamic_call_graph(
        binary_path, test_input_path, opt_flags="--all")
