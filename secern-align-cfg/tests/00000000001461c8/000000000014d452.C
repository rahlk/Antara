#include <stdio.h>
#include <stdlib.h>

#define MAGIC 80

char s[100000];

void solve() {
	int val;
	/* first MAGIC turns: put our number in vase i for turn i */
	for(int i=1;i<=MAGIC;i++) {
		fgets(s,100000,stdin);
		sscanf(s,"%d",&val);
		if(val!=i) exit(1);
		int vase=(i-1)%19+1;
		printf("%d 100\n",vase);
		fflush(stdout);
	}
	/* remaining turns up to 80: inspect vase (turn number) */
	int best=123213,bestix=20;
	for(int i=MAGIC+1;i<=99;i++) {
		int vase=i-MAGIC;
		fgets(s,100000,stdin);
		sscanf(s,"%d",&val);
		if(val!=i) exit(1);
		printf("%d 0\n",vase);
		fflush(stdout);
		fgets(s,100000,stdin);
		int space=0;
		for(int i=0;s[i];i++) if(s[i]==' ') space++;
		if(best>=space) {
			best=space;
			bestix=i;
		}
	}
	fgets(s,100000,stdin);
	sscanf(s,"%d",&val);
	if(val!=100) exit(1);
	/* put out number in the "best" vase */
	printf("%d 100\n",bestix);
	fflush(stdout);
}

int main() {
	int T;
	fgets(s,100000,stdin);
	sscanf(s,"%d",&T);
	while(T--) solve();
	return 0;
}
