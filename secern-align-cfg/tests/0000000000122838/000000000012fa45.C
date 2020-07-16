#include<stdio.h>
#include<stdlib.h>
int maxt(int a[],int lower,int upper)
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
int t;
scanf("%d",&t);
int n,k;
int c[1000];
int d[1000];
for(int i=0;i<t;++i)
{
int count=0;
scanf("%d%d",&n,&k);
for(int j=0;j<n;++j) scanf("%d",&c[j]);
for(int j=0;j<n;++j) scanf("%d",&d[j]);
for(int a=0;a<n;++a)
{
for(int b=a;b<n;++b)
{
int z=abs(maxt(c,a,b)-maxt(d,a,b));
if(z<=k)
{
++count;
}
}
}
printf("Case #%d: %d\n",(i+1),count);
}
return 0;
}

