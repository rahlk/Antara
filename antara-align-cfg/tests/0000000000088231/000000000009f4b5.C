#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long int n,m;
        scanf("%lld",&n);
        m=n;
        long long int a,b;
        for(int j=0;m!=0;j++)
        {
            if(m%10==4)
            {
                a=a+pow(10,j);
            }
            m=m/10;
        }
        b=n-a;
        printf("Case #%d: %lld %lld\n",i,a,b);
    }
}