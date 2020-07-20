#include <stdio.h>

long long int d[6];

int main() {
	int T, W;

	scanf("%d %d", &T, &W);

	for (int t = 1; t <= T; t++) {
		long long int D;

		printf("210\n");
		fflush(stdout);
		scanf("%I64d", &D);
		if (D == -1) return 0;

		d[5] = (D >> 35) & 0x7F;
		d[4] = (D >> 42) & 0x7F;
		d[3] = (D >> 52) & 0x7F;

		printf("50\n");
		fflush(stdout);
		scanf("%I64d", &D);
		if (D == -1) return 0;
		
		d[2] = (D >> 16) & 0x7F - (d[3] / 16);
		d[1] = (D >> 25) & 0x7F;
		d[0] = (D >> 50) & 0x7F;

		for (int i = 2; i < 6; i++) {
			printf("1\n");
			fflush(stdout);
			scanf("%I64d", &D);
			if (D == -1) return 0;
		}

		printf("%I64d %I64d %I64d %I64d %I64d %I64d\n", d[0], d[1], d[2], d[3], d[4], d[5]);
		fflush(stdout);
		scanf("%I64d", &D);
		if (D == -1) return 0;
	}
	return 0;
}