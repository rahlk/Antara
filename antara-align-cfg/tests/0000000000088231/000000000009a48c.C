#include <stdio.h>
#include <stdlib.h>

int main()
{
         int A=1,B,N,T,c,i,n,t1=0;
     printf("Enter number of test cases:\n");
     scanf("%d",&T);

     for(c=1;c<=T;c++)
     {
         printf("Enter a number:\n");
         scanf("%d",&N);
         n=N;
             while(n!=0)
                   {
                     n=n%10;
                     t1++;
                      if (n!=4){ A=10*t1;}
                      else break;

                   }
         B=N-A;
         printf("Case #%d: %d %d \n",T,A,B);
     }
    return 0;
}
