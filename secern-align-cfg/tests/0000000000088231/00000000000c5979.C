/*
 * Filename    : A.c
 * Author      :
 * Description :
 *
 * Date        : Apr  7 2018 21:36:31
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_LEN 100 + 1

int main(int argc, char *argv[])
{
	uint32_t T;
	uint32_t i;
	char N[MAX_LEN];
	char A[MAX_LEN], B[MAX_LEN];
	int ret;
	int len = 0;

	scanf("%u\n", &T);

	for (i = 0; i < T; i++) {
		printf("Case #%u: ", i + 1);

		memset(N, 0, MAX_LEN);
		memset(A, 0, MAX_LEN);
		memset(B, 0, MAX_LEN);
		ret = scanf("%s\n", N);
		len = strnlen(N, MAX_LEN);
		N[len] = 0;
		//printf("N=%s ret=%d len=%d\n", N, ret, len);
		for (int j = 0, bj = 0, start_b = 0; j < len; j++) {
			if (N[j] == '4') {
				A[j] = '2';
				B[bj++] = '2';
				start_b = 1;
			} else {
				A[j] = N[j];
				if (start_b)
					B[bj++] = '0';
			}
		}

		printf("%s %s\n", A, B);
	}

	return 0;
}

/* end of A.c  */
