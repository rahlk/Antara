#include <stdio.h>

int main(void) {
	int caseCount, caseNum;
	if (scanf("%d", &caseNum) != 1) return 1;
	for (caseCount = 1; caseCount <= caseNum; caseCount++) {
		int i;
		int d;
		for (i = 1; i <= 99; i++) {
			if (scanf("%d", &d) != 1) return 1;
			if (d == -1) return 0;
			printf("%d 100\n", (i - 1) % 19 + 1);
			fflush(stdout);
		}
		if (scanf("%d", &d) != 1) return 1;
		if (d == -1) return 0;
		printf("20 100\n");
		fflush(stdout);
	}
	return 0;
}
