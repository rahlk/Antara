#include<stdio.h>

int check(int n)
{
	while(n>0)
	{
		if(n%10==4)
		{
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main()
{
	int t,n,i,a,b;
	scanf("%d",&t);
	a=t;
	while(t>0)
	{
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			if(check(i))
			{
				printf("Case #%d: %d %d\n",a-t+1,i,n-i);
				break;
			}
		}
		t--;
	}
}