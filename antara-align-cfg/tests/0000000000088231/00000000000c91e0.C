#include<stdio.h>
int i=0;
main()
{
    long int x,y,a,b,n,t,j,c,d;
    scanf("%ld",&t);
    while(t)
    {
    scanf("%ld",&n);
    j=n;
    while(n>=1)
    {
        x=n%10;
        if(x==4)
            x=2;
        i=i*10+x;
        n=n/10;
    }
    a=i;
    c=a;
    b=j-i;
    d=b;
    printf("%ld %ld\n",a,b);
    i=0;
    n=0;
    j=0;
}}