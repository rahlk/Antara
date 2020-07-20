#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int T,F;

char s[MAX];

int perm[120][5];

void solve() {
	for(int i=0;i<119;i++) {
		for(int j=0;j<4;j++) {
			printf("%d\n",i*5+j+1);
			fflush(stdin);
			fgets(s,MAX,stdout);
			char t[10];
			sscanf(s,"%s",t);
			perm[i][j]=t[0]-'A';
		}
	}
	/* fill in missing */
	for(int i=0;i<119;i++) {
		int sum=0;
		for(int j=0;j<4;j++) sum+=perm[i][j];
		perm[i][4]=10-sum;
	}
	/* find permutation */
	for(int a=0;a<5;a++) for(int b=0;b<5;b++) for(int c=0;c<5;c++) for(int d=0;d<5;d++) for(int e=0;e<5;e++) {
		if(a==b) continue;
		if(a==c) continue;
		if(a==d) continue;
		if(a==e) continue;
		if(b==c) continue;
		if(b==d) continue;
		if(b==e) continue;
		if(c==d) continue;
		if(c==e) continue;
		if(d==e) continue;
		for(int i=0;i<119;i++) {
			if(a==perm[i][0] && b==perm[i][1] && c==perm[i][2] && d==perm[i][3] && e==perm[i][4]) goto exists;
		}
		printf("%c%c%c%c%c\n",a+'A',b+'A',c+'A',d+'A',e+'A');
		fflush(stdout);
		goto done;
	exists:;
	}
done:
	fgets(s,MAX,stdout);
	char v[100];
	sscanf(s,"%s",v);
	if(v[0]=='N') exit(1);
}

int main() {
	fgets(s,MAX,stdin);
	sscanf(s,"%d %d",&T,&F);
	while(T--) solve();
	return 0;
}
