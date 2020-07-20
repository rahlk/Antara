#include<stdio.h>
#include<stdlib.h>
int main()
{int t,n,a,b;
scanf("%d",&t);
for(int i=0;i<t;i++)
{scanf("%llu",&n);
a=n/2;
b=a;
int c=b;
while(c)
{if((c%10)==4)
{a=a+b/2;
b=b-b/2;
break;}
c=c/10;
}
printf("%d %d\n",a,b);
}
return 0;
}