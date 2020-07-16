#include <stdio.h>

long long int T, N, a, b;

int main() {
	scanf("%d", &T);
	for (int tc = 1; tc <= T; tc++) {
		scanf("%d", &N);
		a = N, b = 0;
		long long int pow = 1;

		while (a > pow) {
			if (a % (pow * 10) == 4) {
				a -= pow;
				b += pow;
			}
			pow *= 10;
		}

		printf("Case #%d: %d %d", tc, a, b);
	}
	return 0;
}