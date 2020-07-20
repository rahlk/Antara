#include<stdio.h>
int main()
{
int a,b,n,t,i,l,f;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d",&n);
l=n;
while(l!=0)
{
if(l%10==4)
f=1;
else
l=l/10;
}
if(f==1)
{
    a=n/4;
    b=n-a;
printf("case #%d: %d %d",i,a,b);
}
}
return 0;
}