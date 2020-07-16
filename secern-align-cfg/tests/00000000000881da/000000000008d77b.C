#include <stdio.h>

char s[200000];

void solve() {
	scanf("%*d %s",s);
	for(int i=0;s[i];i++) s[i]^='E'^'S';
	puts(s);
}

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++) {
		printf("Case #%d: ",i);
		solve();
	}
	return 0;
}
