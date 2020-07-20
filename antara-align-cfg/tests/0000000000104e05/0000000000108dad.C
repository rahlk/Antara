#include <stdio.h>
#include <string.h>

#define MAX 6

int n;
char s[MAX][51];
int len[MAX];

int best=0;
char taken[MAX];

void btr(int at,int ans) {
	char bak[MAX];
	char share[MAX];
//	if(best==(n/2*2)) return;
	if(at==n) {
		if(best<ans) best=ans;
		return;
	}
	/* skip */
	btr(at+1,ans);
	for(int j=0;j<n;j++) bak[j]=taken[j];
	if(!taken[at]) {
		/* try all accent-suffixes of current word */
		for(int i=0;i<len[at];i++) {
			int count=1;
			for(int j=0;j<n;j++) share[j]=0;
			taken[at]=1;
			/* find all words that share accent-suffix */
			int ilen=len[at]-i;
			for(int j=at+1;j<n;j++) if(!taken[j]) {
				int jx=len[j]-ilen;
				if(jx<0) continue;
				if(!strcmp(s[at]+i,s[j]+jx)) {
					share[j]=1;
					count++;
				}
			}
/*			printf("at word %d index %d/%d: ",at,i,len[at]);
			for(int j=0;j<n;j++) printf("%d",share[j]);
			printf("\n");*/
			/* choose one of them, doesn't matter. mark all at taken (which means
			   either taken or discarded */
			if(count>1) {
				for(int j=at+1;j<n;j++) if(share[j]) taken[j]=1;
				btr(at+1,ans+2);
			}
			for(int j=0;j<n;j++) taken[j]=bak[j];
		}
	}
}

void solve() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%s",s[i]);
	for(int i=0;i<n;i++) len[i]=strlen(s[i]);
	for(int i=0;i<n;i++) taken[i]=0;
	best=0;
	btr(0,0);
	printf("%d\n",best);
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
