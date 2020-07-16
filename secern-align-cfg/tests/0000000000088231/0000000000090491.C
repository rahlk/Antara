#include <stdlib.h>
#include <stdio.h>
int main()
{
    long long t,T,N,A,B,i;
    int j=1;
    scanf("%lld",&T);
    t=T;
    while(t>0)
    {
        scanf("%lld",&N);
        A=B=i=0;
        while(N!=0)
        {
            if(N%10==4)
                {
                   A+=2*pow(10,i);
                   B+=2*pow(10,i);
                }
            else
                A+=(N%10)*pow(10,i);
            N/=10;
            i++;
        }
        printf("Case #%d: %lld %lld",j,A,B);
        if(j!=T)
            printf("\n");
        j++;
        t--;
    }
}