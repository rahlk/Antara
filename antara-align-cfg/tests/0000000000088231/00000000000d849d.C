#include<stdio.h>
int main()
{
long long int n,max;
scanf("%lld%lld",&n,&max);
long long int a[100],b[100];
long long int i,j;
for(i=1;i<=max;i++)
{
for(j=1;j<=max;j++)
{
    if(a[i]+b[j]==n)
    {
    printf("%lld%lld",a[i],b[j]);
}
}
}
return 0;
}