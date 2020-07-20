import os
import networkx as nx
import pandas as pd
from pdb import set_trace
import matplotlib.pyplot as plt

if __name__ == "__main__":
    df = pd.read_csv("gcj2019.csv", index_col=False)
    for taskname, task_payload in df.groupby('task'):
        for i in range(len(task_payload)):
            xx = task_payload.iloc[i]
            if not xx.file.endswith('.C'):
                continue
            else:
                task_folder = "tests/" + taskname
                task_soln_filename = task_folder + '/' + xx.file
                if not os.path.exists(task_folder):
                    os.mkdir(task_folder)
                with open(task_soln_filename, "wb") as fhandler:
                    fhandler.write(xx.flines.encode('utf-8'))




            
            
    