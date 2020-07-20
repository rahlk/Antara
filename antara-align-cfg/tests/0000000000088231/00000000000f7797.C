#include <stdio.h>


long long answer(long long input);
long long power(long long x, long long y);

int main(){
	long long input = 0;
	long long ans[100] = {0, };
	long long num[100] = {0, };
	scanf("%lld", &input);
	for (long long i = 0; i < input; i++){
		scanf("%lld", num + i);
		ans[i] = answer(num[i]);
		num[i] -= ans[i];
	}
	for (int i = 1; i <= input; i++){
		printf("Case #%d : %lld %lld\n", i, ans[i - 1], num[i -1]);
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

