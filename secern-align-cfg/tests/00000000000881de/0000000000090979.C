#include <stdio.h>
#include <stdlib.h>

int N,B,F;

char z[2000];
char r[10][1025];

char s[10000];

int ans[1024];

void solve() {
	fgets(s,10000,stdin);
	sscanf(s,"%d %d %d",&N,&B,&F);
	for(int i=0;i<F;i++) {
		for(int j=0;j<N;j++) z[j]=((j>>i)&1)+'0';
		z[N]=0;
		puts(z);
		fflush(stdout);
		fgets(s,10000,stdin);
		sscanf(s,"%s",r[i]);
	}
	for(int i=0;i<1024;i++) ans[i]=0;
	/* answer */
	for(int i=0;r[0][i];i++) {
		int v=0;
		for(int j=0;j<F;j++) v+=(r[j][i]-'0')<<j;
		ans[v]=1;
	}
	for(int i=0;i<N;i++) if(!ans[i]) printf("%d ",i);
	printf("\n");
	fflush(stdout);
	int ans;
	fgets(s,10000,stdin);
	sscanf(s,"%d",&ans);
	if(ans==-1) exit(1);
}

int main() {
	int T;
	fgets(s,10000,stdin);
	sscanf(s,"%d",&T);
	for(int i=1;i<=T;i++) solve();
	return 0;
}
