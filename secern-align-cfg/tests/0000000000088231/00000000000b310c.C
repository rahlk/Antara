#include<stdio.h>
int main()
{
    long long int TC,i;
    scanf("%lld",&TC);
    for(i=1;i<=TC;i++)
    {
        long long int N,A=0,B,P=2,num,n=1;
        scanf("%lld",&N);
        B=N-A;
        num=B;
        while(num>0)
        {
            n=num%10;
            num=num/10;
            if(n==4)
            {
                B=B-(1*P); 
            }
            P*=10;
        }
        A=N-B;
        printf("Case #%lld: %lld %lld \n",i,A,B);
    }
}