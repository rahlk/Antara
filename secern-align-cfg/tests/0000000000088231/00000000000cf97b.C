#include <stdio.h>


int main(void) {
	int T, N, tmp1, tmp2;
	int i, j;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		tmp1 = N;
		tmp2 = 0;
		for (j = 1; j < N; j = j*10) {
			if ((tmp1 % 10) == 4)
				tmp2 = tmp2 + j;

			tmp1 = tmp1 / 10;
		}

		printf("Case #%d: %d %d\n", i+1, tmp2, N - tmp2);
	}

	return 0;
}