#include <stdio.h>
#include <stdlib.h>
int fun(int N1);
int main()
{
    int T,d=0;
    long long int N,A,B;
    scanf("%d",&T);
    while(T>0)
    {
       d++;
       scanf("%lld",&N);

       long long int i;
       for(i=1;i<=N;i++)
       {
           A=N-i;
           B=i;
           if(fun(A)==1&&fun(B)==1)
           {
               printf("Case #%d: %lld %lld\n",d,A,B);
               break;
           }
       }
       T--;
    }
    return 0;
}

int fun(int N1)
{
    int c;
    while(N1>0)
    {
        if(N1%10!=4)
        {
            N1=N1/10;
            c=1;
        }
        else
            return 0;
    }
    if(c==1)
        return 1;
}

