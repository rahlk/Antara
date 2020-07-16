#include<stdio.h>
int f(unsigned long long n)
{
    while(n>0)
    {
        if(n%10 == 4)
            return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    int t;
    unsigned long long n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        for(i=1;i<=n/2;++i)
        {
            if(f(i)==1 && f(n-i)==1)
            {
                printf("%llu %llu\n",i,n-i);
                break;
            }
        }
    }
    return 0;
}