#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

int T,F;

char s[MAX+2];

int perm[120][5];

void getperm(int i,int j) {
//	fprintf(stderr,"%d %d\n",i,j);
	printf("%d\n",i*5+j+1);
	fflush(stdout);
	fgets(s,MAX,stdin);
	if(s[0]<'A' || s[0]>'E') exit(1);
	perm[i][j]=s[0]-'A';
}

int counts[5];

void count(int ix) {
	for(int i=0;i<5;i++) counts[i]=0;
	for(int i=0;i<119;i++) {
		if(perm[i][ix]<0 || perm[i][ix]>4) continue;
		counts[perm[i][ix]]++;
	}
}

int missing[5];
int taken[5];

int find[5]={23,5,1,0,0};

void solve() {
	memset(perm,0,sizeof(perm));
	for(int i=0;i<5;i++) taken[i]=0;
	for(int i=0;i<4;i++) {
		for(int j=0;j<119;j++) if(perm[j][i]>=0) getperm(j,i);
		/* count column i */
		count(i);
//		fprintf(stderr,"count %d %d %d %d %d\n",counts[0],counts[1],counts[2],counts[3],counts[4]);
		for(int j=0;j<5;j++) {
			if(!taken[j] && counts[j]==find[i]) {
				missing[i]=j;
				taken[j]=1;
				break;
			}
		}
		/* delete all permutations with prefix != missing */
		for(int j=0;j<119;j++) {
			for(int k=0;k<=i;k++) if(perm[j][k]!=missing[k]) goto noteq;
			continue;
		noteq:;
			for(int k=0;k<5;k++) perm[j][k]=-1;
		}
	}
	int sum=0;
	for(int i=0;i<4;i++) sum+=missing[i];
	missing[4]=10-sum;
	for(int i=0;i<5;i++) printf("%c",missing[i]+'A');
	printf("\n");
//	for(int i=0;i<5;i++) fprintf(stderr,"%c",missing[i]+'A');
//	fprintf(stderr,"\n");
	fflush(stdout);
	fgets(s,MAX,stdin);
	if(s[0]=='N') exit(1);
}

int main() {
	fgets(s,MAX,stdin);
	sscanf(s,"%d %d",&T,&F);
	while(T--) solve();
	return 0;
}
