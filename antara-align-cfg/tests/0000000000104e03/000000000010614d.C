#include <stdio.h>
#include <string.h>

int x,y;
char taken[100][100];
int pathx[10000];
int pathy[10000];
int won;

void btr(int x1,int y1,int len) {
	if(won) return;
//	printf("at %d: %d %d\n",len,x1,y1);
	pathx[len]=x1;
	pathy[len]=y1;
	taken[x1][y1]=1;
	if(len==x*y-1) {
		won=1;
		return;
	}
	for(int i=0;i<x;i++) for(int j=0;j<y;j++) if(!won && !taken[i][j]) {
		if(i==x1) continue;
		if(j==y1) continue;
		if(y1-x1==j-i) continue;
		if(y1+x1==j+i) continue;
		btr(i,j,len+1);
	}
	taken[x1][y1]=0;
}

void solve() {
	scanf("%d %d",&x,&y);
	memset(taken,0,sizeof(taken));
	won=0;
	for(int i=0;i<x;i++) for(int j=0;j<y;j++) if(!won) btr(i,j,0);
	if(won) {
		puts("POSSIBLE");
		for(int i=0;i<x*y;i++) printf("%d %d\n",pathx[i]+1,pathy[i]+1);
	} else puts("IMPOSSIBLE");
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
