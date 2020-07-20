#include<stdio.h>
void main()
{
	int n,t,num1,i=1,flag,num2,num11,num22,r,count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		num1=n;
		num2=0;
		flag=1;
		while(flag)
		{
			flag=0;
			num11=num1;
			num22=num2;
			while(num11>0)
			{
				r=num11%10;
				num11/=10;
				if(r==4)
				flag=1;
			}
			
			while(num22>0)
			{
				r=num22%10;
				num22/=10;
				if(r==4)
				flag=1;
			}
			num1--;
			num2++;
		}
		printf("Case #%d: %d %d",i,num1+1,num2-1);
		i++;
	}
}