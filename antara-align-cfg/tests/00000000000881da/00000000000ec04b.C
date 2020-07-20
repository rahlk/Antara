#include <stdio.h>


int main(void) {
	int testcase;
	scanf("%d", &testcase);
	for (int t=0; t<testcase; t++) {
		int dimension;
		char paths[50020];
		scanf("%d", &dimension);
		scanf("%s", paths);
		printf("Case #%i: ", t+1);
		for (int i=0; i<(dimension-1)+(dimension-1); i++) {
			printf("%c", paths[i] ^ 0x16);
		}
		printf("\n");
	}
	return 0;
}
