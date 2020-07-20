#include <stdio.h>

int valIs(long int num){

	while( num > 0 ){
		if( num%10 == 4 ){
			return 1;
		}
		num = num/10;
	}

	return 0;
}

int main(){
	long int cases, c = 0, num, i, j;

	scanf("%li", &cases);

	while(cases--){
		c++;
		scanf("%li", &num);

		for(i = 1; i < num; i++){
			j = num-i;
			if( (i+j == num) && (valIs(i) == 0) && (valIs(j) == 0) ){
				printf("Case #%li: %li %li\n", c, i, j);
				break;
			}
		}
	}

	return 0;
}