#include<stdio.h>

int main()
{
   int N,n,a,b,p=0;
   printf("enter n inputs");
   for(int i=1;i<=n;i++)
   { 
       scanf("%d",&n);
       
   printf("enter value of N");
   scanf("%d",&N);
   for(int j=1;j<=10^100;j++)
   {
       p=N%10;
       if(p=4)
       break;
       N=N/10;
   }
   if(N>=4)
   {
   a=N/4;
   b=N-a;
   if(N=a+b)
   printf("value of %d",a);
   printf("value of %d",b);
   }
   
   }
}