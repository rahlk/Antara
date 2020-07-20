#include<stdio.h>
int main()
{
int tc;
scanf("%d",&tc);
long long int X[tc],y,n,p,z,nod,e,d,s,x[100];
for(y=0;y<tc;++y) scanf("%lld",&X[y]);
for(y=0;y<tc;++y)
{
n=p=X[y];
nod=1;
while(p>9)
{
p=p/10;
nod++;
}
p=n;
e=0;
while(e<nod)
{
d=p%10;
if(d==4)
{
x[e]=3;
p=p/10;
}
else
{
if(d==5)
{
x[e]=3;
}
else
{
x[e]=d;
}
p=p/10;
}
e++;
}
s=0;
nod--;
for(z=0;z<=nod;nod--)
{
d=x[nod];
s=(s*10)+d;
}
printf("Case #%lld: %lld %lld\n",y+1,s,n-s);
}
return 0;
}