#include <stdio.h>
int main()
{
    long long int t,i,j,k,c=1;
    long long int n,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if (n%2==0)
        {
            a=n/2;
            b=n/2;
        }
        else
        {
            a=n/2+1;
            b=n/2;
        }
        for (i = a,j = 1; i!=0 ; i/=10)
        {
            if (i%10==4)
            {
                a=a-(2*j);
                b=b+(2*j);
            }
            j=j*10;
        }
        printf("Case #%lld: %lld %lld\n",c,a,b);
        c=c+1;
    }
    return 0;
}