#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

char s[MAX];
int W;
int r[8];
int sol[7];
int dag[7];

void solve2() {
	for(int i=0;i<=100;i++) {
		sol[1]=i;
		sol[2]=r[2]-r[1]-2*sol[1];
		sol[3]=r[3]-r[2]-4*sol[1];
		sol[4]=r[4]-r[3]-8*sol[1]-2*sol[2];
		sol[5]=r[5]-r[4]-16*sol[1];
		sol[6]=r[6]-r[5]-32*sol[1]-4*sol[2]-2*sol[3];
		for(int j=1;j<=6;j++) if(sol[j]<0 || sol[j]>100) goto fail;
		
		dag[1]= 2*sol[1]+1*sol[2]+1*sol[3]+1*sol[4]+1*sol[5]+1*sol[6];
		dag[2]= 4*sol[1]+2*sol[2]+1*sol[3]+1*sol[4]+1*sol[5]+1*sol[6];
		dag[3]= 8*sol[1]+2*sol[2]+2*sol[3]+1*sol[4]+1*sol[5]+1*sol[6];
		dag[4]=16*sol[1]+4*sol[2]+2*sol[3]+2*sol[4]+1*sol[5]+1*sol[6];
		dag[5]=32*sol[1]+4*sol[2]+2*sol[3]+2*sol[4]+2*sol[5]+1*sol[6];
		dag[6]=64*sol[1]+8*sol[2]+4*sol[3]+2*sol[4]+2*sol[5]+2*sol[6];
		for(int i=1;i<=6;i++) if(dag[i]!=r[i]) goto fail;
		return;
	fail:;
	}
}

void query(int d) {
	printf("%d\n",d); fflush(stdout);
	fgets(s,MAX,stdin);
	sscanf(s,"%d",&r[d]);
}

void solve() {
	for(int t=1;t<=6;t++) query(t);
	solve2();
/*	for(int i=0;i<6;i++) fprintf(stderr,"%d ",r[i]);
	fprintf(stderr,"| ");
	for(int i=0;i<6;i++) fprintf(stderr,"%d ",sol[i]);
	fprintf(stderr,"\n");*/
	for(int i=1;i<7;i++) printf("%d ",sol[i]);
	printf("\n");
	fflush(stdout);
	fgets(s,MAX,stdin);
	int res;
	sscanf(s,"%d",&res);
	if(res==-1) exit(1);
}

int main() {
	int T;
	fgets(s,MAX,stdin);
	sscanf(s,"%d %d",&T,&W);
	while(T--) solve();
	return 0;
}
