#include <stdio.h>
#include <string.h>

int n;
char s[260][510];
char t[6];
int won=0;

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

int fight(int a,int b) {
	int ap=0,bp=0;
	if(!strcmp(s[a],s[b])) return a;
	for(int i=0;i<100;i++) {
		char x=s[a][ap++];
		char y=s[b][bp++];
		if(x=='R' && y=='S') return a;
		if(x=='S' && y=='P') return a;
		if(x=='P' && y=='R') return a;
		if(x=='S' && y=='R') return b;
		if(x=='P' && y=='S') return b;
		if(x=='R' && y=='P') return b;
		if(!s[a][ap]) ap=0;
		if(!s[b][bp]) bp=0;
	}
	return a;
}

void btr() {
	int perm[8];
	int left[8];
	strcpy(s[n],t);
//	printf("try %s\n",t);
	for(int i=0;i<n+1;i++) perm[i]=i;
	do {
		for(int i=0;i<n+1;i++) left[i]=perm[i];
		int N=n+1;
		while(N>1) {
//			for(int i=0;i<N;i++) printf("%d ",left[i]);
//			printf("\n");
			for(int i=0;i<N;i+=2) {
				/* i and i+1 plays */
				int winner=fight(left[i],left[i+1]);
				left[i/2]=winner;
			}
			N/=2;
		}
		/* we found a permutation where we didn't win, abort */
		if(left[0]!=n) return;
	} while(nextpermutation(perm,n+1));
	won=1;
}

void makestring(int at,int left) {
	if(won) return;
	if(left==0) {
		t[at]=0;
		btr();
		return;
	}
	t[at]='R'; makestring(at+1,left-1);
	if(won) return;
	t[at]='P'; makestring(at+1,left-1);
	if(won) return;
	t[at]='S'; makestring(at+1,left-1);
}

void try(int len) {
	makestring(0,len);
}

void solve() {
	scanf("%d",&n);
	won=0;
	for(int i=0;i<n;i++) scanf("%s",s[i]);
	/* try all strings */
	for(int i=1;i<=5;i++) {
		try(i);
		if(won) {
			puts(t);
			return;
		}
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
