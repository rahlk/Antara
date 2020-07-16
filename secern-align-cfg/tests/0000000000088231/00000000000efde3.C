#include <stdio.h>
int main()
{
	long long int i,j,k,n,t,x=0,y=1,z=0;
	scanf("%lld",&t);
	long long int a[t];
	for(i=0;i<t;i++)
	scanf("%lld",&a[i]);
	for(i=0;i<t;i++)
	{
		k=0;y=1;z=0;
		n=a[i];
		while(n!=0)
		{
			n=n/10;
			k++;
		}
		n=a[i];
		for(j=0;j<k;j++)
		{
			if(n%10==4)
			y=y*10+1;
			else
			y=y*10;
			n=n/10;
		}
		for(j=0;j<k;j++)
		{
			z=z*10+(y%10);
			y=y/10;
		}
		if(i!=0)
		printf("\n");
		printf("Case #%lld: %lld %lld",i+1,z,a[i]-z);
	}
}