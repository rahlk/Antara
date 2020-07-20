#include<stdio.h> 
int convert4To1Rec(int num) 
{
    if (num == 0) 
        return 0; 
    int digit = num % 10; 
    if (digit == 4) 
        digit = 1; 
    return convert4To1Rec(num/10) * 10 + digit; 
} 
int convert4To1(int num) 
{ 
    if (num == 4) 
       return 1; 
    else return  convert4To1Rec(num); 
} 
int main() 
{
    long long int t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
    long long int num,s,c=0;
    scanf("%lld",&num);
    s=num-convert4To1(num);
    c++;
    printf("Case #%lld: %lld %lld\n",i,convert4To1(num),s);
    }
    return 0; 
}