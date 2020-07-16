#include <stdio.h>

int n;
char s[260][510];
int sp[260];

void solve() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%s",s[i]);
	for(int i=0;i<n;i++) sp[i]=0;
	while(1) {
		char seenp=0,seenr=0,seens=0;
		for(int i=0;i<n;i++) if(sp[i]>=0) {
			if(s[i][sp[i]]=='R') seenr=1;
			if(s[i][sp[i]]=='P') seenp=1;
			if(s[i][sp[i]]=='S') seens=1;
		}
		if(seenp+seenr+seens==0) {
			putchar('\n');
			return;
		}
		if(seenp && seenr && seens) {
			puts("IMPOSSIBLE");
			return;
		}
		char us=' ';
		if(seenp+seenr+seens==1) {
			if(seenp) us='S';
			if(seenr) us='P';
			if(seens) us='R';
		}
		if(seenp+seenr+seens==2) {
			if(!seenp) us='R';
			if(!seenr) us='S';
			if(!seens) us='P';
		}
		putchar(us);
		for(int i=0;i<n;i++) if(sp[i]>=0) {
			char them=s[i][sp[i]++];
			if(!s[i][sp[i]]) sp[i]=0;
			if(us==them) continue;
			if(us=='P' && them=='R') sp[i]=-1;
			if(us=='R' && them=='S') sp[i]=-1;
			if(us=='S' && them=='P') sp[i]=-1;
		}
	}
}

int main() {
	int T;
	scanf("%d",&T);
	for(int c=1;c<=T;c++) {
		printf("Case #%d: ",c);
		solve();
	}
	return 0;
}
