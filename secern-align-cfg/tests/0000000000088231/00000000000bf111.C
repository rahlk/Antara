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
        long long a=n;
        long long d=1;
        while(a>0)
        {
            long long temp=a%10;
            if(temp==4)
            {
                b+=d;
            }
            a/=10;
            d*=10;
        }
        printf("Case #%d: %lld %lld \n",i+1,b,n-b);
    }
    return 0;
}