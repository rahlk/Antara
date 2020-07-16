#include<stdio.h>
#include<math.h>
int main()
{
   int N,A,B,T;
   printf("The Number of test cases:\n");
   scanf("%d",&T);
   
   for(1<=T;T<=100;T++)
   {
       if(N==4)
       N=A+B;
       else
       {
        N=A++;   
       }
   }
   for(1<N;N<10^5;N++)
   N=B-A;
   printf("The case One is\n",&N,&A,&B);
   
   for(1<N;N<10^9;N++)
       {
           if(N>10^9)
           N=A-B;
           else
           {
               N=B/A;
               
           }
       }
       return 0;
}