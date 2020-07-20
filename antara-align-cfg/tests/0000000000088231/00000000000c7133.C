#include<stdio.h>
int i=0;
main()
{
    int x,y,a,b,n,t,j;
    scanf("%d",&t);
    while(t)
    {
    scanf("%d",&n);
    j=n;
    while(n>0)
    {
        x=n%10;
        if(x==4)
            x=3;
        i=i*10+x;
        n=n/10;
    }
    a=i;
    b=j-i;
    printf("%d %d\n",a,b);
    i=0;
    n=0;
    j=0;
}}
