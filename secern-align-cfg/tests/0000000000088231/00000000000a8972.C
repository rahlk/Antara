#include<stdio.h>
int main()
{
int a,b,n,t,i;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d",&n);
}
for(i=1;i<=t;i++)
{
while(n!=0)
{
if(n%10!=0)
n=n/10;
else
{
a=n/4;
b=n-a;
}
}
printf("%d%d",a,b);
}
return 0;
}