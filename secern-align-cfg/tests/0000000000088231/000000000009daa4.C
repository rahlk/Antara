#include <stdio.h>
#include <math.h>

int main(void){

	int num_test;
	scanf("%d", &num_test);

	int results_array[num_test];
	int amount_array[num_test];

	for(int i = 0; i<num_test; i++){
		
		int amount, current_amount,complement = 0;	
		scanf("%d", &amount);
		current_amount = amount;
		for(int j = (int)log10(amount); j >= 0; j--){
			int digit;
			digit  = current_amount/((int)pow(10, j));
	
			if(digit == 4){
				amount -= 2*(int)pow(10,j);
				complement += 2*((int)pow(10,j));
			}
			
			current_amount -= digit*((int)pow(10,j));
			
		}

		results_array[i] = complement;		
 		amount_array[i] = amount;
	}

	for(int i = 0; i<num_test; i++){

		printf("Case #%d: %d %d\n", i+1, results_array[i], amount_array[i]); 

	}

	return 0;
}
