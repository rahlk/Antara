#include<stdio.h>
#include<stdlib.h>
int MAXIMUM(int a[],int lower,int upper)
{
int max=-1;
for(int i=lower;i<=upper;++i)
{
if(a[i]>max) max=a[i];
}
return max;
}
int main()
{
int testCases;
scanf("%d",&testCases);
int n,k;
int c[1000];
int d[1000];
for(int y=0;y<testCases;++y)
{
int count=0;
scanf("%d%d",&n,&k);
for(int j=0;j<n;++j) scanf("%d",&c[j]);
for(int j=0;j<n;++j) scanf("%d",&d[j]);
for(int a=0;a<n;++a)
{
for(int b=a;b<n;++b)
{
int z=abs(MAXIMUM(c,a,b)-MAXIMUM(d,a,b));
if(z<=k)
{
++count;
}
}
}
printf("Case #%d: %d\n",(y+1),count);
}
return 0;
}
