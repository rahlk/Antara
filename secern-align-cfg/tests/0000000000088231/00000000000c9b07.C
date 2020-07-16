#include<stdio.h>
#include <math.h>
#include<stdlib.h>

int main()
{
int i,j,k,no;
int t,n,a,b,rem,val,preva,placea;
scanf("%d",&t);
for(i=0;i<t;i++)
{
 scanf("%d",&n);
 placea=0;
 a=round(n/2);
 preva=a;
 b=n-a;
 while(a>0)
 { 
   rem=a%10;
   if(rem==4)
   {  val=2*pow(10,placea);
      preva=preva-val;
      b=b+val;
   }
   placea++;
   a=a/10;
 }
 
printf("Case #%d: %d %d\n",i+1,preva,b);
}
exit(0);
}
