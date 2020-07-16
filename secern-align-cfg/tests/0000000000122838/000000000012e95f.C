#include<stdio.h>
int main()
{
int t,n,k,maxC,maxD;
scanf("%d",&t);
for(int m=1;m<=t;m++)
{
scanf("%d",&n);
scanf("%d",&k);
int c[n],d[n],diff,count=0;
for(int j=0;j<n;j++)
{
scanf("%d",&c[j]);
}
for(int j=0;j<n;j++)
{
scanf("%d",&d[j]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
maxC=c[0];
maxD=d[0];
for(int x=0;x<=j;x++)
{
if(c[x]>maxC) maxC=c[x];
if(d[x]>maxD) maxD=d[x];
}
for(int l=i+1;l<=j;l++)
{
diff=maxC-maxD;
if(diff<0) diff=maxD-maxC;
if(diff<=k) count++;
}
}
}
printf("Case #%d: %d\n",m,count);
}
return 0;
}