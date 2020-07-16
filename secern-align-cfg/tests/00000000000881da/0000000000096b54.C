#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	int n[101];
	char p[101][2000];
	char ans[101][2000];

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n[i]);
		scanf("%s", p[i]);
	}

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < strlen(p[i]); j++) {
			if (p[i][j] == 'S')
				ans[i][j] = 'E';
			else
				ans[i][j] = 'S';

			ans[i][j + 1] = '\0';
		}

		printf("Case #%d : %s\n", i + 1, ans[i]);
	}

	system("PAUSE");
}