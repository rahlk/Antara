#include <stdio.h>
#include <stdlib.h>



void processCase(int caseNumber){
	int N;
	scanf("%d", &N);
	int stringSize = (2 * N) - 2;
	char *lydia = calloc(stringSize + 1, sizeof(char));
	char *me = calloc(stringSize + 1, sizeof(char));
	
	scanf("%s", lydia);
	printf("Case #%d: ", caseNumber);
	for(int i = 0; i < stringSize; i++){
	    if(lydia[i] == 'S'){
	        printf("E");
	    }
	    else{
	        printf("S");
	    }
	}
	printf("\n");
	
	free(lydia);
	free(me);
}

int main(){
	int numberCases;
	scanf("%d", &numberCases);
	for(int i = 1; i <= numberCases; i++){
		processCase(i);
	}
}
