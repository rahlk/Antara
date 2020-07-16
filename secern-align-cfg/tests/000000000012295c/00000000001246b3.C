#include <stdio.h>

int S[100001];
int N[100001];
int E[100001];
int W[100001];

int main() {
	int T, P, Q;
	scanf("%d",&T);

	for (int t = 1; t <= T; t++) {
		scanf("%d %d", &P, &Q);

		for (int i = 0; i <= Q; i++) S[i] = N[i] = E[i] = W[i] = 0;

		for (int p = 0; p < P; p++) {
			int x, y;
			char d;
			
			scanf("%d %d %c", &x, &y, &d);
			if (d == 'W') W[x - 1]++;
			else if (d == 'E')E[x + 1]++;
			else if (d == 'N')N[y + 1]++;
			else if (d == 'S')S[y - 1]++;
		}

		for (int i = 1; i <= Q; i++) {
			N[i] += N[i - 1];
			E[i] += E[i - 1];
		}
		for (int i = Q - 1; i >= 0; i--) {
			S[i] += S[i + 1];
			W[i] += W[i + 1];
		}
		for (int i = 0; i <= Q; i++) {
			N[i] = S[i] + N[i];
			E[i] = E[i] + W[i];
		}

		int X, Y, tx, ty;
		X = Y = tx = ty = 0;
		for (int i = 0; i <= Q; i++) {
			if (tx < E[i]) { X = i; tx = E[i]; }
			if (ty < N[i]) { Y = i; ty = N[i]; }
		}
		
		printf("Case #%d: %d %d\n", t, X, Y);
	}


	return 0;
}