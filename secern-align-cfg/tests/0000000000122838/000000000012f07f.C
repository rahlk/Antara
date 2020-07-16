#include <stdio.h>

int D[10005];
int C[10005];

int main() {
	int T, N, K;

	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		int cnt = 0;

		scanf("%d %d", &N, &K);
		for (int i = 0; i < N; i++) 
			scanf("%d", &C[i]);
		for (int i = 0; i < N; i++)
			scanf("%d", &D[i]);

		for (int j = 0; j < N; j++) {
			int maxc = 0;
			int maxd = 0;

			for (int x = j; x < N; x++) {
				if (maxc < C[x]) maxc = C[x];
				if (maxd < D[x]) maxd = D[x];
				if (maxc - maxd >= (-1)*K && maxc - maxd <= K)
					cnt++;
			}
		}

		printf("Case #%d: %d\n", t, cnt);
	}
	return 0;
}
