#include <stdio.h>

int main() {
	int tt, n;
	char c;
	scanf("%d\n", &tt);
	for (int qq = 1; qq <= tt; qq++) {
		printf("Case #%i: ", qq);
		scanf("%d\n", &n);
		for (int i = 0; i<2*n-2; i++) {
			scanf("%c", &c);
			printf("%c", c=='E'?'S':'E');
		}
		printf("\n");
	}
	return 0;
}
