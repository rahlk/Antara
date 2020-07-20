#include <stdio.h>

int main(){
	
	int N;
	long int num;
	long int tmp;
	long int crp;
	long int newNum;
	
	scanf("%d", &N);
	
	int i;
	for(i = 0; i < N; i++){
		scanf("%d", &num);
		tmp = num;
		crp=1;
		newNum = 0;
		do{
			if(tmp%10 == 4){
				newNum += 2*crp;
				num -= 2*crp;
			}
			crp *= 10;
			tmp /= 10;
		} while(num/crp != 0);
		
		printf("Case #%d: %d %d\n", i+1, num, newNum);
	}
	
	return 0;
}