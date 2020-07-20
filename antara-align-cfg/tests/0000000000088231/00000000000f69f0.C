#include <stdio.h>

long long answer(int input);
long long power(int x, int y);

int main(){
	int input = 0;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++){
		long long num = 0;
		scanf("%d", &num);
		long long ans = answer(num);
		num -= ans;
		printf("Case #%d : %lld %lld\n", i, num, ans);
	}
}

long long answer(long long input){
	long long tmp = 0;
	for (int i = 0; input != 0; i++, input /= 10){
		if (input % 10 == 4){
			tmp += power(10, i);
		}
	}
	return tmp;
}

long long power(int x, int y){
	long long tmp = 1;
	for (int i = 0; i < y; i++){
		tmp *= x;	
	}
	return tmp;
}
