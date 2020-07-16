#include <stdio.h>
#include <string.h>
int contains4(int n){
	if(n == 0)
		return 0;
	if(n % 10 == 4)
		return 1;
	return contains4(n / 10);
}
int main(void){
	int n;
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++){
		
		int number1 , number2 = 0, j, k;
		scanf("%d", &number1);
		for(j = 0; number1 >= 0; number1--, number2++){
			if(!contains4(number1) && !contains4(number2)){
				printf("Case #%d: %d %d\n",i + 1, number1, number2);
				break;
			}
		}
	}
}

