#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int A;
char C[256][510];
int dead[256];
char sol[510];

int main(int argc, char *argv[]){
	int abcd, iii, i, j, max, R, S, P, end;
	scanf("%d", &abcd);
	for( iii = 0; iii < abcd; iii++ ){
		scanf("%d", &A);
		printf("Case #%d: ", iii+1);
		for(i =0; i<A; i++) dead[i] = 0;
		end = 0;
		max = 0;
		for(i = 0; i<A; i++){
			scanf("%s", C[i]);
			if(strlen(C[i]) > max){
				max = strlen(C[i]);
			}
		}
		int alive = A;
		i = 0;
		while(alive>0){
			S = 0;
			P = 0;
			R = 0;
			for(j = 0; j<A; j++){
				if(!dead[i]){
					if(C[j][i%strlen(C[j])]=='R'){
						R++;
					}
					if(C[j][i%strlen(C[j])]=='P'){
						P++;
					}
					if(C[j][i%strlen(C[j])]=='S'){
						S++;
					}
				}
			}
			//printf("%d: %d %d %d\n", i, S, R, P);
			if(R>0 && P>0 && S>0){
				printf("IMPOSSIBLE\n");
				end = 1;
				break;
			}else{
				if(R==0 && S>0 && P>0){
					sol[i] = 'S';
				}
				if(R>0 && S==0 && P>0){
					sol[i] = 'P';
				}
				if(R>0 && S>0 && P==0){
					sol[i] = 'R';
				}
				if(R==0 && S==0 && P>0){
					sol[i] = 'S';
				}
				if(R==0 && S>0 && P==0){
					sol[i] = 'R';
				}
				if(R>0 && S==0 && P==0){
					sol[i] = 'P';
				}
				for(j = 0; j<A; j++){
					if(!dead[j] && sol[i] == 'P' && C[j][i%strlen(C[j])] == 'R'){
						dead[j] = 1;
						alive--;
					}
					if(!dead[j] && sol[i] == 'S' && C[j][i%strlen(C[j])] == 'P'){
						dead[j] = 1;
						alive--;
					}
					if(!dead[j] && sol[i] == 'R' && C[j][i%strlen(C[j])] == 'S'){
						dead[j] = 1;
						alive--;
					}
				}
			}
			i++;
		}
		sol[i] = '\0';
		if(!end){
			printf("%s\n", sol);

		}
		

	}
	return 0;
}