#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int y=t;
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int b[101],ar[101],k=-1;
		printf("Case #%d:",y-t);
		while(n>0)
		{
			long long int a=n%10;
			if(a==4)
			{
			ar[++k]=a-1;
			b[k]=1;
			
	}
			else
			{
			ar[++k]=a;
			b[k]=0;
		}
			n=n/10;
		}
		for(long long int i=k;i>=0;i--)
		printf("%lld",ar[i]);
		printf(" ");
		int c=0;
		for(long long int i=0;i<=k;i++)
		{
			if(b[i]==1)
			c=1;
			if(c==1)
			printf("%lld",b[i]);
		}
		if(c==0)
		printf("0");
		printf("\n");
	}
}