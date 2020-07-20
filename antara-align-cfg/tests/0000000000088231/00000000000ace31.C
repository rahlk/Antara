#include<stdio.h>

void  main()
{
	int t=0;
	scanf("%d",&t);
	int p=t;
	while(t--)
	{
		long long int a=0,b=0;
		long long int n;
		int ar[100];
		int ar2[100];
		int i=0;
		scanf("%lld",&n);

		long long int c=n;
		while(c!=0)
		{
			int d=c%10;
			ar[i]=d;
			c/=10;
			i++;
		}

		i--;

		for(int j=i;j>=0;j--)
		{
			if(ar[j] == 4)
			{
				ar[j] =3;
				ar2[j] =1;
			}
			else
			{
				ar2[j]=0;
			}
		}

		for(;i>=0;i--)
		{
			a = a*10 + ar[i];
			b = b*10 + ar2[i];
		}





		printf("Case #%d: %lld %lld\n",p-t,a,b);
	}
}