#include<stdio.h>

long long two_power(int n){
	long long rt = 1;
	for (int i = 0; i < n; i++) rt = rt * 2;
	return rt;
}

int main() {
	int t, w;
	scanf("%d %d", &t, &w);
	for (int i = 0; i < t; i++) {
		int d;
		long long x;
		long long r1, r2, r3, r4, r5, r6;

		printf("210\n");
		fflush(stdout);
		scanf("%lld", &x);
		r6 = (x / two_power(35)) % 128;
		x = x - two_power(35)*r6;
		r5 = (x / two_power(42)) % 128;
		x = x - two_power(42)*r5;
		r4 = (x / two_power(52)) % 128;
		x = x - two_power(52)*r6;

		printf("50\n");
		fflush(stdout);
		scanf("%lld", &x);
		x = x - r4 * two_power(12) - r5 * two_power(10) - r6 * two_power(8);
		r3 = (x / two_power(16)) % 128;
		x = x - two_power(16)*r3;
		r2 = (x / two_power(25)) % 128;
		x = x - two_power(25)*r2;
		r1 = (x / two_power(50)) % 128;
		x = x - two_power(50)*r1;


		printf("%d %d %d %d %d %d\n", r1, r2, r3, r4, r5, r6);
		fflush(stdout);
	}
}