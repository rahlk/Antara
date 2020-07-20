#include<stdio.h>

int main() {

	int ans[100][100][2];
	int T, size;
	int cond = 0;
	char tmp;
	scanf("%d", &T);
	int i, j;
	for (i = 0; i < T;  i++) {
		size = 1;
		cond = 0;
		while (1) {
			scanf("%c", &tmp);
			if (tmp == 52) {
				if (cond == 0)
					cond = 1;
				ans[i][size][0] = 3;
				ans[i][size][1] = 1;
				size++;
			}
			else if (tmp >= 48 && tmp <= 57) {
				if (cond == 0)
					cond = 1;
				ans[i][size][0] = tmp - 48;
				ans[i][size][1] = 0;
				size++;
			}
			else if (cond == 1) {
				ans[i][0][0] = size;
				break;
			}
		}
	}

	for (i = 0; i < T; i++) {
		printf("Case #%d: ", (i + 1));
		for (j = 1; j < ans[i][0][0]; j++)
			printf("%d", ans[i][j][0]);
		printf(" ");
		cond = 0;
		for (j = 1; j < ans[i][0][0]; j++)
			if (cond == 0 && ans[i][j][1] != 0) {
				cond = 1;
				printf("%d", ans[i][j][1]);
			}
			else if (cond == 0 && ans[i][j][1] == 0) {}
			else
				printf("%d", ans[i][j][1]);
		printf("\n");
	}

	return 0;

}