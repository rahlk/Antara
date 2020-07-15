import networkx as nx
import pandas as pd
from pdb import set_trace
import matplotlib.pyplot as plt


if __name__ == "__main__":
    df = pd.read_csv("callgraph.csv", delimiter=",")
    grouped = df.groupby(df.columns.tolist()).size().reset_index().rename(columns={0:'label'})
    Graphtype = nx.DiGraph()
    G = nx.from_pandas_edgelist(grouped, edge_attr=True, create_using=Graphtype)
    nx.draw(G, with_labels=True)
    nx.drawing.nx_pydot.write_dot(G, 'callgraph.dot')
    plt.savefig('plotgraph.png', dpi=300, bbox_inches='tight')