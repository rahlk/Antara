#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, t;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		long long int j, n, a=0, b=0;
		scanf("%lld", &n);
		int str[101];
		int c=0;
		while(n!=0)
		{
			j=n%10;
			n=n/10;
			str[c++]=j;
		}
		for(j=c-1;j>=0;j--)
		{
			if(str[j]==4)
			{
				a = a*10 + 3;
				b = b*10 + 1;
			}
			else
			{
				a = a*10 + str[j];
				b = b*10;
			}
		}
		printf("Case #%d: %lld %lld\n", i+1, a, b);
	}
	return 0;
}