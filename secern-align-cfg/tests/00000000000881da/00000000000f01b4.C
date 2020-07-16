#include <stdio.h>
#include <string.h>

int main(void) {
	int caseNum, caseCount;
	if (scanf("%d", &caseNum) != 1) return 1;
	for (caseCount = 1; caseCount <= caseNum; caseCount++) {
		int N;
		char data[65536];
		int i;
		if (scanf("%d", &N) != 1) return 1;
		if (scanf("%65535s", data) != 1) return 1;
		printf("Case #%d: ", caseCount);
		if (data[0] != data[2 * N - 2 - 1]) {
			for (i = 0; i < N - 1; i++) putchar(data[2 * N - 2 - 1]);
			for (i = 0; i < N - 1; i++) putchar(data[0]);
		} else {
			char middle = data[0];
			char seek = (middle == 'E' ? 'S' : 'E');
			int crossPoint = 0;
			for (i = 0; i < 2 * N - 2 - 1; i++) {
				if (data[i] == seek) {
					crossPoint++;
					if (data[i + 1] == seek) break;
				}
			}
			for (i = 0; i < crossPoint; i++) putchar(seek);
			for (i = 0; i < N - 1; i++) putchar(middle);
			for (i = crossPoint; i < N - 1; i++) putchar(seek);
		}
		putchar('\n');
	}
	return 0;
}
