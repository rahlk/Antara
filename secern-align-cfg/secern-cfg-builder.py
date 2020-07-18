import networkx as nx
import pandas as pd
from pathlib import Path
from pdb import set_trace
import matplotlib.pyplot as plt
import shlex
import subprocess
from tqdm import tqdm
from utils import draw_call_graph
from utils import graph_to_adjacency_matrix

root=Path('/workspace/secern/')

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


def get_dynamic_call_graph(binary_path, test_input_path, opt_flags=""):
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
    - The edge weights represent the number of times the <caller, callee> pair 
      has been invoked.
    """

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
            subprocess.run([binary_path, opt_flags, test_input], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            
            # Convert the raw calltrace to a pandas dataframe
            call_trace = pd.read_csv('callgraph.csv')
            call_trace_df = call_trace_df.append(call_trace)
            
            # Update progress bar
            pbar.update(1)
    
    # Convert the calltrace to a NetworkX graph
    G = _calltrace_to_callgraph(call_trace_df)

    return G
 
if __name__ == "__main__":
    # Testing readelf
    binary_path = root.joinpath("projects/elf/binutils/bin/readelf")
    test_input_path = root.joinpath("projects/elf/test_in/")
    
    G = get_dynamic_call_graph(
        binary_path, test_input_path, opt_flags="--all")
    
    draw_call_graph(G)
    set_trace()
