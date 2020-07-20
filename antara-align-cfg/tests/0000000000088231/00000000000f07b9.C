#include <stdio.h>

void break_num(int n){
	int a, b;
	int m;
	int k = 1;
	a =0;
	b = 0;
	while(n>0){
		m = n%10;
		if(m == 4){
			a += 3*k;
			b += k;
		}else{
			a += m*k;
		}
		k *= 10;
		n = n/10;
	}
	printf("%d %d\n", a, b);
}

int main(){
	int t;
	int n,i;

	scanf("%d\n", &t);
	for(i =0; i< t; i++){
		scanf("%d\n", &n);
		printf("Case #%d: ", i + 1);
		break_num(n);
	}
	return 0;
}