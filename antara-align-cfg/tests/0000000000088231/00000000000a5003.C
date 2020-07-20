#include<stdio.h>
int main()
{
int i=0,n;
scanf("%d",&n);
long long int a[n],p[n],r[n],g;
int l=0,c=0;
int count=0,b=10,result=1;
g=0;

while(i<n)
{
scanf("%lld",&a[i]);
p[i]=0;
r[i]=0;
i++;
}

i=0,l=0;
while(i<n)
{
g=a[i];
count=0,result=1;
while(g!=0)
{
l=g%10;
c=count;
if(l==4)
{
p[i]=result+p[i];
}
g /= 10;
++count;
result *=10;
}
r[i]=a[i]-p[i];
i++;
}


i=0;
while(i<n)
{
printf("Case #%d: %lld %lld\n",i+1,p[i],r[i]);
i++;
}
return 0;
}