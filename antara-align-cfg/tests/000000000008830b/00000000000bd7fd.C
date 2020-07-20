#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int T;
	scanf("%d", &T);

	for (int t = 0; t < T; t++) {
		int N, L;
		scanf("%d %d", &N, &L);

		int arr[26] = { 0 };

		int* srr1 = (int*)malloc(sizeof(int) * L);
		int* srr2 = (int*)malloc(sizeof(int) * (L+1));
		memset(srr1, 0, sizeof(int) * L);
		memset(srr2, 0, sizeof(int) * (L + 1));

		for (int i = 0; i < L; i++) {
			scanf("%d", &srr1[i]);
		}

		int p = 25;
		for (int i = N; p >= 0; i--) {
			for (int j = i / 2; j >= 1; j--) {
				if (i % j == 0) {
					if (j != 1)
						break;
					else {
						//printf("%d\n", i);
						arr[p] = i;
						p--;
					}
				}
			}
		}

		for (int j = 0; j < 26; j++) {
			if (srr1[0] % arr[j] == 0) {
				if (srr1[1] % arr[j] == 0) {
					srr2[0] = srr1[0] / arr[j];
					srr2[1] = arr[j];
					srr2[2] = srr1[1] / arr[j];
				}
				else {
					srr2[0] = arr[j];
					srr2[1] = srr1[0] / arr[j];
					srr2[2] = srr1[1] / srr2[1];
				}
				break;
			}
		}
		for (int i = 2; i < L; i++) {
			srr2[i + 1] = srr1[i] / srr2[i];
		}
		
		for (int i = 0; i < L+1; i++) {
			for (int j = 0; j < 26; j++) {
				if (arr[j] == srr2[i]) {
					printf("%c", j + 65);
					break;
				}
			}
		}

	}
	return 0;
}