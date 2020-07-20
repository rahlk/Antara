#include<stdio.h>
#include<stdlib.h>
long long ppp(long long int k)
{
    int r,p=0;
    while(k!=0)
    {
        r=k%10;
        p=p*10+r;
        k=k/10;
    }
    return p;
}
long long reverse(long long int n)
{
    int r,p=0;
    while(n!=0)
    {
        r=n%10;
        if(r==4)
        {
            r=3;
        }
        p=p*10+r;
        n=n/10;
    }
    return p;
}
long long peverse(long long int n)
{
    int r,p=0;
    while(n!=0)
    {
        r=n%10;
        if(r==4)
        {
            r=1;
        }
        else
        {
            r=0;
        }
        p=p*10+r;
        n=n/10;
    }
    return p;
}
long long ftoo(long long int n)
{
    long long int k;
    k=peverse(n);
    long long int p;
    p=ppp(k);
    return p;
}
long long ftot(long long int n)
{
    long long int k;
    k=reverse(n);
    long long int p;
    p=ppp(k);
    return p;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        printf("%lld %lld\n",ftoo(n),ftot(n));
    }
    return 0;
}