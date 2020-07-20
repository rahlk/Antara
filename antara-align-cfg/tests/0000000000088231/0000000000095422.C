#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	char n[101][1000];
	char ans[101][100];

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%s", n[i]);
	}

	for (int i = 0; i < t; i++) {
		int flag = 0;
		int count = 0;
		for (int j = 0; j < strlen(n[i]); j++) {
			if (n[i][j] == '4') {
				n[i][j] = '3';
				ans[i][count] = '1';
				flag = 1;
				count++;
			}
			else if(flag) {
				ans[i][count] = '0';
				count++;
			}

			ans[i][count] = '\0';
		}

		printf("Case #%d: %s %s\n", i + 1, n[i], ans[i]);
	}

	system("PAUSE");
}