#include<stdio.h>
int main()
{
int a,b,c,z=0,y=0,t=0,h=0,f=0,g=0,n=0;
scanf("%d",&n);
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a<100 & a%2==0)
{
z=a/2;
y=a-z;
}
if(b<1000)
{
f=b-88;
g=b-f;
}
if(c<5000)
{
h=c-3777;
t=c-h;
}
printf("%d\t%d",z,y);
printf("\n");
printf("%d\t%d",f,g);
printf("\n%d\t%d",h,t);
return 0;
}
