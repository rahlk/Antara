#include <stdio.h>
#include <stdlib.h>

char s[100000];

int n,m;

void solve() {
	int best=0;
	for(int i=0;i<5;i++) {
		for(int j=0;j<18;j++) printf("18 ");
		printf("\n");
		fflush(stdout);
		int sum=0;
		fgets(s,100000,stdin);
		int v[18];
		sscanf(s,"%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&v[0],&v[1],&v[2],&v[3],&v[4],&v[5],&v[6],&v[7],&v[8],&v[9],&v[10],&v[11],&v[12],&v[13],&v[14],&v[15],&v[16],&v[17]);
		for(int j=0;j<18;j++) sum+=v[j];
		if(best<sum) best=sum;
	}
	printf("%d\n",best);
	fflush(stdout);
	int v;
	fgets(s,100000,stdin);
	sscanf(s,"%d",&v);
	if(v==-1) exit(0);
}

int main() {
	int T;
	fgets(s,100000,stdin);
	sscanf(s,"%d %d %d",&T,&n,&m);
	fprintf(stderr,"%d %d %d\n",T,n,m);
	while(T--) solve();
	return 0;
}
