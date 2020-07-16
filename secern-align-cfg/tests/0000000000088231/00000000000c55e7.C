#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int t;
	int N;
	int arrA[100];
	int arrB[100];
	int j;
	scanf("%d", &t);


	for (int i = 1; i <= t; i++) {
		printf("Case #%d: ", i);
		fflush(stdout);
		for (int q = 0; q < 101; q++) {
			arrA[q] = 0;
			arrB[q] = 0;
		}
		scanf("%d", &N);

		for (j = 0; N != 0; j++) {
			if (N % 10 != 4) {
				arrA[j] = N % 10;
				arrB[j] = 0;
			}
			else {
				arrA[j] = 2;
				arrB[j] = 2;
			}

			N = N / 10;
		}

		int s = j - 1;
		for (s; s >= 0; s--) {
			printf("%d", arrA[s]);
			fflush(stdout);
		}
		printf(" ");
		int check = 0;
		printf("lentgh %d ", j);
		fflush(stdout);
		s = j - 1;
		for (s; s >= 0; s--) {
			if (arrB[s] == 0 && check == 0) {

			}
			else {
				printf("%d", arrB[s]);
				fflush(stdout);
				check = 1;
			}
			if (s == 0 && check == 0)
				printf("0");
			fflush(stdout);

		}
		printf("\n");
		fflush(stdout);

	}
	return 0;
}