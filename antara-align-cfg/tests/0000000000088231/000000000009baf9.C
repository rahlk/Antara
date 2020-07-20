#include<stdio.h>

int main()
{
    int t;
    while(t--)
    {
        long long int n,x,y;
        scanf("%lld",&n);
        int i,d;
        x=0;
        while(n)
        {
            i=0;
            d=n%10;
            if(d==4)
                d--;
            n=n/10;
            x=x+(10^i);
            i++;
        }
        y=n-x;
        
        printf("%lld %lld",x,y);
    }
    return 0;
}