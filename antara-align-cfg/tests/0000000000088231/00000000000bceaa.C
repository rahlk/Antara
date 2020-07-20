#include <stdio.h>

int main () {
	int T, i, j, idc, VF;
	char A[110], B[110];

	scanf("%d", &T);

	for (i = 0; i < T; ++i) {
		scanf(" %s", A);

		VF = idc = 0;

		for (j = 0; A[j]; ++j) {
			if ( A[j] == '4' ) {
				A[j] = '3';
				B[idc++] = '1';

				if ( VF == 0 ) {
					VF = 1;
				}
			} else {
				if ( VF ) {
					B[idc++] = '0';
				}
			}
		}

		B[idc] = '\0';

		printf("Case #%d: %s %s\n", i+1, A, B);
	}

	return 0;
}