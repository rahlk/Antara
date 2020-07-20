#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int T;	//test cases
	int N, K;	//N size, K skill gap
	int *C;
	int *D;
	int result;
	int maxC, maxD;

	scanf("%d", &T);

	for (int i = 1; i <= T; i++) {
		printf("Case #%d: ", i);
		fflush(stdout);

		result = 0;
		maxC = 0;
		maxD = 0;

		scanf("%d", &N);
		scanf("%d", &K);

		C = (int*)calloc(N, sizeof(int));
		D = (int*)calloc(N, sizeof(int));

		for (int k = 0; k < N; k++)
			scanf("%d", &C[k]);
		for (int k = 0; k < N; k++)
			scanf("%d", &D[k]);

		for (int dim = 1; dim <= N; dim++) {
			for (int start = 0; start < N && start + dim <= N; start++) {
				maxC = -1;
				maxD = -1;
				for (int go = start; go < start + dim; go++) {
					if (C[go] > maxC)
						maxC = C[go];
					if (D[go] > maxD)
						maxD = D[go];
				}
				if (abs(maxC - maxD) <= K) {
					result++;
				}

			}
		}

		free(C); 
		free(D);

		printf("%d\n", result);
		fflush(stdout);
	}

	return 0;
}