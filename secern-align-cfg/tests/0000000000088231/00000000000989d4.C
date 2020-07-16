#include <stdio.h>
int main()
{
	int T, size, check = 0;
	scanf("%d", &T);
	getchar();
	for (int i = 0; i < T; i++) {
		char N[105] = { 0 }, A[105] = { 0 }, B[105] = { 0 };
		size = check = 0;
		scanf("%s", &N);
		for (int j = 0; N[j]!=0; j++) {
			if (N[j] == '4') {
				A[j] = N[j] - 1;
				B[j] = '0' + 1;
			}
			else {
				A[j] = N[j];
				B[j] = '0';
			}
		}
		printf("Case #%d: %s ", i + 1, A);
		for (int j = 0; B[j]!=0; j++) {
			if (check == 0) {
				if (B[j] == '0') {
					continue;
				}
				else
					check = 1;
			}
			if (check == 1)
				printf("%c", B[j]);
		}
		printf("\n");
	}
}