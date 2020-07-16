#include<stdio.h>
int main()
{
	int T,N,temp;
int i=0;
	scanf("%d",&T);
	for(i=0;i<T;i++){
	scanf("%d",&N);
	temp=convert0To5Rec(N);
	printf("Case #%d: %d %d\n",(i+1),temp,(N-temp));
	}
return 0;
}
int convert0To5Rec(int num) 
{ 

    if (num == 0) 
        return 0; 

    int digit = num % 10; 
    if (digit == 4) 
        digit = 3; 

    return convert0To5Rec(num/10) *  
                       10 + digit; 
} 

int convert0To5(int num) 
{ 
    if (num == 4) 
    return 3; 
    else return convert0To5Rec(num); 
} 
