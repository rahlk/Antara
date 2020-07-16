#include<stdio.h>
int main()
{
     long long  int i,j,k,l,t,b,a;
    scanf("%lld",&t);
    int n=0;
    while(t--)
    {n++;
        scanf("%lld",&k);
        a=(k/2)+(k/2)/2;
        b=k-a;
        printf("Case #%d: %lld %lld",n,a,b);
    }
    
}