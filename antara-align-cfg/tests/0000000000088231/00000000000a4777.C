#include<stdio.h>
int main()
{
   int a,b,c,d,i,t;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%d",&a);
       b=(3*a)/4;
       c=floor(b);
       d=a-c;
       printf("Case #%d: %d %d\n",i,c,d);
   }

}
