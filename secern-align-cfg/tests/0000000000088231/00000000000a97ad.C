#include <stdio.h>

long long int T, N, a, b;

int main() {
	scanf("%lld", &T);
	for (int tc = 1; tc <= T; tc++) {
		scanf("%lld", &N);
		a = N, b = 0;
		long long int pow = 1;

		while (a > pow) {
			if ((a % (pow * 10)) / pow == 4) {
				a -= pow;
				b += pow;
			}
			pow *= 10;
		}

		printf("Case #%d: %lld %lld\n", tc, a, b);
	}
	return 0;
}