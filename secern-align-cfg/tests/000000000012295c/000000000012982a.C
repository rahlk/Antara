#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int NumCases = 0;
	scanf("%d", &NumCases);
	for (int Case = 1; Case <= NumCases; ++Case) {
		int P, Q;
		scanf("%d %d", &P, &Q);
		int X[500], Y[500];
		char D[500];
		for (int I = 0; I < P; ++I) scanf("%d %d %c", X + I, Y + I, D + I);
		int *XSums = (int *)calloc(Q + 2, sizeof(int));
		int *YSums = (int *)calloc(Q + 2, sizeof(int));
		for (int I = 0; I < P; ++I) {
			switch (D[I]) {
			case 'N':
				for (int J = Y[I] + 1; J <= Q; ++J) YSums[J] += 1;
				break;
			case 'S':
				for (int J = Y[I] - 1; J >= 0; --J) YSums[J] += 1;
				break;
			case 'E':
				for (int J = X[I] + 1; J <= Q; ++J) XSums[J] += 1;
				break;
			case 'W':
				for (int J = X[I] - 1; J >= 0; --J) XSums[J] += 1;
				break;
			}
		}
		int BestXSum = -1, BestX;
		int BestYSum = -1, BestY;
		for (int I = 0; I <= Q; ++I) if (XSums[I] > BestXSum) {
			BestXSum = XSums[I];
			BestX = I;
		}
		for (int I = 0; I <= Q; ++I) if (YSums[I] > BestYSum) {
			BestYSum = YSums[I];
			BestY = I;
		}
		free(XSums);
		free(YSums);
		printf("Case #%d: %d %d\n", Case, BestX, BestY);
	}
	return 0;
}
