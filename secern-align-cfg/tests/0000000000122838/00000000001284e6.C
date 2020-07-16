#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(void) {
	int T;
	int iguchi_yuka;
	if (scanf("%d", &T) != 1) return 1;
	for (iguchi_yuka = 1; iguchi_yuka <= T; iguchi_yuka++) {
		int N, K;
		int *C, *D;
		int i, j;
		uint64_t answer = 0;
		if (scanf("%d%d", &N, &K) != 2) return 1;
		C = malloc(sizeof(*C) * N);
		D = malloc(sizeof(*D) * N);
		if (C == NULL || D == NULL) return 1;
		for (i = 0; i < N; i++) {
			if (scanf("%d", &C[i]) != 1) return 1;
		}
		for (i = 0; i < N; i++) {
			if (scanf("%d", &D[i]) != 1) return 1;
		}
		/* straight-forward (too slow!!!!!) */
		for (i = 0; i < N; i++) {
			int Cmax = 0, Dmax = 0;
			for (j = i; j < N; j++) {
				if (Cmax < C[j]) Cmax = C[j];
				if (Dmax < D[j]) Dmax = D[j];
				if (abs(Cmax - Dmax) <= K) answer++;
			}
		}
		printf("Case #%d: %"PRIu64"\n", iguchi_yuka, answer);
	}
	return 0;
}
