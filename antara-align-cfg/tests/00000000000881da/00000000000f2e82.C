#include <stdio.h>

char str[120000];

int main(void) {
	int t, n, i, j;

	scanf("%d", &t);
	for(i = 1; i <= t; i++) {
		scanf("%d", &n);
		scanf("%s", str);
		for(j = 0; j < 2*n-2; j++) {
			str[j] ^= 'E' ^ 'S';
		}
		printf("Case #%d: %s\n", i, str);
	}
	return 0;
}
