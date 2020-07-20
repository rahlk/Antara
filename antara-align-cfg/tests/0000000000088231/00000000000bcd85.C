#include<stdio.h>
#include<math.h>

int main()
{
	int t,x=1;
	long long int n,p,q,i,r;
	scanf("%d",&t);
	long long int c[t][2];
	while(t--)
	{
		scanf("%lld",&n);
		p=0;
		q=0;
		i=0;
		for(n;n>0;n=n/10)
		{
			r=n%10;
			if(r==4)
			{
				p=p+ (2 * ( pow(10,i) ) );
				q=q+ (2 * ( pow(10,i) ) );
			}
			else
			{
				p=p+r*pow(10,i);
			}
			i++;
		}
		c[x-1][0]=p;
		c[x-1][1]=q;
		x++;
	}
	for(i=0;i<x-1;i++)
	{
		printf("Case #%lld : %lld %lld\n", i+1 , c[i][0], c[i][1] );
	}
	return 0;
}