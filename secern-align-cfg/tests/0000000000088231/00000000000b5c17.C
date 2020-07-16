#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n,a=0,b=0,c=0,d,l,m,sum=0;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld",&d);
	for(a=1;a<=d;a++)
	{
		for(b=1;b<=a;b++)
		{
			if(a+b==d)
			{
				sum=a+b;
				l=a;
				m=b;
			}
		}
		if(sum==d)
		break;
	}
		c++;
		printf("Case #%lld : %lld %lld\n",c,l,m);
	}
}