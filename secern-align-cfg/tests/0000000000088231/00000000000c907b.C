#include<stdio.h>
int main(void)
{
    int t,  c=1;
    scanf("%lld", &t);
    while(t--)
    {
        long int n, m, x=0, y=0;
        scanf("%ld", &n);
        long int td=0;
        m=n;
        while(m)
        {
            m=m/10;
            td++;
        }
        m=n;
        long int a[td];
        for(long int i=0;i<td;i++)
        {
            if(n%10==4)
            {
                a[i]=3;
            }
            else
            {
                a[i]=n%10;
            }
            n/=10;
        }
        for (long int i=0, j=1; i<td; ++i)
        {
            if(!a[i])
                x=x+j;
            else
                x=x+a[i]*j;
            j*=10;
        }
        y=m-x;
        printf("case #%ld: %ld %ld\n", c, x, y);
        c++;
    }
    return 0;
}
