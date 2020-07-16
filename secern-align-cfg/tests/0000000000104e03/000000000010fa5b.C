#include <stdio.h>

int R, C;
int d[6][6];
int parent[6][6][2];

int f (int I, int J, int K) {
	
	int i, j;
	
	if (K == R * C) return 1;
	
	d[I][J] = 1;
	
	for (i = 1; i <= R; i++) {
		
		if (I == i) continue;
		
		for (j = 1; j <= C; j++) {
		
			if ((J == j) || (I - J == i - j) || (I + J == i + j)) continue;
			if (d[i][j]) continue;
			
			parent[I][J][0] = i;
			parent[I][J][1] = j;
			if (f (i, j, K + 1)) { d[I][J] = 1; return 1; }
		}
	}
	
	d[I][J] = 0;
	
	return 0;
}

void print (int i, int j) {
	
	if (!i || !j) return;
	
	printf ("%d %d\n", i, j);
	print (parent[i][j][0], parent[i][j][1]);
}

int main(void) {

	int T, t, i, j, k;
	
	scanf ("%d", &T);
	
	for (t = 1; t <= T; t++) {
		
		scanf ("%d %d", &R, &C);

		printf ("Case #%d: ", t);
		
		for (k = i = 1; i <= R; i++) {
			
			for (j = 1; j <= C; j++) {
			
				if (f (i, j, 1)) { k = 0; break; }
			}
			
			if (!k) break;
		}
		
		if (!k) {
			
			puts ("POSSIBLE");
			print (i, j);
		}
		else puts ("IMPOSSIBLE");
	}
	
	return 0;
}
