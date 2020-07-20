#include <stdio.h>
#include <stdlib.h>

int N,B,F;

char z[2000];
char r[10][1025];

void solve() {
	scanf("%d %d %d",&N,&B,&F);
	for(int i=0;i<F;i++) {
		for(int j=0;j<N;j++) z[j]=((j>>i)&1)+'0';
		z[N]=0;
		puts(z);
		fflush(stdout);
		scanf("%s",r[i]);
	}
	/* answer */
	for(int i=0;r[0][i];i++) {
		int v=0;
		for(int j=0;j<F;j++) v+=(r[j][i]-'0')<<j;
		printf("%d ",v);
	}
	printf("\n");
	fflush(stdout);
	int ans;
	scanf("%d",&ans);
	if(ans==-1) exit(1);
}

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++) solve();
	return 0;
}
