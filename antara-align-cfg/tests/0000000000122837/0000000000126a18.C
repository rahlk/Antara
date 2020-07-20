#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int tt, ii, w, i;
	long long s220, s55;
	int r[7];

	scanf("%d%d", &tt, &w);
	for(ii = 1; ii <= tt; ii++) {
		printf("220\n55\n");
		fflush(stdout);
		scanf("%lld%lld", &s220, &s55);
		r[6] = (s220 >> 36) & 127;
		r[5] = (s220 >> 44) & 127;
		r[4] = (s220 >> 55) & 127;
		s55 -= r[4] << 13;
		s55 -= r[5] << 11;
		s55 -= r[6] << 9;
		r[3] = (s55 >> 18) & 127;
		r[2] = (s55 >> 27) & 127;
		r[1] = (s55 >> 55) & 127;
		for(i = 1; i <= 6; i++) {
			printf("%d ", r[i]);
		}
		printf("\n");
		fflush(stdout);
		scanf("%d", &w);
		if(w < 0) {
			return 1;
		}
	}
	return 0;
}
