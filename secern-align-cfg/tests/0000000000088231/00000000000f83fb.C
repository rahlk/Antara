#include <stdio.h>


long long answer(long long input);
long long power(long long x, long long y);

int main(){
	long long input = 0;
	scanf("%lld", &input);
	for (long long i = 1; i <= input; i++){
		long long num = 0;
		scanf("%lld", &num);
		long long ans = answer(num);
		num -= ans;
		printf("Case #%lld : %lld %lld\n", i, num, ans);
	}
}

long long answer(long long input){
	long long tmp = 0;
	for (long long i = 0; input != 0; i++, input /= 10){
		if (input % 10 == 4){
			tmp += power(10, i);
		}
	}
	return tmp;
}

long long power(long long x, long long y){
	long long tmp = 1;
	for (long long i = 0; i < y; i++){
		tmp *= x;	
	}
	return tmp;
}