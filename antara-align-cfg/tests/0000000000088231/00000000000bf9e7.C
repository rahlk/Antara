
#include <stdio.h>

int hasFour(long long n) {
	while (n) {
		int digit = n % 10;
		if (digit == 4)
			return 1;
		n /= 10;
	}
	return 0;
}


int main() {

	int T, cnt = 1;
	scanf("%d", &T);

	while (T--) {
		long long N;
		scanf("%lld", &N);

		long long limit = (N % 2) ? N / 2 + 1 : N / 2;
		for (long long i = limit; i >= 1; i--) {
			if (!hasFour(i) && !hasFour(N - i)) {
				printf("Case #%d: %lld %lld\n", cnt++, i, N - i);
				break;
			}
		}
	}

	return 0;
}