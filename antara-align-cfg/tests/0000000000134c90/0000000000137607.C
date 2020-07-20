#include <stdio.h>

int A;
char s[7][501];
char S[501];

int f (int idx, int flag) {
	
	int i, p, fl;
	
	if (flag + 1 == (1 << A)) return 1;
	
	p = 1;
	fl = flag;
	for (i = 0; i < A; i++) {
		
		if ((1 << i) & flag) continue;
		
		if (s[i][idx] == 'S') fl |= (1 << i);
		if (s[i][idx] == 'P') { p = 0; break; }
	}
	if (p) {
		
		S[idx] = 'R';
		if (f (idx + 1, fl)) return 1;
		S[idx] = 0;
	}
	
	p = 1;
	fl = flag;
	for (i = 0; i < A; i++) {
		
		if ((1 << i) & flag) continue;
		
		if (s[i][idx] == 'P') fl |= (1 << i);
		if (s[i][idx] == 'R') { p = 0; break; }
	}
	if (p) {
		
		S[idx] = 'S';
		if (f (idx + 1, fl)) return 1;
		S[idx] = 0;
	}
	
	p = 1;
	fl = flag;
	for (i = 0; i < A; i++) {
		
		if ((1 << i) & flag) continue;
		
		if (s[i][idx] == 'R') fl |= (1 << i);
		if (s[i][idx] == 'S') { p = 0; break; }
	}
	if (p) {
		
		S[idx] = 'P';
		if (f (idx + 1, fl)) return 1;
		S[idx] = 0;
	}
	
	return 0;
}

int main(void) {

	int T, t, i, j;
	
	scanf ("%d", &T);
	
	for (t = 1; t <= T; t++) {
		
		scanf ("%d", &A);

		for (i = 0; i < A; i++)
			scanf ("%s", s[i]);

		printf ("Case #%d: ", t);
		if (f (0, 0)) puts (S);
		else puts ("IMPOSSIBLE");
	}
	
	return 0;
}
