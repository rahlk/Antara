#include <stdio.h>

int N,L;
int prod[100];
int primes[100];
int pn;

int plain[200]; /* prime number for plaintext */

int gcd(int a,int b) {
	int t;
	while(b) t=a,a=b,b=t%b;
	return a;
}

void addprime(int p) {
	for(int i=0;i<pn;i++) if(p==primes[i]) return;
	primes[pn++]=p;
}

void sortprimes() {
	for(int i=0;i<pn;i++) for(int j=0;j<pn-1;j++) if(primes[j]>primes[j+1]) {
		int t=primes[j];
		primes[j]=primes[j+1];
		primes[j+1]=t;
	}
}

int findprime(int p) {
	for(int i=0;i<pn;i++) if(primes[i]==p) return i;
	printf("sanity error %d\n",p);
	return -1;
}

void check(int i) {
	if(plain[i]==-1 && plain[i+1]>1) plain[i]=prod[i]/plain[i+1];
	else if(plain[i]>1 && plain[i+1]==-1) plain[i+1]=prod[i]/plain[i];
}

void solve() {
	scanf("%d %d",&N,&L);
	for(int i=0;i<L;i++) scanf("%d",&prod[i]);
	pn=0;
	for(int i=0;i<=L;i++) plain[i]=-1;
	/* find chars in plaintext where gcd gives a sensible answer */
	for(int i=0;i<L-1;i++) {
		int g=gcd(prod[i],prod[i+1]);
		if(prod[i]==g || prod[i+1]==g) continue;
		plain[i+1]=g;
	}
	/* fill in the blanks */
	for(int i=0;i<L;i++) check(i);
	for(int i=L-1;i>=0;i--) check(i);
	for(int i=0;i<=L;i++) if(plain[i]<0) printf("error %d\n",i);
	for(int i=0;i<=L;i++) addprime(plain[i]);
	sortprimes();
	for(int i=0;i<=L;i++) printf("%c",'A'+findprime(plain[i]));
	printf("\n");
}

int main() {
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++) {
		printf("Case #%d: ",i);
		solve();
	}
	return 0;
}