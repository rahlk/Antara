/*
 * Filename    : B.c
 * Author      :
 * Description :
 *
 * Date        : Apr  7 2018 21:36:31
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_N 50000
#define MAX_P 2 * MAX_N

int main(int argc, char *argv[])
{
	uint32_t T, N;
	uint32_t i;
	char P[MAX_P], _P[MAX_P];

	scanf("%u\n", &T);

	for (i = 0; i < T; i++) {
		int len;
		printf("Case #%u: ", i + 1);

		memset(P, 0, MAX_P);
		memset(_P, 0, MAX_P);

		scanf("%u\n", &N);
		scanf("%s\n", P);
		len = (2 * N) - 2;

		for (int i = 0; i < len; i++)
			_P[i] = (P[i] == 'E') ? 'S' : 'E';

		printf("%s\n", _P);
	}

	return 0;
}

/* end of B.c  */
