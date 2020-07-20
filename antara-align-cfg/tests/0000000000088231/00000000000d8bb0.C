#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long int n,a,b;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    { a=0;b=0;
    scanf("%lld",&n);
    if(n>0&&n<pow(10,5)&&n%4==0)
    {check1:
        a=rand()%n+1;
        b=rand()%n+1;
        if(a+b==n&&a%4!=0&&b%4!=0)
        {
         printf("Case #%d: %lld %lld\n",i,a,b);
        }
        else
        {
            goto check1;
        }
    }
    
    
    } 
    return 0;
    
}