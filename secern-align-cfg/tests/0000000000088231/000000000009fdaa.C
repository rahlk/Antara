#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        unsigned long long int n,m;
        scanf("%llu",&n);
        m=n;
        unsigned long long int a=0,b=0;
        for(int j=0;m!=0;j++)
        {
            if(m%10==4)
            {
                a=a+pow(10,j);
            }
            m=m/10;
        }
        b=n-a;
        printf("Case #%d: %llu %llu\n",i,a,b);
    }
}