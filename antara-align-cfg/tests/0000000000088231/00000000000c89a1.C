#include<stdio.h>
#include<stdlib.h>
long long int convert4To3Rec(long long int num) 
{ 
    if (num == 0) 
        return 0; 
  
   
    long long int digit = num % 10; 
    if (digit == 4) 
        digit = 3; 
  
    
    return convert4To3Rec(num/10) * 10 + digit; 
} 
  

long long int convert4To3(long long int num) 
{ 
    if (num == 4) 
       return 3; 
    else return  convert4To3Rec(num); 
} 
  
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int p;
        p=convert4To3(n);
        printf("%lld %lld\n",p,n-p);
    }
    return 0;
}