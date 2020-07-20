#include<stdio.h>

int main()
{
    long long b,n;
    
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        b=0;
        long long d=10;
        while(n%d>0)
        {
            long long temp=n%d;
            if(temp/(d/10)==4)
            {
                b+=(d/10);
            }
            d*=10;
        }
        printf("Case #%d: %lld %lld",i+1,b,n-b);
    }
    return 0;
}