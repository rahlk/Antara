#include<stdio.h>
#include <stdlib.h>
int main()
{
    int c,N,A,B,i,ifok;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
       printf("\n");
       scanf("%d",&N);
       do
       {
             ifok=0;
             if(dgtfr(N)==1)
             {
                A=rand()%N;
                if(dgtfr(A)==0)
                {
                   B=N-A;
                   if(dgtfr(B)==1)
                   {
                        continue;
                   }
                   ifok=1;
                   printf("Case #%d: %d  %d",i,A,B);
                }
             }
       }while(ifok!=1);
    }
}
int dgtfr(int n)
{
    int r;
    while(n>3)
    {
        r=n%10;
        if(r==4)
        {
            return 1;
        }
        n=n/10;
    }
    return 0;
}
