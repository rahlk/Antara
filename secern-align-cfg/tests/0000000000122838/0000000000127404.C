#include<stdio.h>
#include<stdlib.h>
int main()
{
int c[1000],d[1000];
int t,absDiff,cMax,dMax,n;
int x,i,j,pair;
scanf("%d",&t);
for(x=1;x<=t;++x)
{
scanf("%d",&n);
scanf("%d",&absDiff);
for(i=0;i<n;i++) scanf("%d",&c[i]);
for(i=0;i<n;i++) scanf("%d",&d[i]);
pair=0;
for(i=0;i<n;i++)
{
cMax=-1;
dMax=-1;
for(j=i;j<n;j++)
{
if(c[j]>cMax) cMax=c[j];
if(d[j]>dMax) dMax=d[j];
if(abs(cMax-dMax)<=absDiff)
{
++pair;
}
}
}
printf("Case #%d: %d\n",x,pair);
}
return 0;
}