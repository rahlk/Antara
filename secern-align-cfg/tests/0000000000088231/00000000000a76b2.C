#include <stdio.h>
#include <math.h>

int test4(int a){
	do{
		if(a%10 == 4)
			return 1;
		else
			a = floor(a/10);
	}while(a != 0);
	
	return 0;
}


int main(){
	int T = 1;
	
	while(T<=100){
	int N;
	int A = 0, B;
	
	printf("Input:");
	scanf("%d",&N);
	
	do{
		A++;
		B = N - A;	
	}while(test4(A) || test4(B));
	
	printf("Case #%d: %d %d\n\n",T,A,B);
	T++;
	}
return 0;
}
