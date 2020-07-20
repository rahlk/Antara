#include <stdio.h>

#ifndef ZIKKEN
int main(void) {
	int caseNum, caseCount;
	if (scanf("%d", &caseNum) != 1) return 1;
	for (caseCount = 1; caseCount <= caseNum; caseCount++) {
		int R, C;
		if (scanf("%d%d", &R, &C) != 2) return 1;
		printf("Case #%d: ", caseCount);
		if ((R == 2 && C <= 4) || (R == 3 && C <= 5) || (R == 4 && C <= 3) || (R == 5 && C <= 3)) {
			puts("IMPOSSIBLE");
		} else {
			int num = R * C;
			int move[20*20][2];
			int startPos = 0;
			int reverse = 0;
			int w;
			int i;
			if (R > C) {
				int temp = R;
				R = C;
				C = temp;
				reverse = 1;
			}
			for (w = 1; w < C; w++) {
				int visited[20][20] = {{0}};
				int cr = 0, cc = 0;
				int ngCount = 0;
				visited[cr][cc] = 1;
				move[0][0] = cr;
				move[0][1] = cc;
				startPos = 0;
				for (i = 1; i < num; i++) {
					int ncr, ncc;
					ncr = (cr + 1) % R;
					ncc = (cc + w) % C;
					while (visited[ncr][ncc]) {
						ncc = (ncc + 1) % C;
					}
					if (cr == ncr || cc == ncc || cr - cc == ncr - ncc || cr + cc == ncr + ncc) {
						ngCount++;
						startPos = i;
					}
					move[i][0] = cr = ncr;
					move[i][1] = cc = ncc;
					visited[cr][cc] = 1;
				}
				if (ngCount <= 1) break;
			}
			puts("POSSIBLE");
			for (i = 0; i < num; i++) {
				int cr = move[(i + startPos) % num][0];
				int cc = move[(i + startPos) % num][1];
				if (reverse) {
					int temp = cr;
					cr = cc;
					cc = temp;
				}
				printf("%d %d\n", cr + 1, cc + 1);
			}
		}
	}
	return 0;
}
#else
int main(void) {
	int R, C, w;
	for (R = 2; R <= 20; R++) {
		for (C = 2; C <= 20; C++) {
			int can = 0;
			printf("R=%2d, C=%2d :", R, C);
			for (w = 1; w < C; w++) {
				int visited[20][20] = {{0}};
				int cr = 0, cc = 0;
				int num = R * C;
				int i;
				int ngCount = 0;
				visited[cr][cc] = 1;
				for (i = 1; i < num; i++) {
					int ncr, ncc;
					ncr = (cr + 1) % R;
					ncc = (cc + w) % C;
					while (visited[ncr][ncc]) {
						ncc = (ncc + 1) % C;
					}
					if (cr == ncr || cc == ncc || cr - cc == ncr - ncc || cr + cc == ncr + ncc) {
						ngCount++;
					}
					cr = ncr;
					cc = ncc;
					visited[cr][cc] = 1;
				}
				if (ngCount <= 1) can = 1;
				printf(" %c", ngCount == 0 ? '*' : ngCount == 1 ? '#' : '.');
			}
			printf(" %s\n", can ? "OK" : "FAIL");
		}
	}
	return 0;
}
#endif
