#include <stdlib.h>
#include<stdio.h>
int calpower(int a)
{
    int base=10, exponent;
    int power = 1;
    int i;
    
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }
    return power;
}
int main()
{
    int A,B=0,T,N,C,D,count,n;
    printf("Enter test case number : \n");
    scanf("%d",&T);
    for(C=1;C<=T;C++)
    {
        printf("Enter Number ");
        scanf("%d",&N);
        while(N!= 0)
       {
           N /= 10;
           ++count;
       }
       A=N;
       
       for(D=0;D<count;D++)
       {
               n=N%10;
               if(n=4)
               {
                  A=A-calpower(D);
                  B=B+calpower(D);
                  N=N/10;
               }
               else if(n=0)
               {
                   break;
               }
           
       }printf("Case #%d %d  %d",C,A,B);

    }
}