#include <stdio.h>

int p,q;
int m[11][11];
char s[10];

void follow(int x,int y,char dc) {
	if(dc=='N') for(int i=0;i<=q;i++) for(int j=y+1;j<=q;j++) m[i][j]++;
	else if(dc=='S') for(int i=0;i<=q;i++) for(int j=y-1;j>=0;j--) m[i][j]++;
	else if(dc=='W') for(int i=0;i<x;i++) for(int j=0;j<=q;j++) m[i][j]++;
	else for(int i=x+1;i<=q;i++) for(int j=0;j<=q;j++) m[i][j]++;
}

void solve() {
	int x,y;
	scanf("%d %d",&p,&q);
	for(int i=0;i<=q;i++) for(int j=0;j<=q;j++) m[i][j]=0;
	for(int i=0;i<p;i++) {
		scanf("%d %d %s",&x,&y,s);
		follow(x,y,s[0]);
	}
	int best=-1;
	int bestx=-1,besty=-1;
	for(int i=0;i<=q;i++) for(int j=0;j<q;j++) {
		if(best<m[i][j]) {
			best=m[i][j];
			bestx=i;
			besty=j;
		}
	}
	printf("%d %d\n",bestx,besty);
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
