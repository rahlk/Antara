#include <stdio.h>
#define MAXN 100100
void solve(char* s) {
	for(; *s; s++)
		*s = (*s == 'S') ? 'E' : 'S';
}
int main(void) {
	static char s[MAXN];
	int n,T;
	scanf("%d\n", &T);
	for(int i = 1; i <= T; i++) {
		scanf("%d\n%s\n", n, s);
		solve(s);
		printf("Case #%d: ", i);
		puts(s);
	}
	return 0;
}
