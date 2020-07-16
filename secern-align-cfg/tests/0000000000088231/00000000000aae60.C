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
	int N;
	int A = 0, B;
	
	while(T<=100){
	A = 0;
	B = 0;
	N = 0;
	
	do{
	scanf("%d",&N);
	}while(!test4(N));
	
	do{
		A++;
		B = N - A;	
	}while(test4(A) || test4(B));
	
	printf("Case #%d: %d %d",T,A,B);
	T++;
	}
	
return 0;
}
