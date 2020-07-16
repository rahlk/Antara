#include<stdio.h>
 void main()
 {
 int t,a=0,b=0,i,r;
 scanf("%d",&t);
 int n[t];
 for(i=0;i<t;i++)
 {
 scanf("%d",&n[i]);
 }
 for(i=0;i<t;i++)
 {
 int x=1;
 while(n[i]>0)
 {
 r=n[i]%10;
 n[i]=n[i]/10;
 if(r==4)
 {
 a=(a+(2*x));
 b=(b+(2*x));
 }
 else
 {
 b=(b+(r*x));
 }
 x=x*10;
 }
 printf("%d %d",a,b);
 }
 }
