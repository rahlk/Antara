#include <stdio.h>
int isPresent(int n){
	int mod;
	while(n){
		mod = n % 10;
		n = n / 10;
		if(mod == 4){
			return 1;
		}
	}
	return 0;
}
int main(){
	int number_test;
	int sum1;
	int start;
	int end;
	int sum2;
	scanf("%d",&number_test);
	for(int i = 0;i < number_test;i++){
		scanf("%d",&sum1);
		start = 0;
		end = sum1 - 1;
		while(start < end){
			sum2 = start + end;
			if(sum2 == sum1 && !isPresent(start) && !isPresent(end)){
					printf("Case #%d: %d %d\n",i+1,start,end);
					break;
			}
			else if(sum2 < sum1){
				start += 1;
			}
			else{
				end -= 1;
			}
		}
	}
}