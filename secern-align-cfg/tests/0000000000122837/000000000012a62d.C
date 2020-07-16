#include <stdio.h>

int main() {
	int t, w;
	scanf("%d %d", &t, &w);
	int r[6];
	long long x;
	for (int i = 1; i <= t; ++i) {
		printf("200\n");
		fflush(stdout);
		scanf("%lld", &x);
		r[5] = (x >> 33) & 127;
		r[4] = (x >> 40) & 127;
		r[3] = x >> 50;
		printf("40\n");
		fflush(stdout);
		scanf("%lld", &x);
		x -= (r[3] << 10) + (r[4] << 8) + (r[5] << 6);
		r[2] = (x >> 13) & 127;
		r[1] = (x >> 20) & 127;
		r[0] = x >> 40;
		for (int i = 0; i < 6; ++i) {
			printf(i ? " %d" : "%d", r[i]);
		}
		printf("\n");
		fflush(stdout);
		scanf("%lld", &x);
	}
}
