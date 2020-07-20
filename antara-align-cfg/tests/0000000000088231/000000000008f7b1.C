#include<stdio.h>
int f(unsigned long long n)
{
    while(n>0)
    {
        if(n%10 == 4)
            return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    int t,k=1;
    unsigned long long n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        i=n/2;
        while(1)
        {
            if((i!=n-i) && f(i)==1 && f(n-i)==1)
            {
                printf("Case #%d: %llu %llu\n",k,i,n-i);
                break;
            }
            i/=2;
        }
        k+=1;
    }
    return 0;
}