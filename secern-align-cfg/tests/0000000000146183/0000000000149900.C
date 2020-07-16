#include <stdio.h>

int nextpermutation(int *a,int n) {
	int j,k,i;
	int t;  /* datatype of permutation */
	for(j=n-2;j>-1 && a[j]>=a[j+1];j--);
	if(j<0) return 0;
	for(i=n-1;a[j]>=a[i];i--);
	t=a[j]; a[j]=a[i]; a[i]=t;
	for(k=j+1,i=n-1;k<i;k++,i--) t=a[k], a[k]=a[i], a[i]=t;
	return 1;
}

int n;
int a[300],b[300];
int p[300];

int ok(int n,int *p,int *a,int *b) {
	/* reject always wrong sequences */
	for(int i=1;i<n;i++) if(a[p[i-1]]>=a[p[i]] && b[p[i-1]]>=b[p[i]]) return 0;
	for(int w1=1;w1<=1000;w1++) for(int w2=1;w2<=1000;w2++) {
		for(int i=0;i<n-1;i++) {
			int j=i+1;
			int a1=a[p[i]];
			int a2=a[p[j]];
			int b1=b[p[i]];
			int b2=b[p[j]];
			if(a1*w1+b1*w2 >= a2*w1+b2*w2) goto fail;
		}
		return 1;
	fail:;
	}
	return 0;
}

void solve() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d %d",&a[i],&b[i]);
	int ans=0;
	for(int i=0;i<n;i++) p[i]=i;
	do {
		if(ok(n,p,a,b)) goto valid;
//		if(ok(n,p,b,a)) goto valid;
		continue;
	valid:
//		for(int i=0;i<n;i++) printf("(%d %d) ",a[p[i]],b[p[i]]);
//		printf("\n");
		ans++;
	} while(nextpermutation(p,n));
	printf("%d\n",ans);
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
