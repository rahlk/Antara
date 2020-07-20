#include<stdio.h>
 void main()
 {
     int t,i;
 long long int a=0,b=0,r;
 scanf("%d",&t);
 long long int n[t];
 for(i=0;i<t;i++)
 {
 scanf("%lld",&n[i]);
 }
 for(i=0;i<t;i++)
 {
 long long int x=1;
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
 printf("%lld %lld",a,b);
 }
 }
