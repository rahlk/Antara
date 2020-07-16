#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 11500
char p[MAXN];
char q[MAXN];
int main(void) {
	int T;
	char *x, *y;
	scanf("%d\n", &T);
	for(int i = 1; i <= T; i++) {
		memset(q,0,sizeof q);
		scanf("%s\n", p);
		for(x=p,y=q; *x; x++,y++) {
			*y = '0';
			if(*x == '4') { --*x; *y = '1'; }
		}
		for(y=q; *y != '0'; y++);
		printf("Case #%d: %s %s\n", i, p, y);
	}
	return 0;
}