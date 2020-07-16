#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int check(int *m,int *n);
int main()
{int t,a,b;
long long unsigned int n;
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
printf("Case #%d: %d %d\n",i+1,a,b);
}
return 0;
}
int check(int *m,int *n)
{int c=*m;
int d=*n;
int c1=0;
int c2=0;
while(c && d)
{if(c%2==d%2)
{
{if(((c%10)==4) || ((d%10)==4))
{*m=*m+*n/2;
*n=*n-*n/2;
break;}
}}
else
{if((c%10)==4)
{*m=*m-(c*pow(10,c1));
*n=*n+(c*pow(10,c1));
}
if((d%10)==4)
{*m=*m+(d*pow(10,c2));
*n=*n-(d*pow(10,c2));
}
}
c1++;
c2++;
c=c/10;
d=d/10;
}}