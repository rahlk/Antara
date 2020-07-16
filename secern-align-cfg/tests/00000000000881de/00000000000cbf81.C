#include <stdio.h>
#include <stdlib.h>

int N,B,F;

char z[2000];
char r[10][1025];

char s[10000];

int ans[1024];

/* algorithm for easy test set: requires log_2(N) queries */
void easyalgo() {
	for(int i=0;i<F;i++) {
		for(int j=0;j<N;j++) z[j]=((j>>i)&1)+'0';
		z[N]=0;
		puts(z);
		fflush(stdout);
		fgets(s,10000,stdin);
		sscanf(s,"%s",r[i]);
	}
	for(int i=0;i<1024;i++) ans[i]=0;
	/* answer */
	for(int i=0;r[0][i];i++) {
		int v=0;
		for(int j=0;j<F;j++) v+=(r[j][i]-'0')<<j;
		ans[v]=1;
	}
	for(int i=0;i<N;i++) if(!ans[i]) printf("%d ",i);
	printf("\n");
	fflush(stdout);
	int ans;
	fgets(s,10000,stdin);
	sscanf(s,"%d",&ans);
	if(ans==-1) exit(1);
}

int chunki[20]; /* address to chunk in whole address space */
int chunko[20]; /* address to chunk in returned address space */
int chunkl[20]; /* number of live workes in chunk */
int ch;

void solve() {
	fgets(s,10000,stdin);
	sscanf(s,"%d %d %d",&N,&B,&F);
//	fprintf(stderr,"read %d %d %d\n",N,B,F);
/*	if(F==10 || N<33) {
		easyalgo();
		return;
	}*/
	/* we know that B is at most 15. so construct a string ABABAB... where
	   A=0000000000000000 and B=1111111111111111 (16 0s and 1s in a row).
     the result will have the same number of runs of 0 and 1, but some with
	   fewer values. we can then identify the chunks that have broken workers
	   and how many
	*/
	for(int i=0;i<N;i++) z[i]=((i>>4)&1)+'0';
	z[N]=0;
//	fprintf(stderr,"send    %s\n",z);
	puts(z);
	fflush(stdout);
	fgets(s,10000,stdin);
	sscanf(s,"%s",r[0]);
//	fprintf(stderr,"receive %s\n",r[0]);
	ch=0;
	/* find chunks with broken workers */
	char cur='0';
	int p=0;
	for(int i=0;i<(N+15)/16;i++) {
		int len=0;
		while(r[0][p]==cur) {
			len++;
			p++;
		}
		/* add start address to chunk with broken workers */
		if((i*16+16>N && len<(N&15)) || (i*16+16<=N && len<16)) {
//			fprintf(stderr,"found chunk at %d %d\n",i*16,p-len);
			chunki[ch]=i*16;
			chunko[ch]=p-len;
			chunkl[ch++]=len;
		}
		cur^=1;
	}
	/* now do the same algorithm as for easy for each chunk */
	for(int iter=0;iter<4;iter++) {
		for(int i=0;i<N;i++) z[i]='0';
		for(int i=0;i<ch;i++) {
			for(int j=0;j<16;j++) if(chunki[i]+j<N) z[chunki[i]+j]=((j>>iter)&1)+'0';
		}
//		fprintf(stderr,"send    %s\n",z);
		puts(z);
		fflush(stdout);
		fgets(s,10000,stdin);
		sscanf(s,"%s",r[iter+1]);
//		fprintf(stderr,"receive %s\n",r[iter+1]);
	}
	/* find answer */
	for(int i=0;i<1024;i++) ans[i]=0;
	for(int h=0;h<ch;h++) {
		int p=chunko[h];
		int q=chunki[h];
		for(int i=0;i<chunkl[h] && r[0][p+i];i++) {
			int v=0;
			for(int j=0;j<4;j++) v+=(r[j+1][p+i]-'0')<<j;
			ans[q+v]=1;
		}
	}
	for(int h=0;h<ch;h++) {
		int p=chunki[h];
		for(int i=0;i<16 && p+i<N;i++) if(!ans[p+i]) {
			printf("%d ",p+i);
//			fprintf(stderr,"%d ",p+i);
		}
	}
//	fprintf(stderr,"\n");
	printf("\n");
	fflush(stdout);
	int ans;
	fgets(s,10000,stdin);
	sscanf(s,"%d",&ans);
	if(ans==-1) exit(1);
}

int main() {
	int T;
//	fprintf(stderr,"start\n");
	fgets(s,10000,stdin);
	sscanf(s,"%d",&T);
	for(int i=1;i<=T;i++) solve();
	return 0;
}
