#include <stdio.h>

int n;
int a[300],b[300];
int p[300];

void solve() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d %d",&a[i],&b[i]);
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(i!=j) {
		if(a[i]>a[j] && b[i]<b[j]) {
			puts("2");
			return;
		}
	}
	puts("1");
	return;
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
