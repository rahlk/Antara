#ifndef _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS 
#endif 


#include <stdio.h>

char cell[21][21];

int main() {
	int T, R, C;

	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		scanf("%d %d", &R, &C);

		if (R*C < 10) {
			printf("Case #%d: IMPOSSIBLE\n", t);
			continue;
		}

		printf("Case #%d: POSSIBLE\n", t);
		if (C == 4 && R == 4) {
			printf("1 1\n2 3\n3 1\n4 3\n1 2\n2 4\n3 2\n4 4\n1 3\n2 1\n3 3\n4 1\n3 4\n4 2\n1 4\n2 2\n");
		}
		else if (R != 3 && C < 5) {
			int x = 1;
			if (C % 2) {
				for (int i = R - 1; i > 1; i--) {
					printf("%d %d\n", i - 1, 3);
					printf("%d %d\n", i + 1, 2);
					printf("%d %d\n", i - 1, 1);
				}
				for (int i = R; i >= R - 1; i--) {
					printf("%d %d\n", i, 3);
					printf("%d %d\n", i - R + 2, 2);
					printf("%d %d\n", i, 1);
				}
				x = 4;
			}

			for (int j = x; j < C; j += 2) {
				for (int i = R - 1; i > 1; i--) {
					printf("%d %d\n", i - 1, j);
					printf("%d %d\n", i + 1, j + 1);
				}
				for (int i = R; i >= R - 1; i--) {
					printf("%d %d\n", i, j);
					printf("%d %d\n", i - R + 2, j + 1);
				}
			}
		}
		else {
			int x = 1;
			if (R % 2) {
				for (int i = C - 1; i > 1; i--) {
					printf("%d %d\n", 3, i - 1);
					printf("%d %d\n", 2, i + 1);
					printf("%d %d\n", 1, i - 1);
				}
				for (int i = C; i >= C - 1; i--) {
					printf("%d %d\n", 3, i);
					printf("%d %d\n", 2, i - C + 2);
					printf("%d %d\n", 1, i);
				}
				x = 4;
			}
			
			for (int j = x; j < R; j += 2) {
				for (int i = C - 1; i > 1; i--) {
					printf("%d %d\n", j, i - 1);
					printf("%d %d\n", j + 1, i + 1);
				}
				for (int i = C; i >= C - 1; i--) {
					printf("%d %d\n", j, i);
					printf("%d %d\n", j + 1, i - C + 2);
				}
			}
		}
	}

	return 0;
}
