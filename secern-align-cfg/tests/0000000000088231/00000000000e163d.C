#include<stdio.h>
int calculate(int x,int y,int z)
{
	int num,c1,temp,r;
	c1=y;
	num=x;
	num=num/2;
	temp=num;
	while(num>0)
		{
			r=num%10;
			num=num/10;
			
		}
		if(r==4)
			{
				temp=temp/10;
				temp=temp-c1;
				temp=temp*2;
				printf("case #%d: %d\t\t%d\n",z,x-temp,temp);
			}
			else
				printf("case #%d: %d\t\t%d\n",z,temp,temp);
}

int main()
{
	int n,c,z,i;
	//printf("Enter number of test cases : ");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		//printf("Enter the first number for case #%d : ",i);
		scanf("%d",&n);
		z=n;
		calculate(z,c,i);
	}
	
}