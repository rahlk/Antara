#ifndef _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS 
#endif 

#include <stdio.h>

int main() {
	int T;
	char N[102], A[102], B[102];
	scanf("%d", &T);

	for (int t = 1; t <= T; t++) {
		int l = 0, m;
		scanf("%s", N);
		while (N[l]) {
			A[l] = N[l];
			if (A[l] == '4') {
				A[l]--; B[l] = '1';
			}
			else B[l] = '0';
			l++;
		}
		A[l] = B[l] = 0;
		m = 0;
		while (B[m] == '0') m++;

		printf("Case #%d: %s %s\n", t, A, &B[m]);
	}
	return 0;
}