#include <stdio.h>

int N, K;
int C[100005];
int D[100005];

int Max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int Abs(int n) {
	if (n < 0)
		return -1 * n;
	else
		return n;
}

int main(void) {
	int t, T;
	int i, ans;
	int j,k;
	int maxC, maxD;

	scanf("%d", &T);

	for (t = 1; t <= T; t++) {
		scanf("%d%d", &N, &K);
		ans = 0;

		for (i = 1; i <= N; i++) 
			scanf("%d", &C[i]);
		
		for (i = 1; i <= N; i++)
			scanf("%d", &D[i]);


		for (i = 1; i <= N; i++) {
			for (j = i; j <= N; j++) {
				maxC = -1;
				maxD = -1;
				for (k = i; k <= j; k++) {
					maxC = Max(maxC, C[k]);
					maxD = Max(maxD, D[k]);
				}

				if (Abs(maxC - maxD) <= K) {
					//printf("%d %d\n", i, j);
					ans++;
				}
			}
		}


		printf("Case #%d: %d\n", t, ans);
	}
}