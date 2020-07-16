#include<stdio.h>
#include<stdlib.h>
int check(int *m,int *n);
int main()
{int t,n,a,b;
scanf("%d",&t);
for(int i=0;i<t;i++)
{scanf("%llu",&n);
a=n/2;
b=a;
int c=a;
int count=0;
while(c)
{c=c/10;
count++;}
int *m=&a;
int *n=&b;
while(count)
{check(m,n);
count--;
}
printf("%d %d\n",a,b);
}
return 0;
}
int check(int *m,int *n)
{int c=*m;
int d=*n;
while(c && d)
{if(((c%10)==4) || ((d%10)==4))
{*m=*m+*n/2;
*n=*n-*n/2;
break;}
c=c/10;
d=d/10;
}}