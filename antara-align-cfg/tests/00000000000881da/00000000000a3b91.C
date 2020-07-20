#include <stdio.h>

char str[50005];

int main(void) {
	int t, T;
	int i;
	int N;

	scanf("%d", &T);

	for (t = 1; t <= T; t++) {
		scanf("%d", &N);
		scanf("%s", str);

		printf("Case #%d: ", t);
		for (i = 0; i < 2*N - 2; i++) {
			if (str[i] == 'E')
				printf("S");
			else
				printf("E");
		}
		printf("\n");


		
	}
}