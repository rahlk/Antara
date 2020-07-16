#include<stdio.h>
int main()
{
long long int x,e,m,n,t=0,num,b=0;
scanf("%lld",&x);
long long int y[x],z[x],f[x];
for(e=0;e<x;e++)
{
scanf("%lld",&f[e]);
y[e]=0;
z[e]=0;
}
for(n=0;n<x;n++)
{
for(num=f[n],t=1;num>0;num=num/10)
{
b=num%10;
if(b==4)
{
z[n]=t+z[n];
}
t=t*10;
}
y[n]=f[n]-z[n];
}
for(e=0;e<x;e++)
{
printf("Case #%lld: %lld %lld\n",e+1,y[e],z[e]);
}


return 0;
}