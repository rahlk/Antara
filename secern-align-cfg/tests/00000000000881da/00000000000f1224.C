#include <stdio.h>
#include <stdint.h>
#include <string.h>


#define NOT(a) (a=='E'?'S':'E') 




void process (char * lydyas , uint64_t len, char* result ){

	int balance = 0;
	int balance_l = 0;

	result[0] = NOT(lydyas[0]);	
	balance = (result[0] == 'S')?-1:1;
	balance_l = (lydyas[0] == 'S')?-1:1;

	for(uint64_t i = 1; i<len;i++){	

		if(balance == balance_l){
			
			result[i] = NOT(lydyas[i]);
			balance_l = lydyas[i] == 'E'?balance_l+1:balance_l-1;
			balance = result[i] == 'E'?balance+1:balance-1;
			
		}else{
			if(balance <0){
				result[i] = 'E';
				balance ++;
			}else if(balance > 0){
				result[i] = 'S';
				balance--;
			}else{
				
				result[i] = lydyas[i];
				balance = result[i] == 'E'?balance+1:balance-1;
			}
			balance_l = (lydyas[i]=='E') ? balance_l+1 : balance_l-1;
		}
	}
	result[len] = 0;

}



int main (){

	uint64_t N, len;
	char lyds[2048];
	char alaas[2048];
	
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

