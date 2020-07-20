#include <stdio.h>

int main() {
	int tc, i, leng;
	char c;

	scanf("%d\n", &tc);
	for (i = 1; i <= tc; i++) {
		scanf("%d\n", &leng);
		printf("Case #%d: ", i);
		do {
			scanf("%c",&c);
			if (c == 'S')
				printf("%c", 'E');
			else
				if (c == 'E')
					printf("%c", 'S');
		} while (c != '\n');
	}


return 1;
}
