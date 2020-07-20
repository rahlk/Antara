#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char P[50001];

int main(){
	int T, C = 1, N, s, i;
	scanf("%d", &T);
	while(T--){
		scanf("%d %s", &N, P);
		s = strlen(P);
		for(i=0; i<s; i++) P[i]=((P[i]=='S')?'E':'S');
		printf("Case #%d: %s\n", C, P);
		fflush(stdout);
		C++;
	}
	return 0;
}
