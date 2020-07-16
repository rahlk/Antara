#include <stdio.h>
#include <stdlib.h>

char test[1025];
char in[10][1025];
int out[1025];

int main(void) {
	
	int T, N, B, F, L, f, i, j;
	
	scanf ("%d", &T);
	
	while (T--) {
		
		scanf ("%d %d %d", &N, &B, &F);
		
		for (L = 1; L < N; L <<= 1);
		L >>= 1;
		
		for (f = 0; f < F && L; f++) {
			
			for (i = 0; i < N; i++)
				test[i] = '0' + ((i / L) % 2 == 1);
			test[N] = 0;
			printf ("%s", test);
			fflush(stdout);
			
			scanf ("%s", in[f]);
			
			L >>= 1;
		}
		
		F = f;
		
		for (i = 0; i < N; i++) out[i] = 0;
		
		for (j = 0; j < N - B; j++) {
			
			for (f = i = 0; i < F; i++)
				f = f * 2 + (in[i][j] == '1');
			
			out[f] = 1;
		}
		
		for (i = 0; i < N; i++) if (!out[i]) printf ("%d ", i);
		fflush(stdout);
	}
}
