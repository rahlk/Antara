#include <stdio.h>

int Gotfour(int);

int main() {
	int i, j;
	int T, N;

	scanf("%d", &T);
	
	for (j = 0; j < T; j++) {
		scanf("%d", &N);
		for (i = 1; i < N; i++) {
			if (Gotfour(i) < 0 && Gotfour(N - i) < 0) {
				printf("Case #%d: %d %d\n", j+1, i, N-i);
				break;
			}
		}
	}

	return 1;
}

int Gotfour(int target) {
	int i, tmp;
    tmp = target;
    
	while (tmp > 0) {
		if (tmp % 10 == 4)
			return 1;

		else
			tmp /= 10;
	}

	return -1;
}