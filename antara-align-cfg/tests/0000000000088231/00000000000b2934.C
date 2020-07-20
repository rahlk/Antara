#include<stdio.h>
int main()
{
   int n,k,b,a,c,t,l;
   for(int i=1;i<=t;i++)
   {
   scanf("%d",&n);
   b=n,c=0,l=0;
   while(n>0)
   {
     a=n%10;
     if(a==4)
     {
       a=a-1;
       c=c*10+a;
     }
     else
     {
       c=c*10+a;
     }
     n=n/10;
   }
   while(c>0)
   {
       k=c%10;
       l=l*10+k;
       c=c/10;
   }
   printf("Case #%d:%d%d",i,l,b-l);
   
   }
   return 0;
}