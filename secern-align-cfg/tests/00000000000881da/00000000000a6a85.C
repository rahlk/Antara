#include <stdio.h>

int main(void) {
	int T, N;
	char arr[100000];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		scanf("%s", arr);
		printf("Case #%d: ", i + 1);
		for (int j = 0; j < 100000; j++) {
			if (arr[j] != 'S' && arr[j] != 'E') break;
			else if (arr[j] == 'S') printf("E");
			else printf("S");
		}
		printf("\n");

	}
	return 0;
}