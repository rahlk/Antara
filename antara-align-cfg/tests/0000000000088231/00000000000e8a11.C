#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,x,i=1,a=0,b;
        scanf("%lld",&n);
        x=n;
        while(x>0)
        {
            int r=x%10;
            x=x/10;
            if(r==4)
            r=3;
            a=a+r*i;
            i=i*10;
        }
        b=n-a;
        printf("%lld %lld\n",a,b);
    }
}