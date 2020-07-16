#include<stdio.h>
#include<stdbool.h>
#include<math.h>
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
	int t,t1,i,t2,a,b,c,j,x,p[20],q[10];
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{	scanf("%d",&p[i]);
	}
	j=1;
	for(i=0;i<x;i++)
	{
		do
		{
			t=four(p[i]);
			if(t==false)
			q[i]=p[i];	
		}while(t);
		a=q[i]/2;
		b=q[i]-a;
		do
		{	t1=notfour(a);
			t2=notfour(b);
			if(t1==true)
			{	c=a/2;
				a=a-c;
				b=q[i]-a;
			}
			else if(t2==true)
			{	c=a/2;
				a=a+c;
				b=q[i]-a;
			}
		}while(t1||t2);
		printf("Case #%d: %d %d\n",i+1,a,b);
	}
}
