#include<stdio.h>
main()
{
int t,x;
scanf("%d",&t);
x=0;
while(x<t)
{
    int m,n,o,a,b,digit1,digit2,count=0;
    scanf("%d",&n);
 	a=n/2;
	b=n/2;
	if(a+b!=n)
	{
		a=(n/2)+1;
	}
	m=a;
	o=b;
	while(1)
	{
		digit1=m%10;
		if(digit1==4)
		{	
			count++;
			if(count==1)
			{
			a=a+1;
			b=b-1;
			}
			else if(count==2)
			{
				a=a+10;
				b=b-10;
			}
			else if(count==3)
			{
				a=a+100;
				b=b-100;
			}
			else if(count==4)
			{
				a=a+1000;
				b=b-1000;
			}
			
		}
		while(1)
	{
		digit2=o%10;
		
		if(digit2==4)
		{	
			count++;
			if(count==1)
			{
			b=b+1;
			a=a-1;
			}
			else if(count==2)
			{
				b=b+10;
				a=a-10;
			}
			else if(count==3)
			{
				b=b+100;
				a=a-100;
			}
			else if(count==4)
			{
				b=b+1000;
				a=a-1000;
			}
		}
		o=o/10;
		if(o==0)
			break;
		}
		m=m/10;
		if(m==0)
			break;	
	}
printf("Case #%d: %d %d\n",x+1,a,b);	
    x++;
    
}
}