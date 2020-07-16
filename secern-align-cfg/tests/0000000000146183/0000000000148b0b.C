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
	for(int i=1;i<n;i++) if(a[p[i-1]]>=a[p[i]] && b[p[i-1]]>=b[p[i]]) return 0;
	/* assume a weighs 1 */
	/* lower and upper bound for material b */
	/* do fractions because i don't trust floating point */
	long long lo1=1,lo2=1000000000; /* teller, nevner */
	long long hi1=1000000000,hi2=1;
	for(int i=1;i<n;i++) {
		/* find values for w that satisfy
		   a1+b1*w < a2+b2*w */
		int a1=a[p[i-1]];
		int a2=a[p[i]];
		int b1=b[p[i-1]];
		int b2=b[p[i]];
//		printf("compare %d %d to %d %d\n",a1,b1,a2,b2);
		if(a1==a2 || b1==b2) continue;
		if(b2>b1) {
			int w1=a1-a2;
			int w2=b2-b1;
			if(w1>0 && w1*hi2<hi1*w2) {
				hi1=w1;
				hi2=w2;
//				printf("high estimate of w reduced to %f\n",(double)hi1/hi2);
			}
		}
		if(b1>b2) {
			int w1=a2-a1;
			int w2=b1-b2;
			if(w1>0 && w1*lo2>lo1*w2) {
				lo1=w1;
				lo2=w2;
//				printf("low estimate of w increased to %f\n",(double)lo1/lo2);
			}
		}
	}
	/* check if bound is ok */
	if(lo1*hi2<hi1*lo2) {
//		printf("ok with bounds: %f %f\n",(double)lo1/lo2,(double)hi1/hi2);
	}
	return lo1*hi2<hi1*lo2;
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
