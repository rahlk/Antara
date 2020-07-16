#include <stdio.h>
#include <string.h>

const char* zs(const char* n) {
	if (n[0] == '\0' || (n[0] == '0' && n[1] == '\0')) return n;
	while(n[0] == '0') n++;
	return n;
}

int main(void) {
	int caseNum, caseCount;
	if (scanf("%d", &caseNum) != 1) return 1;
	for (caseCount = 1; caseCount <= caseNum; caseCount++) {
		char N[256];
		char A[256] = "", B[256] = "";
		int i;
		if (scanf("%255s", N) != 1) return 1;
		for (i = strlen(N) - 1; i >= 0; i--) {
			if (N[i] == '4') {
				A[i] = B[i] = '2';
			} else {
				A[i] = N[i];
				B[i] = '0';
			}
		}
		printf("Case #%d: %s %s\n", caseCount, zs(A), zs(B));
	}
	return 0;
}
