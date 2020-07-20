#include <stdio.h>

int main() {
	int x, t;
	scanf("%d", &t);
	for (x = 1; x <= t; x++){
		long n;
		scanf("%ld", &n);
		char y[2*n-1];
		scanf(" %s", y);
		printf("Case #%d: ", x);
		for (long i = 0; i < 2*n-2; i++){
			if (y[i] == 'E'){
				printf("S");
			}
			else{
				printf("E");
			}
		}
		printf("\n");
	}
	return 0;
}