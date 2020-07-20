#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int A;
char C[256][510];
char sol[510];

int main(int argc, char *argv[]){
	int abcd, iii, i, j, max, R, S, P, end;
	scanf("%d", &abcd);
	for( iii = 0; iii < abcd; iii++ ){
		printf("Case #%d: ", iii+1);
		scanf("%d", &A);
		end = 0;
		max = 0;
		for(i = 0; i<A; i++){
			scanf("%s", C[i]);
			if(strlen(C[i]) > max){
				max = strlen(C[i]);
			}
		}
		for(i = 0; i<max; i++){
			S = 0;
			P = 0;
			R = 0;
			for(j = 0; j<A; j++){
				if(i<strlen(C[j])){
					if(C[j][i]=='R'){
						R++;
					}
					if(C[j][i]=='P'){
						P++;
					}
					if(C[j][i]=='S'){
						S++;
					}
				}
			}
			if(R==S && S==P){
				printf("IMPOSSIBLE\n");
				end = 1;
				break;
			}else{
				if(R>=S){
					sol[i] = 'P';
				}
				if(S>=P){
					sol[i] = 'R';
				}
				if(P>=R){
					sol[i] = 'S';
				}
			}
		}

		sol[i] = '\0';
		if(!end){
			printf("%s\n", sol);

		}
		

	}
	return 0;
}