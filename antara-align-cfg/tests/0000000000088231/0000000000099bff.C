#include <stdio.h>

char s[111];

int main (void) {
	
	int T, t, i, k;
	
	scanf ("%d", &T);
	
	for (t = 1; t <= T; t++) {
		
		scanf ("%s", s);
		
		printf ("Case #%d: ", t);
		
		for (i = 0; s[i]; i++)
			putchar (s[i] == '4' ? '3' : s[i]);
		
		putchar (' ');
		
		for (k = i = 0; s[i]; i++) {
			
			if (s[i] == '4') { putchar ('1'); k = 1; }
			else if (k) putchar ('0');
		}
		
		puts ("");
	}
}