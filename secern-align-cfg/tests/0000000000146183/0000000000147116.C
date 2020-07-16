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

#define EPS 1e-8

int ok(int n,int *p,int *a,int *b) {
	/* reject always wrong sequences */
	for(int i=1;i<n;i++) {
		if(a[p[i-1]]>a[p[i]] && b[p[i-1]]>b[p[i]]) return 0;
		if(a[p[i-1]]==a[p[i]] && b[p[i-1]]>b[p[i]]) return 0;
		if(b[p[i-1]]==b[p[i]] && a[p[i-1]]>a[p[i]]) return 0;
	}
	/* assume a weights 1 */
	/* upper bound for material b */
	double bwhi=1e100;
	for(int i=1;i<n;i++) {
		int a1=a[p[i-1]];
		int a2=a[p[i]];
		int b1=b[p[i-1]];
		int b2=b[p[i]];
		double newhi=0;
		double aa=a1-a2;
		if(b1<b2) newhi=aa/(b1-b2);
		else if(b1>b2) newhi=aa/(b2-b1);
		else continue;
		if(bwhi>newhi) bwhi=newhi;
	}
	/* check if bound is ok */
	for(int i=1;i<n;i++) {
		double v=a[p[i-1]]+bwhi*b[p[i-1]];
		double w=a[p[i]]+bwhi*b[p[i]];
		if(v>w+EPS) return 0;
	}
	return 1;
}

void solve() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d %d",&a[i],&b[i]);
	int ans=0;
	for(int i=0;i<n;i++) p[i]=i;
	do {
		if(ok(n,p,a,b)) goto valid;
		if(ok(n,p,b,a)) goto valid;
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
