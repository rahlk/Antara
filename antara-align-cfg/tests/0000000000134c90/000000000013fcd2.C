#include <stdio.h>
#include <string.h>

int g[128][128];

int n;
char s[260][510];
int sp[260];
int alive[260];

char t[1000];
int tp;

char try[3]={'R','P','S'};

int ok(char c) {
	int worst=100;
	for(int i=0;i<n;i++) if(alive[i]) {
		if(worst>g[(int)c][(int)s[i][sp[i]]]) worst=g[(int)c][(int)s[i][sp[i]]];
	}
	return worst;
}

void solve() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%s",s[i]);
	for(int i=0;i<n;i++) {
		alive[i]=1;
		sp[i]=0;
	}
	tp=0;
	while(1) {
		char pick;
		int best=-2;
		for(int i=0;i<n;i++) if(alive[i]) goto hasalive;
		break;
	hasalive:
		/* find char */
		for(int i=0;i<3;i++) {
			int cur=ok(try[i]);
			if(best<cur) {
				best=cur;
				pick=try[i];
			}
		}
		if(best>-1) goto good;
		puts("IMPOSSIBLE");
		return;
	good:
		t[tp++]=pick;
		for(int i=0;i<n;i++) if(alive[i]) {
			if(g[(int)pick][(int)s[i][sp[i]]]==1) alive[i]=0;
			sp[i]++;
			if(!s[i][sp[i]]) sp[i]=0;
		}
	}
	t[tp]=0;
	puts(t);
}

int main() {
	int T;
	scanf("%d",&T);
	memset(g,0,sizeof(g));
	g['S']['P']=1;
	g['P']['R']=1;
	g['R']['S']=1;
	g['P']['S']=-1;
	g['R']['P']=-1;
	g['S']['R']=-1;
	for(int c=1;c<=T;c++) {
		printf("Case #%d: ",c);
		solve();
	}
	return 0;
}
