#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compare(int *A, int *B) {
	return *A - *B;
}

int main() {
	int NumCases = 0;
	scanf("%d", &NumCases);
	for (int Case = 1; Case <= NumCases; ++Case) {
		int N, L;
		scanf("%d %d", &N, &L);
		if (N > 10000) exit(1);
		int *Cipher = (int *)calloc(L + 1, sizeof(int));
		for (int I = 0; I < L; ++I) scanf("%d", Cipher + I);
		int Code[26], P;
		memset(Code, 0, 26 * sizeof(int));
		for (P = 2; P * P <= Cipher[0]; ++P) {
			if (Cipher[0] % P == 0) break;
		}
		Code[0] = P;
		if (P * P != Cipher[0]) {
			Code[1] = Cipher[0] / P;
			if (Cipher[1] % P == 0) P = Code[1];
		}
		for (int I = 1, Q = Cipher[0] / P; I < L; ++I) {
			Q = Cipher[I] / Q;
			for (int J = 0;; ++J) {
				if (Code[J] == 0) {
					Code[J] = Q;
					break;
				} else if (Code[J] == Q) {
					break;
				}
			}
		}
		qsort(Code, 26, sizeof(int), (void *)compare);
		printf("Case #%d: ", Case);
		//printf("P = %d\n", P);
		int *D = bsearch(&P, Code, 26, sizeof(int), (void *)compare);
		printf("%c", 'A' + (D - Code));
		for (int I = 0; I < L; ++I) {
			P = Cipher[I] / P;
			//printf("Cipher[%d] = %d, P = %d\n", I, Cipher[I], P);
			D = bsearch(&P, Code, 26, sizeof(int), (void *)compare);
			printf("%c", 'A' + (D - Code));
		}
		printf("\n");
	}
	return 0;
}
