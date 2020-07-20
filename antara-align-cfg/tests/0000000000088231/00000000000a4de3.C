#include<stdio.h>
int main()
{
    long long int T,i;
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        long long int N,A=1,B,po=1,num,n=1;
        scanf("%lld",&N);
        B=N-A;
        num=B;
        while(num>0)
        {
            n=num%10;
            num=num/10;
            if(n==4)
            {
                B=B-(1*po); 
            }
            po*=10;
        }
        A=N-B;
        printf("Case #%lld: %lld %lld ",i,A,B);
    }
}