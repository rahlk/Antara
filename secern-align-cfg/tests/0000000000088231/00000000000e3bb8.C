#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	char N[101], A[101], B[101];
	
	int T, C = 1, s, i, bs, bi;
	
	scanf("%d", &T);
	while(T--){
		scanf("%s", N);
		
		memset(A, 0, 101);
		memset(B, 0, 101);
		
		s = strlen(N)-1;
		for(i=0, bs=0, bi=0; i<=s; i++){
			if(N[i]=='4'){
				A[i]='3';
				B[bi++] = '1';
				bs = 1;
			}
			else{
				A[i] = N[i];
				if(bs){
					B[bi++] = '0';
				}
			}
		}
		
		if(B[0]==0) B[0] = '0';
		
		
		printf("Case #%d: %s %s\n", C, A, B);
		fflush(stdout);
		C++;
	}
	return 0;
}