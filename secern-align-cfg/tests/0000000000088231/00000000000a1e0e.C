#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t, T;
	int N[105];
	int i, idx;
	int flag;
	char A[105];
	char B[105];

	scanf("%d", &T);

	for (t = 1; t <= T; t++) {
		scanf("%s", A);
		flag = 0;

		//sprintf(A, "%d", N);

		idx = 0;
		for (i = 0;; i++) {
			if (A[i] == '4') {
				A[i] = '3';
				B[idx++] = '1';
				flag = 1;
			}
			else if (A[i] == 0) {
				B[idx++] = A[i];
				break;
			}
			else if (flag)
				B[idx++] = '0';
			else
				continue;
		}


		printf("Case #%d: %s %s\n", t, A, B);
	}
}