#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct molecule_t {
	int C, J;
} molecule_t;

void sort_molecules(molecule_t *A, molecule_t *B, double L) {
	molecule_t *A0 = A, *B0 = B;
	molecule_t P = *A;
	molecule_t T = *B;
	while (A0 < B0) {
		if ((T.C + L * T.J) > (P.C + L * P.J)) {
			*B0 = T;
			--B0;
			T = *B0;
		} else if ((T.C == P.C) && (T.J > P.J)) {
			*B0 = T;
			--B0;
			T = *B0;
		} else {
			*A0 = T;
			++A0;
			T = *A0;
		}
	}
	*A0 = P;
	if (A < A0 - 1) sort_molecules(A, A0 - 1, L);
	if (A0 + 1 < B) sort_molecules(A0 + 1, B, L);
}

int main() {
	int NumCases = 0;
	scanf("%d", &NumCases);
	for (int Case = 1; Case <= NumCases; ++Case) {
		int N;
		scanf("%d", &N);
		molecule_t Molecules[N];
		for (int I = 0; I < N; ++I) scanf("%d %d", &Molecules[I].C, &Molecules[I].J);


		molecule_t *End = Molecules + N - 1;
		sort_molecules(Molecules, End, 0.0);

		//printf("L = %f\n", 0.0);
		//for (molecule_t *M = Molecules; M <= End; ++M) {
		//	printf("\t(%d, %d)\n", M->C, M->J);
		//}

		int Count = 1;
		for (;;) {
			double NextL = INFINITY;
			for (molecule_t *M = Molecules; M < End; ++M) {
				if ((M[0].J > M[1].J) && (M[1].C > M[0].C)) {
					double L = (M[0].C - M[1].C) / (M[1].J - M[0].J);
					if (L < NextL) NextL = L;
				}
			}
			if (NextL < INFINITY) {
				++Count;
				sort_molecules(Molecules, End, NextL);
				//printf("L = %f\n", NextL);
				//for (molecule_t *M = Molecules; M <= End; ++M) {
				//	printf("\t(%d, %d)\n", M->C, M->J);
				//}
			} else {
				break;
			}
		}

		printf("Case #%d: %d\n", Case, Count);
	}
	return 0;
}
