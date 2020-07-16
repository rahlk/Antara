#include <stdio.h>
#include <stdlib.h>
void main() {
	unsigned int T;
	unsigned int N;
	char P[100][50001];
	int i, j, k;

	scanf("%u", &T);
	for (i = 0; i < T; i++) {

		scanf("%u", &N);
		scanf("%s", P[i]);
		for (j = 0; j < (2*N-2); j++) {
			if (P[i][j] == 'E')
				P[i][j] = 'S';
			else
				P[i][j] = 'E';
		}

	}

	for (i = 0; i < T; i++) {
		printf("Case #%u: %s\n", i+1, P[i]);

	}	

}
