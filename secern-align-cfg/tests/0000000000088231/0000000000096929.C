#include<stdio.h>
int main()
{
int t,n,x,res,j,i,k,y,count,a,b;
scanf("%d",&t);
for(k=1;k<=t;++k)
{
scanf("%d",&n);
x=n;
count=0;
a=0,b=0;
while(x>0)
{
b=a;
a=x;
x=x/10;
++count;
}
b=b%10;
if(count==8 && a==4 ) i=10000000;
else
{
if(count==9 && a==4 && b==4)
{
i=110000000;
}
else
{
if(count==9 && b==4)
{
i=10000000;
}
else i=1;
}
}
//printf("i:%d,count:%d,a:%d,b:%d\n",i,count,a,b);
for(;i<n;++i)
{
res=0;
x=i;
while(x>0)
{
if(x%10==4) break;
x=x/10;
}
if(x<=0)
{
j=n-i;
//printf("%d %d\n",i,j);
y=j;
while(y>0)
{
if(y%10==4) break;
y=y/10;
}
if(y<=0)
{
res=1;
printf("Case #%d: %d %d\n",k,i,j);
break;
}
if(res==1) break;
}
}
}
return 0;
}