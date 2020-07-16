#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,c=1;
    long long int n,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2 == 0) 
        {
            a = b = n/2;
        }
        else
        {
            a = (n+1)/2;
            b = n - a;
        }
    printf("Case #%d: %lld %lld\n",c++,a,b);
    }
    return 0;
}