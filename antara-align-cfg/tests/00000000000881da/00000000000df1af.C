#include<stdio.h>
#include<stdlib.h>

int main(){
	int T,N;//Question variables
	int size; 
	char *moves;
	scanf("%d",&T);
	int test,i,j; 
	for ( test=1; test <= T; test++){
		scanf("%d",&N);
		size=2*N-1;
		moves == NULL;
		moves = (char*)calloc(size , sizeof(char));
		if (moves == NULL){
			printf("Unable to allocate memory to moves\n");
			exit(1);
		}
		scanf("%s",moves);
		for(i=0; i < size-1; i++){
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
