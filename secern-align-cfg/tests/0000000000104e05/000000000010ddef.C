#include <stdio.h>
#include <string.h>

#define MAX 6

int n;
char s[MAX][51];
int len[MAX];

int best=0;
char taken[MAX]; /* 1:taken, 0:not taken -1:discarded */
int suffix[MAX]; /* suffix chosen */

void btr(int at,int ans) {
	char bak[MAX];
	int bak2[MAX];
	if(best==(n/2*2)) return;
	if(at>=n-1) {
		if(best<ans) best=ans;
		return;
	}
	/* skip */
	btr(at+1,ans);
	for(int i=0;i<n;i++) bak[i]=taken[i];
	for(int i=0;i<n;i++) bak2[i]=suffix[i];
	if(!taken[at]) {
		/* try all accent-suffixes of current word */
		for(int i=0;i<len[at];i++) {
			/* try all other words below in the list, check for same suffix */
			int ilen=len[at]-i;
			/* first check if it already matches a taken word */
			for(int j=0;j<n;j++) if(j!=i && taken[j]==1) {
				int jx=len[j]-ilen;
				if(jx<0) continue;
				if(suffix[j]==jx && !strcmp(s[at]+i,s[j]+jx)) goto fail;
			}
			/* try all words and check if they match suffix */
			for(int j=at+1;j<n;j++) {
				int jx=len[j]-ilen;
				if(jx<0) continue;
				if(!strcmp(s[at]+i,s[j]+jx)) {
					/* discard other words with same suffix */
					for(int k=0;k<n;k++) if(k!=i && k!=j) {
						int kx=len[k]-ilen;
						if(kx<0) continue;
						if(!taken[k] && !strcmp(s[at]+i,s[k]+kx)) if(!taken[k]) taken[k]=-1;
					}
					taken[at]=1;
					suffix[at]=i;
					taken[j]=1;
					suffix[j]=jx;
					btr(at+1,ans+2);
					for(int k=0;k<n;k++) taken[k]=bak[k];
					for(int k=0;k<n;k++) suffix[k]=bak2[k];
				}
			}
		fail:;
			for(int j=0;j<n;j++) taken[j]=bak[j];
			for(int j=0;j<n;j++) suffix[j]=bak2[j];
		}
	}
}

void solve() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%s",s[i]);
	for(int i=0;i<n;i++) len[i]=strlen(s[i]);
	for(int i=0;i<n;i++) taken[i]=0;
	for(int i=0;i<n;i++) suffix[i]=-1;
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
