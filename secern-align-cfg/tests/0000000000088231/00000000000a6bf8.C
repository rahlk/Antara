#include<stdio.h>
int main()
{
    long long int T,i;
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        long long int N,a,b,po1=1,po2=1,num1,num2,n1=1,n2=1;
        scanf("%lld",&N);
        a=N/2;
        b=N-a;
        num1=a;
        num2=b;
        while(num1>0 && num2>0)
        {
            n1=num1%10;
            n2=num2%10;
            num1=num1/10;
            num2=num2/10;
            if(n1==4)
            {
                a=a-(1*po1); 
                b=b+(1*po2);
            }
            if(n2==4)
            {
                b=b-(1*po2); 
                a=a+(1*po1); 

            }
            po1*=10;
            po2*=10;
        }
        
        printf("Case #%lld: %lld %lld ",i,a,b);
    }
}