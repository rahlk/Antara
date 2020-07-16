#include<stdio.h>
int main()
{
long long int x,e,m,n,t=0;
scanf("%lld",&x);
long long int y[x],z[x],f[x];
for(e=0;e<x;e++)
{
scanf("%lld",&f[e]);
}
for(e=0;e<x;e++)
{
for(m=2;m<f[e];m++)
{
t=0;
y[e]=f[e]/m;
z[e]=f[e]-y[e];

for(n=y[e];n>1;n=n/10)
{
if((n%10)==4)
{
t=1;
break;
}
}

for(n=z[e];n>1;n=n/10)
{
if((n%10)==4)
{
t=1;
break;
}
}

if(t==0)
{
break;
}

}
}
for(e=0;e<	x;e++)
{
printf("Case #%lld: %lld %lld\n",e+1,y[e],z[e]);
}
return 0;
}