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
			crp *= 10;
			if(tmp%10 == 4){
				newNum += 2*crp/10;
				num -= 2*crp/10;
			}
			tmp /= 10;
		} while(tmp/crp != 0);
		
		printf("Case #%d: %d %d\n", i, num, newNum);
	}
	
	return 0;
}