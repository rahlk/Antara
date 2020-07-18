import networkx as nx
import pandas as pd
from pathlib import Path
from pdb import set_trace
import matplotlib.pyplot as plt
import shlex
import subprocess
from io import StringIO
import pydot

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
    # graph.write_pdf(fname)
