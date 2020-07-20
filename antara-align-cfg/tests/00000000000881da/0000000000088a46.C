#ifndef _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS 
#endif 

#include <stdio.h>

char P[2005];
char S[2005];

int main() {
	int T, N;	
	scanf("%d", &T);

	for (int t = 1; t <= T; t++) {
		scanf("%d",&N);
		scanf("%s", P);

		for (int i = 0; i < 2 * N - 2; i++) {
			if (P[i] == 'E') S[i] = 'S';
			else S[i] = 'E';
		}
		S[2 * N - 2] = 0;

		printf("Case #%d: %s\n", t, S);
	}
	return 0;
}