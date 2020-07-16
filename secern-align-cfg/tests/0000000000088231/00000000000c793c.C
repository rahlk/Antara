#include<stdio.h>
int convert4To3Rec(int num) 
{  
    if (num == 0) 
        return 0; 
    int digit = num % 10; 
    if (digit == 4) 
        digit = 3; 
    return convert4To3Rec(num/10) * 10 + digit; 
} 
  
int convert4To3(int num) 
{ 
    if (num == 4) 
       return 3; 
    else return  convert4To3Rec(num); 
} 
  
int main() 
{ 
    int t, k;
	scanf("%d",&t);
for(k=1; k<=t; k++)
	{
	    int i, j, N;
		scanf("%d",&N);	
    int r= convert4To3(N);
    printf("Case #%d: %d %d\n",k,r,N-r);
}
}