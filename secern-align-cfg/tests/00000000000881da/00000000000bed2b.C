#include <stdio.h>

int main () {
	int T, N, i, j;
	char My[50010], Lydia[50010];

	scanf("%d", &T);

	for (i = 0; i < T; ++i) {
		scanf("%d", &N);
		scanf(" %s", Lydia);

		for (j = 0; Lydia[j]; ++j) {
			if ( Lydia[j] == 'E' ) {
				My[j] = 'S';
			} else {
				My[j] = 'E';
			}
		}

		My[j] = '\0';

		printf("Case #%d: %s\n", i+1, My);
	}

	return 0;
}