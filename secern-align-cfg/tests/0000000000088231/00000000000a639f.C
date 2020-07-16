#include<stdio.h>
int main()
{
int t,n[100],i,j,a,b,k;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d ",&n[i]);
}
for(i=0;i<t;i++)
{
for(j=1;j<=n[i]/2;j++)
{
for(k=n[i]/2;k>=1;k--)
{
if(j+k==n[i])
{
a=j;
b=k;
}
}
}
printf("%d %d\n",a,b);
}
return 0;
}