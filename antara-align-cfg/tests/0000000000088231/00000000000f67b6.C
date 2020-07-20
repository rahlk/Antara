#include <stdio.h>

int answer(int input);
int power(int x, int y);

int main(){
	int input = 0;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++){
		int num = 0;
		scanf("%d", &num);
		int ans = answer(num);
		num -= ans;
		printf("Case #%d : %d %d\n", i, num, ans);
	}
}

int answer(int input){
	int tmp = 0;
	for (int i = 0; input != 0; i++, input /= 10){
		if (input % 10 == 4){
			tmp += power(10, i);
		}
	}
	return tmp;
}

int power(int x, int y){
	int tmp = 1;
	for (int i = 0; i < y; i++){
		tmp *= x;	
	}
	return tmp;
}
