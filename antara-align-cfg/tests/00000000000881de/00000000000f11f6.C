#include <stdio.h>
#include <stdlib.h>

char test[1025];
char in[10][1025];
int out[1025];

int main(void) {
	
	int T, N, B, F, L, f, i, j, k;
	
	scanf ("%d", &T);
	
	while (T--) {
		
		scanf ("%d %d %d", &N, &B, &F);
		
		F = 5;
		L = 16;
		
		for (f = 0; f < F; f++) {
			
			for (i = 0; i < N; i++)
				test[i] = '0' + ((i / L) % 2 == 1);
			test[N] = 0;
			puts (test);
			fflush(stdout);
			
			scanf ("%s", in[f]);
			
			L >>= 1;
		}
		
		for (i = 0; i < N; i++) out[i] = 0;
		
		for (j = k = 0; j < N - B; j++) {
			
			if ((in[0][j] - '0') % 2 != k % 2) k++;
			
			for (f = 0, i = 1; i < F; i++)
				f = f * 2 + (in[i][j] == '1');
			
			out[k * 16 + f] = 1;
		}
		
		for (i = 0; i < N; i++) if (!out[i]) printf ("%d ", i);
		puts ("");
		fflush(stdout);
		
		scanf ("%d", &i);
		
		if (i < 0) return 0;
	}
}
