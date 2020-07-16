#include <stdio.h>

int R, C;
char s[15][16];

int f (void) {
	
	int i, j, k, l, r;
	
	for (i = 0; i < R; i++) {
		
		for (j = 0; j < C; j++) {
			
			if (s[i][j] == '#') {
				
				for (k = j; k < C && s[i][k] != '@'; k++);
				j = k - 1;
			}
			else if (s[i][j] == '.') {
				
				for (k = j; k < C && s[i][k] == '.'; k++);
				
				if (k == C || s[i][k] == '@') {
					
					for (l = j; l < k; l++) s[i][l] = '@';
					r = f ();
					for (l = j; l < k; l++) s[i][l] = '.';
					if (!r) return 1;
				}
				
				j = k - 1;
			}
		}
	}
	
	for (j = 0; j < C; j++) {

		for (i = 0; i < R; i++) {
			
			if (s[i][j] == '#') {
				
				for (k = i; k < R && s[k][j] != '@'; k++);
				i = k - 1;
			}
			else if (s[i][j] == '.') {
				
				for (k = i; k < R && s[k][j] == '.'; k++);
				
				if (k == R || s[k][j] == '@') {
					
					for (l = i; l < k; l++) s[l][j] = '@';
					r = f ();
					for (l = i; l < k; l++) s[l][j] = '.';
					if (!r) return 1;
				}
				
				i = k - 1;
			}
		}
	}
	
	return 0;
}

int main(void) {

	int T, t, i, j, k;
	int cnt;
	
	scanf ("%d", &T);
	
	for (t = 1; t <= T; t++) {
		
		cnt = 0;
		
		scanf ("%d %d", &R, &C);
		
		for (i = 0; i < R; i++) scanf ("%s", s[i]);
		
		for (i = 0; i < R; i++) {
			
			for (j = 0; j < C; j++) if (s[i][j] == '#') break;
			if (j == C) {
				
				for (j = 0; j < C; j++) s[i][j] = '@';
				if (!f ()) cnt += C;
				for (j = 0; j < C; j++) s[i][j] = '.';
			}
		}
		
		for (j = 0; j < C; j++) {
			
			for (i = 0; i < R; i++) if (s[i][j] == '#') break;
			if (i == R) {
				
				for (i = 0; i < R; i++) s[i][j] = '@';
				if (!f ()) cnt += R;
				for (i = 0; i < R; i++) s[i][j] = '.';
			}
		}
		
		printf ("Case #%d: %d\n", t, cnt);
	}
	
	return 0;
}
