#include <stdio.h>
void main()
{
    int n,x,y;
scanf("%d",&n);
int a[n-1];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
x=a[i]/4;
y=a[i]-x;
printf("Case #%d: %d %d\n",i+1,x,y);
}
}

