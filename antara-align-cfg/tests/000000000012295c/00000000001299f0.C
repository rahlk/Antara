/* interval compression! (sometimes called sweepline) */

#include <stdio.h>
#include <stdlib.h>

/* given an array of values, "compress" the array by sorting it
   and keeping only unique values. also, provide a way to get the
   index in the new array, given an old value */

/* compare two integers (quicksort) */
int compi(const void *A,const void *B) {
	const int *a=A,*b=B;
	if(*a<*b) return -1;
	if(*a>*b) return 1;
	return 0;
}

/* given a number in the original array, return its index in the
   compressed array. if not found, return index to lowest number higher
   than val. *a must contain a value >val!
   val:  value to search for
   *a:   array with sweep-line valyes
   n:    size of *a */
/* NB, caller must take care when element doesn't exist. */
/* OK POJ 2637 (NCPC 2005 F "worst weather ever") 04.09.2011 */
int getindex(int val,int *a,int n) {
	int lo=0,hi=n,mid;
	while(lo!=hi) {
		mid=lo+(hi-lo)/2;
		if(a[mid]<val) lo=mid+1;
		else hi=mid;
	}
	return lo;
}

/* interval compression (sweepline) */
/* *a: array of n elements featuring our values
   these values are sorted, and duplicated are removed in-place.
   the number of unique values is returned. */
/* OK SPOJ 3465 DRIVE (NEERC 2008 D) 16.08.2011 */
/* OK POJ 2637 (NCPC 2005 F "worst weather ever") 04.09.2011 */
int intervalcompress(int *a,int n) {
	int nn=1,i;
	qsort(a,n,sizeof(int),compi);
	for(i=1;i<n;i++) if(a[i]>a[i-1]) a[nn++]=a[i];
	return nn;
}

int p,q;
char s[10];

int m[1600][1600];

int px[500],py[500];
char pd[500];

int x[1600],y[1600];
int xN,yN;

void update(int x1,int y1,int x2,int y2) {
//	printf("  %d %d %d %d -> ",x1,y1,x2,y2);
	x1=getindex(x1,x,xN);
	x2=getindex(x2,x,xN);
	y1=getindex(y1,y,yN);
	y2=getindex(y2,y,yN);
//	printf("  %d %d %d %d\n",x1,y1,x2,y2);
	for(int i=x1;i<=x2;i++) for(int j=y1;j<=y2;j++) m[i][j]++;
}

void printgrid() {
	for(int j=0;j<yN;j++) {
		for(int i=0;i<xN;i++) printf("%d",m[i][j]);
		printf("\n");
	}
}

void solve() {
	scanf("%d %d",&p,&q);
	xN=yN=0;
	x[xN++]=0;
	y[yN++]=0;
	x[xN++]=q+1;
	y[yN++]=q+1;
	for(int i=0;i<p;i++) {
		scanf("%d %d %s",&px[i],&py[i],s);
		pd[i]=s[0];
		/* for a coordinate c, insert c-1, c, c+1 as long as it's within 0..Q */
		x[xN++]=px[i];
		y[yN++]=py[i];
		if(px[i]>0) x[xN++]=px[i]-1;
		if(px[i]<q) x[xN++]=px[i]+1;
		if(py[i]>0) y[yN++]=py[i]-1;
		if(py[i]<q) y[yN++]=py[i]+1;
	}
	xN=intervalcompress(x,xN);
	yN=intervalcompress(y,yN);
	for(int i=0;i<xN;i++) for(int j=0;j<yN;j++) m[i][j]=0;
/*	for(int i=0;i<xN;i++) printf("%d ",x[i]);
	printf("\n");
	for(int i=0;i<yN;i++) printf("%d ",y[i]);
	printf("\n");*/
	/* follow */
	for(int i=0;i<p;i++) {
		if(pd[i]=='N') update(0,py[i]+1,q,q);
		else if(pd[i]=='S') update(0,0,q+1,py[i]-1);
		else if(pd[i]=='W') update(0,0,px[i]-1,q);
		else update(px[i]+1,0,q,q);
//		printgrid();
	}
	int best=-1;
	int bestx=-1,besty=-1;
	for(int i=0;i<xN;i++) for(int j=0;j<yN;j++) {
		if(best<m[i][j]) {
			best=m[i][j];
			bestx=x[i];
			besty=y[j];
//			printf("new best %d (%d,%d)\n",best,bestx,besty);
		}
	}
	printf("%d %d\n",bestx,besty);
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
