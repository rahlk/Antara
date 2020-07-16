#include <stdio.h>

int main() {

	int T, testcase = 1;
	scanf("%d", &T);
	while (testcase <= T) {

		int N;
		scanf("%d", &N);
		N = 0;

		char d[1001];
		scanf("%s", &d);
		
		printf("Case #%d: ", testcase);

		for(int i = 0; d[i] != '\0'; i++){
		
			if (d[i] == 'S')
				printf("E");
			else
				printf("S");

		}
		printf("\n");

		testcase += 1;

	}

	return 0;
}