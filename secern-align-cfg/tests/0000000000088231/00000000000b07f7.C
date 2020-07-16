#include <stdio.h>
#include <math.h>
#include <string.h>

int process(int number){
	int subtract = 0;
	int i = 0;
	while(number){
		if(number%10 ==4){
			subtract+=pow(10, i);
		}
		++i;
		number /= 10;
	}
	return subtract;
}

int main(){
    int n_cases, case_num = 1;
    scanf("%d", &n_cases);
    while(case_num<=n_cases){
        int target;
        scanf("%d", &target);
		int subtract = process(target);
		int value =  (target-subtract);
        printf("Case #%d: %d %d\n", case_num, value, subtract);
		++case_num;
    }
}