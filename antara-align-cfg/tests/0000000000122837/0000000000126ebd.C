#include <stdio.h>
#include <inttypes.h>

#ifndef ZIKKEN
int main(void) {
	int T, W;
	int caseCount;
	if (scanf("%d%d", &T, &W) != 2) return 1;
	for (caseCount = 1; caseCount <= T; caseCount++) {
#if 0
		int64_t resps[6];
		int i;
		int64_t R[6];
		for (i = 0; i < 6; i++) {
			printf("%d\n", i + 2);
			fflush(stdout);
			if (scanf("%"SCNd64, &resps[i]) != 1) return 1;
		}
		R[0] = (reps[5] - reps[4]) / 64;
		R[2] = (reps[1] - reps[0] - 4 * R[0]);
#else
		int64_t res185, res38;
		uint64_t horie_yui;
		int R[6];
		int judge;
		puts("185");
		fflush(stdout);
		if (scanf("%"SCNd64, &res185) != 1) return 1;
		if (res185 == -1) return 0;
		R[3] = (int)((res185 >> 46) & 127);
		R[4] = (int)((res185 >> 37) & 127);
		R[5] = (int)((res185 >> 30) & 127);
		puts("38");
		fflush(stdout);
		if (scanf("%"SCNd64, &res38) != 1) return 1;
		if (res38 == -1) return 0;
		horie_yui = res38;
		horie_yui -= (uint64_t)R[3] << 9;
		horie_yui -= (uint64_t)R[4] << 7;
		horie_yui -= (uint64_t)R[5] << 6;
		R[0] = (int)((horie_yui >> 38) & 127);
		R[1] = (int)((horie_yui >> 19) & 127);
		R[2] = (int)((horie_yui >> 12) & 127);
		printf("%d %d %d %d %d %d\n", R[0], R[1], R[2], R[3], R[4], R[5]);
		fflush(stdout);
		if (scanf("%d", &judge) != 1) return 1;
		if (judge == -1) return 0;
#endif
	}
	return 0;
}

/*
X-day ring     1     2     3     4     5     6
idx   Day
        0      A     B     C     D     E     F
        1     2A     B     C     D     E     F
  0     2     4A    2B     C     D     E     F
  1     3     8A    2B    2C     D     E     F
  2     4    16A    4B    2C    2D     E     F
  3     5    32A    4B    2C    2D    2E     F
  4     6    64A    8B    4C    2D    2E    2F
  5     7   128A    8B    4C    2D    2E    2F
        8   256A   16B    4C    4D    2E    2F
*/
#else
int main(void) {
	int i;
	for (i = 0; i <= 500; i++) {
		int j;
		printf("%3d", i);
		for (j = 1; j <= 6; j++) {
			printf("%3d", (i / j) % 64);
		}
		printf("\n");
	}
	return 0;
}
#endif
