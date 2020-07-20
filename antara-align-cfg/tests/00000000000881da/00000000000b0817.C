#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void makePath(int N, char* Lyd, char* Me);


int main(){
	int numOfTests=0, i=0, N=0;
	char *Lyd=NULL, *Me=NULL;

	// input section
	scanf("%d", &numOfTests);
	// main algorithm
	for(i=0; i<numOfTests;i++){
		scanf("%d", &N);
		Lyd=(char*) calloc((2*N-1),sizeof(char));
		Me=(char*) calloc((2*N-1),sizeof(char));
		
		scanf("%s", Lyd);
		makePath(N, Lyd, Me);
		printf("Case #%d: %s", i+1, Me);
		
		free(Lyd); free(Me);
	}

	return 0;
}

void makePath(int N, char* Lyd, char* Me){
	int loc_L=0, loc_M=0, i=0;
	char* p = Lyd;
	while(*p != 0){
		if(*p == 'S') Me[i++] = 'E';
		else Me[i++] = 'S';
		p++;
	}
}