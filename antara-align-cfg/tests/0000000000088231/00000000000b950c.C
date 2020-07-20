#include <stdio.h>
int main()
{
    long long int t,i,j,k,c=1;
    long long int n,a,b;
    scanf("%d",&t);
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
            a=n/2;
            b=n/2+1;
        }
        for (i = a,j = 1,k = b; i!=0 || k!=0; i/=10,j*=10,k/=10)
        {
            if (i%10==4 && k%10!=3)
            {
                a=a-(1*j);
                b=b+(1*j);
            }
            else if (i%10==4 && k%10==3)
            {
                a=a-(2*j);
                b=b+(2*j);   
            }
        }
        printf("Case #%d: %lld %lld\n",c,a,b);
        c=c+1;
    }
    return 0;
}