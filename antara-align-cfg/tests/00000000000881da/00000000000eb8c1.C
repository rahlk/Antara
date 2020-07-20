#include <stdio.h>
#include <stdint.h>
#include <string.h>


#define NOT(a) (a=='E'?'S':'E') 

void process (char * lydyas , uint64_t len, char* result ){

	while(len--){

		
		result[len] = NOT(lydyas[len]);
	}
	
}



int main (){

	uint64_t N, len;
	char lyds[2048];
	char alaas[2048];
	
	memset(alaas,0,2018);

	scanf("%lld",&N);

	for(uint64_t i = 1;i<=N;i++){
		scanf("%lld",&len);
		
		scanf("%s\n",lyds);
		process (lyds, 2*len-2, alaas);

		printf("Case #%lld: %s\n",i,alaas);
	}

//	printf("\n");
	return 0;
}

