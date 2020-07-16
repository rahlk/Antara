#include <stdio.h>
#include <stdlib.h>

int pow(int x, int n);
int digitcount(int N);
void deletingfour(int N, int*A, int*B);

int main(void) {
	int T, N, i;
	scanf("%d", &T);
	int *valA = (int*)malloc(sizeof(int)*T);
	int *valB = (int*)malloc(sizeof(int)*T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		deletingfour(N, &valA[i], &valB[i]);
	}
	for (i = 0; i < T; i++) {
		if (valB[i] != 0) {
			printf("Case #%d: %d %d\n", i + 1, valA[i], valB[i]);
		}
		else {
			printf("Case #%d:\n", i + 1);
		}
	}
	free(valA);
	free(valB);
	return 0;
}

int pow(int x, int n) {
	int i, rval = 1;
	for (i = 0; i < n; i++) {
		rval = rval*x;
	}
	return rval;
}

int digitcount(int N) {
	int i;
	for (i = 0; N > 0; i++) {
		N = N / 10;
	}
	return i;
}
void deletingfour(int N, int *A, int *B) {
	*A = *B = 0;
	int digitnum = digitcount(N);
	int *arr = (int*)malloc(sizeof(int)*digitnum);
	int *a = (int*)malloc(sizeof(int)*digitnum);
	int *b = (int*)malloc(sizeof(int)*digitnum);
	int i;
	for (i = 0; N>0; i++) {
		arr[i] = N % 10;
		if (arr[i] != 4) {
			a[i] = arr[i];
			b[i] = 0;
		}
		else {
			a[i] = 3;
			b[i] = 1;
		}
		N = N / 10;
	}
	for (i = i - 1; i >= 0; i--) {
		*A = *A + a[i] * pow(10, i);
		*B = *B + b[i] * pow(10, i);
	}
	free(arr);
	free(a);
	free(b);
	return;
}