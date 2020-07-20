#include <stdio.h>
#include <stdlib.h>

int n,K;
int c[100],d[100];
int e[100],f[100];

int compi(const void *A,const void *B) {
	const int *a=A,*b=B;
	if(*a<*b) return 1;
	else if(*a==*b) return 0;
	else return -1;
}

void solve() {
	scanf("%d %d",&n,&K);
	for(int i=0;i<n;i++) scanf("%d",&c[i]);
	for(int i=0;i<n;i++) scanf("%d",&d[i]);
	int fair=0;
	for(int l=0;l<n;l++) for(int r=l;r<n;r++) {
		int k=0;
		for(int i=l;i<=r;i++,k++) {
			e[k]=c[i];
			f[k]=d[i];
		}
		qsort(e,r-l+1,sizeof(int),compi);
		qsort(f,r-l+1,sizeof(int),compi);
		int diff=e[0]-f[0];
		if(diff<0) diff=-diff;
		if(diff<=K) fair++;
	}
	printf("%d\n",fair);
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
