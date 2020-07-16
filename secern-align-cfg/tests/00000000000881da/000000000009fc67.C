#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num_test;
	scanf("%d", &num_test);
	
	int test_case_sizes[num_test];
	char ** solutions_array;
	solutions_array = (char**)malloc(num_test*sizeof(char*));

	for(int i = 0; i<num_test; i++){
	
		int size;
		scanf("%d", &size);
		test_case_sizes[i] = 2*size-2;
		*(solutions_array+i) = (char*)malloc((2*size-2)*sizeof(char));
		
		
		
		char directions[2*size-1];
		scanf("%s", directions);

		for(int j = 0; j<2*size-2; j++){

			if(directions[j] == 'E'){
				solutions_array[i][j] = 'S';
			}

			else{
				solutions_array[i][j] = 'E';
			}

		}
			

	}

	for(int i = 0; i<num_test; i++){

		printf("Case #%d: ", i+1);
		for(int j = 0; j<test_case_sizes[i]; j++){
			
			printf("%c", solutions_array[i][j]);

		}

		printf("\n");

	}

	return 0;

}
