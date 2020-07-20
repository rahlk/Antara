#include<stdio.h>
int main()
{
	int t,i=0,flag,r,count=0;
	long long int n,num1,num2,num11,num22;
	scanf("%d",&t);
	i=0;
	while(i<t)
	{
		scanf("%lli",&n);
		num1=n-1;
		num2=1;
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
		printf("Case #%d: %lli %lli\n",i+1,num1+1,num2-1);
		i++;
	}
	return 0;
	}