#include<stdio.h>
int main()
{
    long long int i,t,n,d;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        d=n/4;
        printf("Case #%lld: %lld %lld",i,d,n-d);
        printf("\n");
    }
    return 0;
}