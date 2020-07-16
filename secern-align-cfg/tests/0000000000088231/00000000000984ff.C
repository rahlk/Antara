#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int N;
		scanf("%d", &N); // set1, set2은 int로 커버 가능

		int a, b = 0;
		if (N % 2) { // 홀수
			a = N / 2;
			b = N / 2 + 1;
		}
		else {
			a = b = N / 2;
		}

		char A[11];
		char B[11];
		sprintf(A, "%d", a);
		sprintf(B, "%d", b);

		int break_flag = 0;
		for (unsigned int i = 0; i < strlen(A); i++) {
			if (A[i] == '4' && (B[i]=='4' || B[i]=='5')) {
				A[i]--;
				B[i]++;
			}
			else if ((A[i] == '4' && B[i] == '3') || (B[i] == '4' && A[i] == '5')) {
				A[i]++;
				B[i]--;
			}
			else if (B[i] == '4' && A[i] == '3') {
				A[i]--;
				B[i]++;
			}
		}

		a = atoi(A);
		b = atoi(B);

		printf("Case #%d: %d %d\n", t+1, a, b);
	}

	return 0;
}