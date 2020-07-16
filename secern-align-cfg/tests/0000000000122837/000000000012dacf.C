#include<stdio.h>

long long two_power(int n){
	long long rt = 1;
	for (int i = 0; i < n; i++) rt = rt * 2;
	return rt;
}

int main() {
	int t, w;
	scanf("%d %d", &t, &w);
	int d;
	long long x;
	long long r1, r2, r3, r4, r5, r6;
	printf("50\n");
	fflush(stdout);
	scanf("%lld", &x);
	r3 = (x / two_power(16)) % 128;
	x = x - two_power(16)*r3;
	r2 = (x / two_power(25)) % 128;
	x = x - two_power(25)*r2;
	r1 = (x / two_power(50)) % 128;
	x = x - two_power(50)*r1;
	printf("210\n");
	fflush(stdout);
	scanf("%lld", &x);
	r6 = (x / two_power(35)) % 128;
	x = x - two_power(35)*r6;
	r5 = (x / two_power(42)) % 128;
	x = x - two_power(42)*r5;
	r4 = (x / two_power(52)) % 128;
	x = x - two_power(52)*r6;

	printf("%d %d %d %d %d %d", r1, r2, r3, r4, r5, r6);
}