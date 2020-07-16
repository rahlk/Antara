#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct case_t case_t;

struct case_t {
	int L, R, MaxL;
};

static inline int find_max(int *X, int L, int R, int *Max) {
	int M = 0, I = 0;
	int *End = X + R;
	for (int *P = X + L; P <= End; ++P) {
		if (*P > M) {
			M = *P;
			I = P - X;
		}
	}
	*Max = M;
	return I;
}

int main() {
	case_t *CaseStack = (case_t *)malloc(10000000 * sizeof(case_t));
	int NumCases = 0;
	scanf("%d", &NumCases);
	for (int Case = 1; Case <= NumCases; ++Case) {
		int N, K;
		scanf("%d %d", &N, &K);
		int *C = (int *)calloc(N, sizeof(int));
		int *D = (int *)calloc(N, sizeof(int));
		for (int I = 0; I < N; ++I) scanf("%d", C + I);
		for (int I = 0; I < N; ++I) scanf("%d", D + I);
		case_t *Cases = 0;
		int L = 0;
		int R = N - 1;
		int MaxL = N - 1;
		long Total = 0;
		case_t *Top = CaseStack - 1;
		//fprintf(stderr, "Case %d, N = %d\n", Case, N);
		for (;;) {
			//fprintf(stderr, "Total = %d\n", Total);
			//fprintf(stderr, "\tL = %d, R = %d, MaxL = %d\n", L, R, MaxL);
			if ((R < 0) || (L > R) || (L > MaxL)) {
				if (Top >= CaseStack) {
					L = Top->L;
					R = Top->R;
					MaxL = Top->MaxL;
					--Top;
					continue;
				} else {
					break;
				}
			}
			int MaxC, IndexC = find_max(C, L, R, &MaxC);
			int MaxD, IndexD = find_max(D, L, R, &MaxD);
			//fprintf(stderr, "\tMaxC = %d @ %d, MaxD = %d @ %d\n", MaxC, IndexC, MaxD, IndexD);
			int Diff = MaxC - MaxD;
			if (Diff > K) {
				//fprintf(stderr, "Here: %d\n", __LINE__);
				++Top;
				Top->L = L;
				Top->R = IndexC - 1;
				Top->MaxL = MaxL;
				L = IndexC + 1;
				continue;
			} else if (Diff < -K) {
				//fprintf(stderr, "Here: %d\n", __LINE__);
				++Top;
				Top->L = L;
				Top->R = IndexD - 1;
				Top->MaxL = MaxL;
				L = IndexD + 1;
				continue;
			} else {
				if (IndexC < IndexD) {
					//fprintf(stderr, "Here: %d\n", __LINE__);
					Total += (IndexC + 1 - L) * (R + 1 - IndexD);
					++Top;
					Top->L = L;
					Top->R = IndexD - 1;
					Top->MaxL = IndexC;
					L = IndexC + 1;
					continue;
				} else {
					//fprintf(stderr, "Here: %d\n", __LINE__);
					Total += (IndexD + 1 - L) * (R + 1 - IndexC);
					++Top;
					Top->L = L;
					Top->R = IndexC - 1;
					Top->MaxL = IndexD;
					L = IndexD + 1;
					continue;
				}
			}
		}
		printf("Case #%d: %ld\n", Case, Total);
		free(C);
		free(D);
	}
	return 0;
}
