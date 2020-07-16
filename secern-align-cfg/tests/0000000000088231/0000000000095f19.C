#include <stdio.h>

#define MAX_SIZE 100

int main(){
	
	int T = 0;
	scanf("%d\n",&T);
	int i = 0;
	for (i=1;i<=T;i++){
		
		printf("Case #%d: ",i);
		int Four_Array[MAX_SIZE] = {0};
		char digit = getchar();
		int counter_1 = 0;
		
		//	Print first number
		while(digit != '\n'){
			if(digit == '4'){
				printf("3");
				Four_Array[counter_1] = 1;
			}else{
				printf("%c",digit);
			}
			digit = getchar();
			counter_1 ++;
		}
		printf(" ");
		
		//	Print second Ones
		int counter_2 = 0;
		while(Four_Array[counter_2]==0 && counter_2 < counter_1){
			counter_2++;
		}
		while(counter_2 < counter_1){
			printf("%d",Four_Array[counter_2]);
			counter_2++;
		}
		
		
		printf("\n");
	}
	return 0;
}