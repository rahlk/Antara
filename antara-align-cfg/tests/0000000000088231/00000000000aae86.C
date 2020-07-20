#include<stdio.h>
int main()
{
    int t;
    long long int n,m,s=0,r,p=1,A,B;
    scanf("%d",&t);
    for(int q=1;q<=t;q++)
    {
        s=0;p=1;
        scanf("%lld",&n);
        m=n;
        while(m!=0)
        {
            r=m%10;
            if(r == 4)
                r=3;
            s += r*p;
            p *= 10;
            m=m/10;
        }
        A=s;
        B=(n-s);
        printf("Case #%d: %lld %lld\n",q,A,B);
    }
}