#include <stdio.h>
#include <stdint.h>



void process (uint32_t amount, uint32_t *part_1, uint32_t *part_2 ){

	*part_1 = 0;
	*part_2 = 0;

	uint32_t counter = 1;
	while (amount>0){
		
		uint32_t tmp = amount % 10;

		if(tmp == 4){
			*part_1 += (((amount % 10)-1)  * counter);
			*part_2 += (counter) ;
		}else{
			*part_1 += (((amount % 10))  * counter);
		}

		amount = amount/10;
		counter *=10;
	}	
}



int main (){

	uint32_t N;
	char tab[100];
	uint32_t amount;

	uint32_t *part_1;
	uint32_t *part_2;


	scanf("%d",&N);

	for(int i = 1;i<=N;i++){
		scanf("%d\n",&amount);
		process (amount, part_1, part_2);

		printf("Case #%d: %d %d\n",i,*part_1, *part_2);
	}

	return 0;
}

