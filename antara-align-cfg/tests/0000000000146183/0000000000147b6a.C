#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct molecule_t {
	int C, J;
} molecule_t;

void qsort_molecules(molecule_t *A, molecule_t *B) {
	molecule_t *A0 = A, *B0 = B;
	molecule_t P = *A;
	molecule_t T = *B;
	while (A0 < B0) {
		if (T.C > P.C) {
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
	if (A < A0 - 1) qsort_molecules(A, A0 - 1);
	if (A0 + 1 < B) qsort_molecules(A0 + 1, B);
}

void lsort_molecules(molecule_t *A, molecule_t *B, int N, int D) {
	while (A < B) {
		if ((A[0].J > A[1].J) && (D * A[0].C + N * A[0].J) >= (D * A[1].C + N * A[1].J)) {
			molecule_t T = A[1];
			A[1] = A[0];
			A[0] = T;
		}
		++A;
	}
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
		qsort_molecules(Molecules, End);

		//printf("L = %f\n", 0.0);
		//for (molecule_t *M = Molecules; M <= End; ++M) printf("\t(%d, %d)\n", M->C, M->J);

		int Count = 1;
		for (;;) {
			int BestN = 1, BestD = 0;
			for (molecule_t *M = Molecules; M < End; ++M) {
				int N = M[1].C - M[0].C;
				int D = M[0].J - M[1].J;
				if (N > 0 && D > 0) {
					if (BestN * D > BestD * N) {
						BestN = N;
						BestD = D;
					}
				}
			}
			if (BestD) {
				++Count;
				lsort_molecules(Molecules, End, BestN, BestD);
				//printf("L = %d / %d\n", BestN, BestD);
				//for (molecule_t *M = Molecules; M <= End; ++M) printf("\t(%d, %d)\n", M->C, M->J);
			} else {
				break;
			}
		}

		printf("Case #%d: %d\n", Case, Count);
	}
	return 0;
}
