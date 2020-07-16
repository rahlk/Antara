#include<stdio.h>
#include<math.h>

int main()
{
	int t,x=1;
	long long int n,a,b,i,r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		a=0;
		b=0;
		i=0;
		for(n;n>0;n=n/10)
		{
			r=n%10;
			if(r==4)
			{
				a=a+2*pow(10,i);
				b=b+2*pow(10,i);
			}
			else
			{
				a=a+r*pow(10,i);
			}
			i++;
		}
		printf("Case #%d : %lld %lld\n",x,a,b);
		x++;
	}
	return 0;
}
