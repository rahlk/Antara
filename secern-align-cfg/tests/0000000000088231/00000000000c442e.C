#include<stdio.h>
int main()
{
int t,n;
scanf("%d",&t);
for(int i=0;i<=t;i++)
{
scanf("%d",&n);
for(int j=0;j<=n;j++)
for(int k=0;k<=n;k++)
{
if(j==4)
{
j++;
}
if(k==4)
{
k++;
}
if(j+k==n&&j!=4&&k!=4)
{
printf("%d %d\n",j,k);
break;
}
}
}
}
