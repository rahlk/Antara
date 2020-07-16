#include<stdio.h>
main()
{
int t,x;
scanf("%d",&t);
x=0;
while(x<t)
{
    int m,n,o,a,b,digit1,digit2;
    scanf("%d",&n);
 	a=n/2;
	b=n/2;
	if(a+b!=n)
	{
		a=(n/2)+1;
	}
	m=a;    
	while(1)
	{
		digit1=m%10;
		m=m/10;
		if(digit1==4)
		{
			a=a-1;
			b=b+1;
			o=b;
			while(1)
			{
			digit2=o%10;
			o=o/10;
			if(digit2==4)
			{
				a=a-1;
				b=b+1;
			}
				
			}
		}
		if(a+b==n)
		{
			break;
		}
	}
printf("Case #%d: %d %d\n",x+1,a,b);	
    x++;
    
}
}