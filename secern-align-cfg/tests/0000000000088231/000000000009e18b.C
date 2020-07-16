#include <stdio.h>
int main()
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
printf("%d %d\n",x,y);
}
return 0;
}

