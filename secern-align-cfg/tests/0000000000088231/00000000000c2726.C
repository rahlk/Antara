#include<stdio.h>
int check2(long long a)
{
    while(a)
    {
        if(a%10==4)
            return 1;
        a/=10;
    }
    return 0;
}
int main()
{
    long long int n,a,b;
    int t,c=1;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        c=1;
        scanf("%lld",&n);
        a=n/2;
        b=n-a;

       // while(c)
        //{
            //c=check2(a);
            while(c)
            {

                c=check2(a);
                c=check2(b);
                 a/=2;
                b=n-a;
            }
            //if(!c)

        printf("Case #%d: %lld %lld\n",i,a,b);
    }
}
