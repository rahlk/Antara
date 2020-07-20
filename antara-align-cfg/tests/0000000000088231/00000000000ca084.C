#include<stdio.h>
void main()
{int t,i,j,n;
int x=1;
scanf("%d",&t);
while(t>0)
{
scanf("%d",&n);
for(i=0,j=0;i<n,j<n;i++,j++)
{
if(i%2==0 && j%2==0 && i+j==n)
{
printf(" Case #x: %d %d",i,j);
}
}
t--;
x++;
}
}