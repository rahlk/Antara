#include<stdio.h>
int main()
{
    long long int i,t,n,d;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        d=n/4;
        printf("%lld ",d);
        printf("%lld",n-d);
    }
    return 0;
}