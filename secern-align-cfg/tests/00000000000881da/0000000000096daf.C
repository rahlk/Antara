#include <stdio.h>

#define MAX_SIZE 100

int main(){
	
	int T = 0;
	scanf("%d\n",&T);
	int i = 0;
	for (i=1;i<=T;i++){
		printf("Case #%d: ",i);
		int N = 0;
		scanf("%d\n",&N);
		N=2*N-2;
		
		//	Invertir camino
		int j=0;
		for(j==0;j<N ; j++){
			char Step = getchar();
			if(Step == 'S'){
				printf("E");
			}else{
				printf("S");
			}
		}
		
		
		getchar();
		printf("\n");
		
	}
}