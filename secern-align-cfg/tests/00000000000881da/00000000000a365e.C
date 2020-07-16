#include <stdio.h>

int main() {

	int T;
	scanf("%d", &T);
	while (T--) {

		int N;
		scanf("%d", &N);
		N = 0;

		char d[1000];
		scanf("%s", &d);
		
		for(int i = 0; d[i] != '\0'; i++){
		
			if (d[i] == 'S')
				printf("E");
			else
				printf("S");

		}
		printf("\n");

	}

	return 0;
}