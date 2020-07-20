#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	int T;
	char N[200] = { '\0' };
	char num1[200] = { '\0' };
	char num2[200] = { '\0' };

	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		scanf("%s", N);
		int len = strlen(N);
		strrev(N);
		for (int i = 0; i < len; i++) {
			switch (N[i]) {
			case '0':
				if (i == len - 1) {
					
				}
				else {
					num1[i] = num2[i] = '0';
				}
				break;
			case '1':
				if (i == len - 1) {
					num1[i] = '1';
					num2[i] = '\0';
				}
				else {
					num1[i] = '5';
					num2[i] = '6';
					if (N[i + 1] == '0') {
						N[i + 2]--;
						N[i + 1] = '9';
					}
					else
						N[i + 1]--;
				}
				break;
			case '2':
			case '3':
				num1[i] = '1';
				num2[i] = N[i] - 1;
				break;
			case '4':
				num1[i] = num2[i] = '2';
				break;
			case '5':
				num1[i] = '3';
				num2[i] = N[i] - 3;
				break;
			case '6':
			case '7':
			case '8':
			case '9':
				num1[i] = '1';
				num2[i] = N[i] - 1;
				break;
			}
		}
		strrev(num1);
		strrev(num2);
		printf("Case #%d: %s %s\n", t, num1, num2);

		memset(N, 0, 200);
		memset(num1, 0, 200);
		memset(num2, 0, 200);
	}

	return 0;
}
