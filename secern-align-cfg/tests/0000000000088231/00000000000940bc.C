#include<stdio.h>
bool isDigitPresent(unsigned long long x, unsigned long long d) 
{ 
    while (x > 0) 
    { 
        if (x % 10 == d) 
            break; 
  
        x = x / 10; 
    } 
    return (x > 0); 
} 
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        unsigned long long n;
        scanf("%d",&n);
        unsigned long long a=n,b=0;
        while(isDigitPresent(a,4)||isDigitPresent(b,4))
        {
            a-=1;
            b+=1;
        }
        printf("Case #%d: %d %d\n",i+1,a,b);
    }
}