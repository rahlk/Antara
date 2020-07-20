#include<stdlib.h>
#include<stdio.h>

char * getMoveString(int N, char* L) {
	int mc = 0;
	int p = 0;
	int i=0,j=0,li=0,lj=0;
	char * MS = (char *)malloc(sizeof(char)*(2*N-1));
	int msi = 0;
	while(i != N-1 || j != N-1) {
		int m;
		if(p==0) {
			m = 1;
		} else {
			m = 0;
		}
		if(i==li && j==lj && L[mc] == (m==1?'S':'E')) {
			m = (m+1)%2;
		} else {
			p = (p+1)%2;
		}
		MS[msi++] = (m==1?'S':'E');
		if(m == 1) {
			i++;
		} else {
			j++;
		}
		if(L[mc] == 'S') {
			li++;
		} else {
			lj++;
		}
		mc++;
	}
	MS[msi] = '\0';
	return MS;
}

int main() {
	int T;
	scanf("%d", &T);
	int i=0;
	while(T--) {
		i++;
		int N;
		scanf("%d", &N);
		char L[2*N-1];
		scanf("%s", L);
		char * move = getMoveString(N, L);
		printf("Case #%d: %s\n", i, move);
		free(move);
	}
	return 0;
}
