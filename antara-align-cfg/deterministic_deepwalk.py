import os
import sys
import shlex
import random
import logging
import itertools
import subprocess
import numpy as np
import pandas as pd
import networkx as nx
from tqdm import tqdm
from pdb import set_trace
import matplotlib.pyplot as plt
from gensim.models import Word2Vec
from gensim.models import FastText
from collections import defaultdict
from gensim.test.utils import get_tmpfile

logger = logging.getLogger()
logger.disabled = False

def simulate_walks_non_randomly(call_paths):
	""" Do a depth first search to generate all the call graph sequences
	"""
	for call_path in call_paths:
		length = len(call_paths)
		indices = list(range(length+1))
		for i,j in itertools.combinations(indices,2):
			yield call_path[i:j]

def node_embedding(G, G_call_paths, embedding_name="tmp1.model", normed=False):
	""" Get node embedding with node2vec

	Paramters
	-------``
	G: nx.DiGraph
		Input graph
	normed: bool (default: False)
		Normalize embeddings or don't.
	
	Returns
	-------
	np.array
		Node embeddings
	"""

	# walks = simulate_walks_non_randomly(G_call_paths)
	# walks = [walk for walk in G_call_paths]
	walks = [G_call_paths]
	model = Word2Vec(size=128, window=64, min_count=0, sg=1, workers=10, iter=128)
	model.build_vocab(walks)
	if not os.path.exists(embedding_name):
		model.train(walks, epochs=model.epochs, total_examples=model.corpus_count)
	else:
		model = Word2Vec.load(embedding_name)
		model.train(walks, epochs=model.epochs, total_examples=model.corpus_count)
	
	model.save(embedding_name)
	
	embeddings = []
	for node in G.nodes():
		vector = model.wv.get_vector(node).tolist()
		embeddings.append(vector)

	embeddings = np.array(embeddings)

	if normed == True:
		embeddings /= np.linalg.norm(embeddings)

	return embeddings
