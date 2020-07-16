#include <stdio.h>
#include <math.h>
int main(void) 
{
	int t,z=1;
	scanf("%d",&t);
	while(t--)
	{
		int i,l,j,e;
		long long int n,a,b;
		scanf("%lld",&n);
		a=n;
		b=0;
		int pos=0;
		while(n!=0)
		{
			e=n%10;
			if(e==4)
			{
			  a=a-(pow(10,pos));
			  b=b+pow(10,pos);
			}
			pos++;
			n=n/10;
		}
		printf("Case #%d: %lld %lld\n",z++,a,b);;
	}
	return 0;
}
