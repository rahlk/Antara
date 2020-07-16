#include <stdio.h>
#include <stdint.h>



void process (uint64_t amount, uint64_t *part_1, uint64_t *part_2 ){

	*part_1 = 0;
	*part_2 = 0;

	uint64_t counter = 1;
	while (amount>0){
		
		uint64_t tmp = amount % 10;

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

	uint64_t N;
	uint64_t amount;

	uint64_t part_1;
	uint64_t part_2;


	scanf("%lld",&N);

	for(uint64_t i = 1;i<=N;i++){
		scanf("%lld\n",&amount);
		process (amount, &part_1, &part_2);

		printf("Case #%lld: %lld %lld\n",i,part_1, part_2);
	}

//	printf("\n");
	return 0;
}

