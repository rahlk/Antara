#include <stdio.h>

int n;
int a[300],b[300];

void solve() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d %d",&a[i],&b[i]);
	for(int w1=1;w1<=100;w1++) for(int w2=1;w2<=100;w2++) {
		for(int i=1;i<n;i++) {
			if(a[i-1]*w1+b[i-1]*w2>=a[i]*w1+b[i]*w2) goto fail;
		}
		printf("%d %d\n",w1,w2);
		return;
	fail:;
	}
	puts("IMPOSSIBLE");
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
