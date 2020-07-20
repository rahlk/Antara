#include <stdio.h>
void main()
{
int n,i,x,y;
scanf("%d",&n);
int a[n-1];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
x=a[i]/4;
y=a[i]-x;
printf("Case #%d: %d %d\n",i+1,x,y);
}
}

