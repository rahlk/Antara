#include<stdio.h>
int main()
{
int t,i,fact=1,flag;
long long int a,b,n,temp,num;
scanf("%d",&t);
for(i=1;i<=t;++i)
{
scanf("%lld",&n);
a=1;
b=n-1;
temp=b;
num=b;
while(temp)
{
temp=temp/10;
fact=fact*10;
}
while(fact>1)
{
fact=fact/10;
flag=num/fact;
if(flag==4) 
{
b-=fact;
a+=fact;
}
num=num%fact;
}
printf("Case #%d: %lld %lld\n",i,a,b);
}
return 0;
}