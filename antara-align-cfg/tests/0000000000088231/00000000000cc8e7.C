#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int check(long long int n)
{
    int count = 0;
    int i;
    long long int m;
    while(n != 0)
    {
        m = n%10;
        if(m == 4)
        {
            count++;
        }
        n = n/10;
    }
    return count;
}

int main()
{
    int t,i,j;
    long long int n,m=1;
    
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld", &n);
        while(check(n-m)||check(m))
        {
            m++;
        }
        printf("Case #%d: %lld %lld\n", i, n-m, m);
    }
}