#include<stdio.h>

int main()
{
    int long t,n;
    scanf("%ld",&t);
    for(int i = 1;i<=t;i++)
    {
        scanf("%ld",&n);
        int long d = n/4;
        printf("Case #%d: %ld %ld\n",i,d,n-d);
    }
}
