#ifndef _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS 
#endif 

#include <stdio.h>

int P[105];
int R[105];
char S[105];

int gcd(int a, int b)
{
	int r; 
	while (b > 0)
	{
		r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int main() {
	int T, N, L;
	scanf("%d", &T);

	for (int t = 1; t <= T; t++) {

		for (int i = 0; i < 105; i++) P[i] = R[i] = S[i] = 0;

		int A, B, i = 2;
		scanf("%d %d", &N, &L);
		scanf("%d %d", &A, &B);

		while (A == B) {
			scanf("%d", &B);
			i++;
		}
		R[i - 1] = gcd(A, B);
		R[i - 2] = A / R[i - 1];
		R[i] = B / R[i - 1];
		for (int j = i - 3; j >= 0; j--) R[j] = A / R[j + 1];

		for (; i < L; i++) {
			scanf("%d", &B);
			R[i + 1] = B / R[i];
		}

		for (A = 0, B = 0; B < L + 1; B++) {
			int flg = 0;
			for (int i = 0; i < A; i++) {
				if (P[i] == R[B]) {
					flg = 1;
					break;
				}
			}
			if (!flg) {
				P[A] = R[B];
				A++;
			}
		}

		for (int i = 0; i < A; i++) {
			for (int j = 0; j < A - i - 1; j++) {
				if (P[j] > P[j + 1])
				{
					B = P[j];
					P[j] = P[j + 1];
					P[j + 1] = B;
				}
			}
		}

		for (int i = 0; i < L + 1; i++) {
			B = 0;
			while (R[i] != P[B]) B++;
			S[i] = 'A' + B;

		}
		S[L + 1] = 0;

		printf("Case #%d: %s\n", t, S);
	}
	return 0;
}