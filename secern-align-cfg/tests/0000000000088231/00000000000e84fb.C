#include<stdio.h>
int main()
{
	int n,m,a,b,c,x;
	c=0;
	scanf("%d",&n);
	x=n;
while (n!=0)
{
	n=n/10;
	++c;
}

if(c==3)
{
    m=111;

a=x-m;
b=x-a;
if(a+b==x)
printf("%d %d",a,b);	
}
else if (c==4)
{
     m=1111;

a=x-m;
b=x-a;
if(a+b==x)
printf("%d %d",a,b);	
}
else if(c==1&&x==4)
{
    m=x/2;
    a=m;
    b=m;
    if(a+b==x)
    printf("%d %d",a,b);	
}
			
}