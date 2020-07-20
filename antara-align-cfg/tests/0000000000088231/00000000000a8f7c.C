#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int num[n],a[n],b[n],outa[n],outb[n];
int i=0;
while(i<n)
{
scanf("%d",&num[i]);
a[i]=num[i]-1;
b[i]=1;
++i;
}
i=0;
int y,x,j,l,z,t,m,nod;
while(i<n)
{
j=i;
x=a[j];
y=b[j];
while(x>0)
{
m=x;
z=0;
while(m>0)
{
t=m%10;
m/=10;
if(t==4)
{
z=1;
--x;
++y;
break;
}
}
l=y;
while(z==0&&l>0)
{
t=l%10;
l/=10;
if(t==4)
{
--x;
++y;
z=1;
break;
}
}
if(z==0)
{
outa[i]=x;
outb[i]=y;
break;
}
}
++i;
}
i=0;
while(i<n)
{
printf("%d   %d\n",outa[i],outb[i]);
++i;
}
return 0;
}