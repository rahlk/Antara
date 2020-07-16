#include<stdio.h>
int main()
{
int n,max;
scanf("%d%d",&n,&max);
int a[100],b[100];
int i,j;
for(i=1;i<=max;i++)
{
for(j=1;j<=max;j++)
{
    if(a[i]+b[j]==n)
    {
    printf("%d%d",a[i],b[j]);
}
}
}
return 0;
}