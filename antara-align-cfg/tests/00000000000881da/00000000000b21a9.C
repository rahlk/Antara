#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int T;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++) {
		int l;
		scanf("%d", &l);

		char* str = (char*)malloc(sizeof(char) * (l*2 - 2 + 1));
		scanf("%s", str);

		printf("Case #%d: ", i);
		for (int j = 0; j < (l * 2 - 2); j++) {
			printf("%c", str[j] == 'E' ? 'S' : 'E');
		}
		puts("");
	}
	return 0;
}