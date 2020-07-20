#include <stdio.h>
#include <math.h>

int test4(int a){
	/*
		if there are 4 -> return 1
		else -> return 0
	*/
	do{
		if(a%10 == 4)
			return 1;
		else
			a = floor(a/10);
	}while(a != 0);
	
	return 0; //end number
}


int main(){
	
	int N;
	int A = 0, B;
	
	printf("Input:");
	scanf("%d",&N);
	
	///////////////
	do{
		A++;
		B = N - A;	
	}while(test4(A) || test4(B));
	
	printf("Case #1: %d %d\n\n",A,B);
	
return 0;
}
