#include<stdio.h>
int i=1,k=0;
main()
{
    long long int x,a,b,n,t,j,c,d,y;
    scanf("%lld",&t);
    while(t)
    {
    scanf("%lld",&n);
    j=n;
    while(n>=1)
    {
        x=n%10;
        if(x==4)
            x=3;
        i=i*10+x;
        n=n/10;
    }

    while(i>0)
    {
        y=i%10;
        k=k*10+y;
        i=i/10;
    }
    k=k/10;
    a=k;
    b=j-k;
    printf("%lld %lld\n",a,b);
    i=1;
    k=0;
    n=0;
    t--;
}}