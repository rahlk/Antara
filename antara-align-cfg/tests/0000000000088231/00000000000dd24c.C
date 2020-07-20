#include<stdio.h>
#include<conio.h>
void jam(long int,long int);
void main()
{ int i,t,r;
long int n,q,b,a;
clrscr();
printf("enter test condition");
scanf("%d",&t);
for(i=1;i!=t;i++)
{printf("enter");
 scanf("%d",&n);
 q=n;
 while(n>0)
 { r=n%10;
 if(r==4)
 break;
 n=n/10;
 }
 if(n==0)
 {
 printf("invoild input");
 continue;
 }
 a=1;
 b=q-1;
 jam(a,b);
 }
 getch();
 void jam(long int a,long int b)
 { long int c,d;
 int r,t;
 c=a;
 d=b;
 while(b>0)
 { r=b%10;
 if(r==4)
 break;
 b=b/10;
 }
 while(a>0)
 { t=a%10;
 if(t==4)
 break;
 a=a/10;
 }
 if(b==0&&a==0
 {
 printf("%ld\n",c);
 printf("%ld",d);
 }
 else
 jam(c=c+2,d=d-2);
 }