#include<stdio.h>
#include<math.h>

int main void
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long n,m;
        scanf("%lld",&n);
        m=n;
        int y=0;
        long long z=0;
        while(m!=0)
        {
            if(m%10==4)
            {
                z+=pow(10,y)*2;
                m/=10;
            }
            y++;
        }
        printf("Case #%d: %lld %lld\n",t,(n-z),z);
        
    }
}