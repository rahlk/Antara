#include<stdio.h>
#include<stdlib.h>

int main(){
	int T,N;//Question variables
	int size; 
	char *moves;
	//printf("Enter T :");
	scanf("%d",&T);
	int test,i,j; 
	for ( test=1; test <= T; test++){
		//printf("Enter N :");
		scanf("%d",&N);
		size=2*N-2;
		moves = (char*)calloc(size , sizeof(char));
		if (moves== NULL){
			printf("Unable to allocate memory to moves\n");
			exit(1);
		}
		scanf("%s",moves);
		//printf("moves = %s\n",moves);
		//storing valid moves 
		for(i=0; i < size; i++){
			if ( moves[i] == 'S')
				moves[i]='E';
			else
				moves[i]='S';
			//end if
		}
		printf("Case #%d: %s\n",test,moves);
		free(moves);
	}
	return 0;
}
