#include <stdio.h>

int input[7] = {2, 3, 5, 7, 11, 13, 17};
int response[7][18];
int resp[7];

int exist[1000001];

int main(void) {

	int T, t, N, M, i, j, k;
	int verdict;
	
	scanf ("%d %d %d", &T, &N, &M);
	
	for (t = 1; t <= T; t++) {

		for (i = 0; i <= M; i++) exist[i] = 0;
		
		for (i = 0; i < 7; i++) {
			
			for (j = 0; j < 18; j++) printf ("%d ", input[i]);
			puts ("");
			fflush (stdout);
			
			for (j = 0; j < 18; j++) scanf ("%d", &response[i][j]);
			resp[i] = 0;
			for (j = 0; j < 18; j++) resp[i] += response[i][j];
		}
		
		for (k = 0; k < 7; k++) {
			
			for (i = 0; i + resp[k] <= M; i += input[k])
				exist[i + resp[k]]++;
		}
		
		for (i = 1; i <= M; i++) if (exist[i] == 7) {
			
			printf ("%d\n", i);
			break;
		}
		fflush (stdout);
		scanf ("%d", &verdict);
		
		if (verdict < 0) break;
	}
	
	return 0;
}
