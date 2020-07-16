#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
for(int m=0;m<t;m++)
{
int n;
int k,found=0;
scanf("%d",&n);
scanf("%d",&k);
int c[n],d[n],count=0,diff,maxc,maxd;
for(int j=0;j<n;j++) scanf("%d",&c[j]);
for(int j=0;j<n;j++) scanf("%d",&d[j]);
for(int i=0;i<n;i++)
{
maxc=c[0];
maxd=d[0];
for(int j=i+1;j<n;j++)
{
found=1;
maxc=c[0];
maxd=d[0];
for(int f=0;f<=j;f++)
{
if(maxc<c[f]) maxc=c[f];
if(maxd<d[f]) maxd=d[f];
}
for(int l=i+1;l<=j;l++)
{
diff=maxc-maxd;
if(diff<0) diff=maxd-maxc;
if(diff<=k) count++;
}
}
if(found==0)
{
diff=maxc-maxd;
if(diff<0) diff=maxd-maxc;
if(diff<=k) count++;
}
}
printf("Case #%d: %d\n",m+1,count);
}
}