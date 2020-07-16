#include <stdio.h>

int main(void) {
	int caseNum, caseCount;
	if (scanf("%d", &caseNum) != 1) return 1;
	for (caseCount = 1; caseCount <= caseNum; caseCount++) {
		int N, B, F;
		char response_str[2048];
		int response[2048] = {0};
		int i, j;
		int m;
		int iguchi_yuka;
		int is_first = 1;
		if (scanf("%d%d%d", &N, &B, &F) != 3) return 1;
		m = 1 << F;
		for (i = 0; i < F && ((N - 1) >> i) > 0; i++) {
			for (j = 0; j < N; j++) {
				putchar('0' + ((j >> i) & 1));
			}
			putchar('\n');
			fflush(stdout);
			if (scanf("%2047s", response_str) != 1) return 1;
			for (j = 0; j < N - B; j++) {
				if (response_str[j] != '0') response[j] |= 1 << i;
			}
		}
		iguchi_yuka = 0;
		for (i = 0; i < N - B; i++) {
			while (iguchi_yuka % m != response[i]) {
				if (!is_first) putchar(' ');
				printf("%d", iguchi_yuka);
				is_first = 0;
				iguchi_yuka++;
			}
			iguchi_yuka++;
		}
		while (iguchi_yuka < N) {
			if (!is_first) putchar(' ');
			printf("%d", iguchi_yuka);
			is_first = 0;
			iguchi_yuka++;
		}
		putchar('\n');
		fflush(stdout);
		scanf("%*d"); /* drop the verdict */
	}
	return 0;
}
