#include <stdio.h>
#include <string.h>

char a[200];

char aa[201],bb[201],cc[201];

void fix(char *a,char *aa) {
	int l=strlen(a);
	int p=200-l;
	for(int i=0;i<p;i++) aa[i]='0';
	for(int i=0;i<l;i++) aa[p+i]=a[i];
}

void print(char *s) {
	while(*s=='0') s++;
	if(!*s) printf("0");
	else printf("%s",s);
}

void solve() {
	scanf("%s",a);
	for(int i=0;i<200;i++) aa[i]=bb[i]=cc[i]='0';
	aa[200]=bb[200]=cc[200]=0;
	fix(a,aa);
	for(int i=199;i>=0;i--) {
		if(aa[i]=='4') {
			bb[i]='2';
			cc[i]='2';
		} else {
			bb[i]=aa[i];
			cc[i]='0';
		}
	}
	print(bb);
	printf(" ");
	print(cc);
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
