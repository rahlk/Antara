import os
import sys
import shlex
import random
import logging
import subprocess
import numpy as np
import pandas as pd
import networkx as nx
from tqdm import tqdm
from pdb import set_trace
import matplotlib.pyplot as plt
from gensim.models import Word2Vec
from collections import defaultdict

logger = logging.getLogger()
logger.disabled = True

class Graph():
	def __init__(self, nx_G, is_directed=True, p=1, q=1):
		self.G = nx_G
		self.is_directed = is_directed
		self.p = p
		self.q = q

	@staticmethod
	def alias_setup(probs):
		'''
		Compute utility lists for non-uniform sampling from discrete distributions.
		Refer to https://hips.seas.harvard.edu/blog/2013/03/03/the-alias-method-efficient-sampling-with-many-discrete-outcomes/
		for details
		'''
		K = len(probs)
		q = np.zeros(K)
		J = np.zeros(K, dtype=np.int)

		smaller = []
		larger = []
		for kk, prob in enumerate(probs):
			q[kk] = K * prob
			if q[kk] < 1.0:
				smaller.append(kk)
			else:
				larger.append(kk)

		while len(smaller) > 0 and len(larger) > 0:
			small = smaller.pop()
			large = larger.pop()

			J[small] = large
			q[large] = q[large] + q[small] - 1.0
			if q[large] < 1.0:
				smaller.append(large)
			else:
				larger.append(large)

		return J, q

	@staticmethod
	def alias_draw(J, q):
		'''
		Draw sample from a non-uniform discrete distribution using alias sampling.
		'''
		K = len(J)

		kk = int(np.floor(np.random.rand() * K))
		if np.random.rand() < q[kk]:
			return kk
		else:
			return J[kk]

	def node2vec_walk(self, walk_length, start_node):
		'''
		Simulate a random walk starting from start node.
		'''
		G = self.G
		alias_nodes = self.alias_nodes
		alias_edges = self.alias_edges

		walk = [start_node]

		while len(walk) < walk_length:
			cur = walk[-1]
			cur_nbrs = sorted(G.neighbors(cur))
			if len(cur_nbrs) > 0:
				if len(walk) == 1:
					walk.append(cur_nbrs[self.alias_draw(
						alias_nodes[cur][0], alias_nodes[cur][1])])
				else:
					prev = walk[-2]
					next = cur_nbrs[self.alias_draw(alias_edges[(prev, cur)][0],
                                            alias_edges[(prev, cur)][1])]
					walk.append(next)
			else:
				break

		return walk

	def simulate_walks(self, num_walks, walk_length):
		'''
		Repeatedly simulate random walks from each node.
		'''
		G = self.G
		walks = []
		nodes = list(G.nodes())
		# print('Walk iteration:')
		for walk_iter in range(num_walks):
			# print(str(walk_iter+1), '/', str(num_walks))
			random.shuffle(nodes)
			for node in nodes:
				walks.append(self.node2vec_walk(walk_length=walk_length, start_node=node))

		return walks

	def get_alias_edge(self, src, dst):
		'''
		Get the alias edge setup lists for a given edge.
		'''
		G = self.G
		p = self.p
		q = self.q

		unnormalized_probs = []
		for dst_nbr in sorted(G.neighbors(dst)):
			if dst_nbr == src:
				unnormalized_probs.append(G[dst][dst_nbr]['label'] / p)
			elif G.has_edge(dst_nbr, src):
				unnormalized_probs.append(G[dst][dst_nbr]['label'])
			else:
				unnormalized_probs.append(G[dst][dst_nbr]['label'] / q)
		norm_const = sum(unnormalized_probs)
		normalized_probs = [
			float(u_prob) / norm_const for u_prob in unnormalized_probs]

		return self.alias_setup(normalized_probs)

	def preprocess_transition_probs(self):
		'''
		Preprocessing of transition probabilities for guiding the random walks.
		'''
		G = self.G
		is_directed = self.is_directed

		alias_nodes = {}
		for node in G.nodes():
			unnormalized_probs = [G[node][nbr]['label'] for nbr in sorted(G.neighbors(node))]
			norm_const = sum(unnormalized_probs)
			normalized_probs = [
						float(u_prob) / norm_const for u_prob in unnormalized_probs]
			alias_nodes[node] = self.alias_setup(normalized_probs)

		alias_edges = {}
		triads = {}

		if is_directed:
			for edge in G.edges():
				alias_edges[edge] = self.get_alias_edge(edge[0], edge[1])
		else:
			for edge in G.edges():
				alias_edges[edge] = self.get_alias_edge(edge[0], edge[1])
				alias_edges[(edge[1], edge[0])] = self.get_alias_edge(edge[1], edge[0])

		self.alias_nodes = alias_nodes
		self.alias_edges = alias_edges

		return self


def node2vec(G):
	""" Get node embedding with node2vec

	Paramters
	---------
	G: nx.DiGraph
		Input graph
	
	Returns
	-------
	np.array
		Node embeddings
	"""
	
	orig_G = G
	int_G = nx.relabel.convert_node_labels_to_integers(G,label_attribute='label')
	node_label_map = defaultdict(str)

	for int_node, str_node in zip(int_G.nodes(), orig_G.nodes()):
		node_label_map[str_node] = str(int_node)

	
	G = Graph(int_G, is_directed=True)
	G = G.preprocess_transition_probs()
	walks = G.simulate_walks(num_walks=64, walk_length=16)
	walks = [list(map(str, walk)) for walk in walks]
	model = Word2Vec(walks, size=128, window=64,
                  min_count=0, sg=1, workers=32, iter=128)
	
	embeddings = []
	for node in orig_G.nodes():
		key = node_label_map[node]
		vector = model.wv.get_vector(key).tolist()
		embeddings.append(vector)

	embeddings = np.array(embeddings)
	return embeddings
