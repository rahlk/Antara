#include<stdio.h>
#include<stdbool.h>
int four(int i)
{	
	int rem;
	while(i!=0)
	{	
		rem=i%10;
		if(rem==4)
			return false;
		i=i/10;
	}
	return true;
}
int notfour(int i)
{	
	int rem;
	while(i!=0)
	{	
		rem=i%10;
		if(rem==4)
			return true;
		i=i/10;
	}
	return false;
}
int main()
{
	int t,t1,t2,i,a,b,c,j,x;
	scanf("%d",&x);
	i=0;
	j=1;
	while(j<=x)
	{
		do
		{	
			i++;
			t=four(i);
		}while(t);
		a=i/2;
		b=i-a;
		do
		{	t1=notfour(a);
			t2=notfour(b);
			if(t1==true)
			{	c=a/2;
				a=a-c;
				b=i-a;
			}
			else if(t2==true)
			{	c=a/2;
				a=a+c;
				b=i-a;
			}
		}while(t1||t2);
		printf("\n%d	Case #%d: %d %d",i,j,a,b);
		j++;	
	}
}
