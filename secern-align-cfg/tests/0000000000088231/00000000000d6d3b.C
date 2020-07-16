#include<stdio.h>
{
int n,max;
scanf("%d",&n);
int a,b;
int i,j;
for(i=1;i<=max;i++)
for(j=1;j<=max;j++)
{
    if(a[i]+b[j]==n)
    {
    scanf("%d",&a[i],&b[j]);
}
}
return 0;