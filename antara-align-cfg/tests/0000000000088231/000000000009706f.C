#include <stdio.h>
#include <string.h>

#pragma warning (disable:4996)

int main()
{
	int iTestCases = 0, i = 0, j = 0, k = 0, arrDigits[1000] = { 0, }, nDigits = 0;
	char arrN[100][1001] = { 0, };

	scanf("%d", &iTestCases);
	for (i = 0; i < iTestCases; i++) {
		scanf("%s", arrN[i]);
	}
	for (i = 0; i < iTestCases; i++) {
		printf("Case #%d: ", (i + 1));
		j = 0;
		k = 0;
		memset(arrDigits, 0, sizeof(int) * 1000);
		nDigits = strlen(arrN[i]);
		while (arrN[i][j] != 0) {
			if (arrN[i][j] == '4') {
				arrDigits[k] = j;
				k++;
				printf("3");
			}
			else {
				printf("%c", arrN[i][j]);
			}
			j++;
		}
		printf(" ");
		k = 0;
		for (j = arrDigits[0]; j < nDigits; j++) {
			if (arrDigits[k] == j) {
				k++;
				printf("1");
			}
			else {
				printf("0");
			}
		}
		printf("\n");
	}
	
	return 0;
}