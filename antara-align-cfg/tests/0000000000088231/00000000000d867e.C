#include<stdio.h>

int check(int);

void main()
{
	int a,temp2,temp,c;
	a=0;
	temp2=0;
	
	scanf("%d",&a);	

	temp = a;	

	while(1)
	{
		c = check(temp);
	
		if(c!=0)
		{
			temp2=temp2 + c;
			temp = temp - c;
		}

		else 
		{
			break;
		}
	}
	if(temp2==0)
	{
		printf("%d",temp);
	}
	else
	{
		printf("%d %d",temp,temp2);

	}
}

int check(int temp3)
{
	int x =1,s;
	while(temp3>0)
	{
		s = temp3%10;
		temp3 = temp3/10;
		if(s==4)
		{
			return x;
		}
		x=x*10;
	}	

	return 0;
}