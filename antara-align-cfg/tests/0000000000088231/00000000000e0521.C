#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        long long int N,A=0,B,temp,digit,p=1;
        scanf("%lld",&N);

        temp=N;
        while(temp!=0)
        {
            digit=temp%10;
            if(digit==4) digit=2;
            A+=digit*p;

            p=p*10;
            temp=temp/10;
        }

        B=N-A;
        printf("Case #%d: %lld %lld\n",i,A,B);
        


    }
   return 0; 
}