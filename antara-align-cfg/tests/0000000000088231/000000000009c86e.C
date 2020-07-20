#include<stdio.h>
#include<stdlib.h>
int main()
{

	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		long long int n;
		scanf("%lld",&n);
		long long int temp=n;
		long long int a=n;
		long long int m=1;
		while(temp!=0)
		{
			long long int check=temp%10;
			if(check==4)
				{
					a=a-m;
				}
			temp=temp/10;
			m=m*10;
		}
		printf("Case #%d: %lld %lld\n",i+1,a,(n-a));
	}
}