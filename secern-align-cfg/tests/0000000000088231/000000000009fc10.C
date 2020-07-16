#include<stdio.h>
int main() 
{
    int T,i;
    long long int N,a,b,c=1,d=0,M;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld",&N);
        M=N;
        while(N>0)
        {
            a=N%10;
            N=N/10;
            if(a==4)
                b=1;
            else 
                b=0;
            d=b*c+d;
            c=c*10;
        }
        printf("Case #%d: %lld %lld\n",i,d,M-d);
        d=0;
        c=1;
    }
    return 0;
}
