#include<stdio.h>
int check(int a,int b)
{
	int remainder1,remainder2,temp1=a,temp2=b;
	while(temp1>0 || temp2>0)
	{
		remainder1=temp1%10;
		if (remainder1==4)
		{
			return 1;
		}
		remainder2=temp2%10;
		if (remainder2==4)
		{
			return 1;
		}
		temp1=temp1/10;
		temp2=temp2/10;
	}
	return 0;
}
int main()
{
	long long int j,i,num,num1,num2,test;
	scanf("%lld",&test);
	int flag;
	for(i;i<test;++i)
	{
		scanf("%lld",&num);
		for(j=1;j<(num/2)+1;++j)
		{
			num1=j;
			num2=num-j;
			if(num1+num2==num)
			{
				flag=check(num1,num2);
				if(flag==1)
				{
					continue;
				}
				if(flag==0)
				{
					break;
				}
			}
		}
		printf("Case #%lld: %lld  %lld",i+1,num1,num2);
	}
}