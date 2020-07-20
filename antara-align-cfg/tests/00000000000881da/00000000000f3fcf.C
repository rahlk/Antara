#include <stdio.h>

int main(void) {
	int T, N;
	int i, j;
	char go[50000], answer[50000];

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		scanf("%s", go);
		for (j = 0; j < 2 * (N - 1); j++) {
			if (go[j] == 'S')
				answer[j] = 'E';

			else
				answer[j] = 'S';
		}
		answer[j] = '\0';

		printf("Case #%d: %s\n", i + 1, answer);
	}

	return 0;
}