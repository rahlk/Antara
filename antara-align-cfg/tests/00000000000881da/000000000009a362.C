#include <stdio.h>

char s[50001];

int main (void) {
	
	int T, t, N, i;
	
	scanf ("%d", &T);
	
	for (t = 1; t <= T; t++) {
		
		scanf ("%d%s", &N, s);
		
		printf ("Case #%d: ", t);
		
		for (i = 0; s[i]; i++)
			putchar (s[i] == 'S' ? 'E' : 'S');
		puts ("");
	}
}
