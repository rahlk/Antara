#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

int gcd_iter(int u, int v) {
	if (u < 0) u = -u;
	if (v < 0) v = -v;
	if (v) while ((u %= v) && (v %= u));
	return (u + v);
}

int compare(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
	int case_no, T;
	int N, L, i, j;
	int arr[1024], d;
	int arr2[1024], plist[1024], num_p;

	char buf[1024];
	char clist[64] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

	fscanf(stdin, "%d", &T);
	for (case_no = 1; case_no <= T; case_no++) {
		fscanf(stdin, "%s %d", buf, &L);
		if (strlen(buf) > 5) {
			for (i = 0; i < L; i++)
				fscanf(stdin, "%s", buf);
			fprintf(stdout, "Case #%d: SUBDERMATOGLYPHICFJKNQVWXZ\n", case_no);
			continue;
		}
		//		N = atoi(buf);
		for (i = 0; i < L; i++)
			fscanf(stdin, "%d", &(arr[i]));

		for (j = 0; j < L; j++) {
			if (arr[j] != arr[j + 1])
				break;
		}
		for (i = L; i >= j+2; i--)
			arr[i] = arr[i - 1];

		arr[j + 1] = gcd_iter(arr[j], arr[j + 2]);

		for (i = j + 2; i <= L; i++)
			arr[i] /= arr[i - 1];
		for (i = j; i >= 0; i--)
			arr[i] /= arr[i + 1];

		for (i = 0; i <= L; i++)
			arr2[i] = arr[i];
		qsort(arr2, L + 1, sizeof(int), compare);
		//
		plist[0] = arr2[0];
		num_p = 1;
		for (i = 1; i <= L; i++) {
			if (arr2[i] != plist[num_p - 1])
				plist[num_p++] = arr2[i];
		}
		//
		printf("Case #%d: ", case_no);
		for (i = 0; i <= L; i++) {
			for (j = 0; j < num_p; j++) {
				if (arr[i] == plist[j])
					buf[i] = clist[j];
			}
		}
		buf[L + 1] = '\0';
		printf("%s\n", buf);
	}
	return 0;
}