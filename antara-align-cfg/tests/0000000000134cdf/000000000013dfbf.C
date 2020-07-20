#include <stdio.h>

#define MAXY 16
#define MAXX 17

int x,y;

char g[MAXY][MAXX];

void copy(char g[MAXY][MAXX],char h[MAXY][MAXX]) {
	for(int i=0;i<y;i++) for(int j=0;j<x;j++) g[i][j]=h[i][j];
}

int hmove2(int i,int j) {
	if(g[i][j]!='.') return 0;
	for(int k=j;k>=0;k--) {
		if(g[i][k]=='#') return 0;
		if(g[i][k]=='B') break;
	}
	for(int k=j+1;k<x;k++) {
		if(g[i][k]=='#') return 0;
		if(g[i][k]=='B') break;
	}
	for(int k=j;k>=0;k--) {
		if(g[i][k]=='B') break;
		g[i][k]='B';
	}
	for(int k=j+1;k<x;k++) {
		if(g[i][k]=='B') break;
		g[i][k]='B';
	}
	return 1;
}

int vmove2(int i,int j) {
	if(g[i][j]!='.') return 0;
	for(int k=i;k>=0;k--) {
		if(g[k][j]=='#') return 0;
		if(g[k][j]=='B') break;
	}
	for(int k=i+1;k<y;k++) {
		if(g[k][j]=='#') return 0;
		if(g[k][j]=='B') break;
	}
	for(int k=i;k>=0;k--) {
		if(g[k][j]=='B') break;
		g[k][j]='B';
	}
	for(int k=i+1;k<y;k++) {
		if(g[k][j]=='B') break;
		g[k][j]='B';
	}
	return 1;
}

int hmove(int i) {
	for(int k=0;k<x;k++) if(g[i][k]=='#') return 0;
	for(int k=0;k<x;k++) g[i][k]='B';
	return 1;
}

int vmove(int j) {
	for(int k=0;k<y;k++) if(g[k][j]=='#') return 0;
	for(int k=0;k<y;k++) g[k][j]='B';
	return 1;
}

int move(int depth) {
	int r=0;
	char h[MAXY][MAXX];
	/* horizontal move */
	for(int i=0;i<y;i++) for(int j=0;j<x;j++) {
		if(j>0 && g[i][j-1]=='.') continue;
		copy(h,g);
		if(hmove2(i,j)) {
			if(!move(depth+1)) r=1;
		}
		copy(g,h);
	}
	for(int i=0;i<y;i++) for(int j=0;j<x;j++) {
		if(i>0 && g[i-1][j]=='.') continue;
		copy(h,g);
		if(vmove2(i,j)) {
			if(!move(depth+1)) r=1;
		}
		copy(g,h);
	}
//	printf("depth %d res %d\n",depth,r);
//	for(int i=0;i<y;i++) puts(g[i]);
	return r;
}

int beccaopen() {
	int r=0;
	char h[MAXY][MAXX];
	/* horizontal move */
	for(int i=0;i<y;i++) {
		copy(h,g);
		if(hmove(i)) {
			if(!move(1)) r+=x;
		}
		copy(g,h);
	}
	for(int j=0;j<x;j++) {
		copy(h,g);
		if(vmove(j)) {
			if(!move(1)) r+=y;
		}
		copy(g,h);
	}
	return r;
}

void solve() {
	scanf("%d %d",&y,&x);
	for(int i=0;i<y;i++) scanf("%s",g[i]);
//	printf("\n");
	printf("%d\n",beccaopen());
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
