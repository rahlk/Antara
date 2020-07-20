#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long int k;
int main()
{
	int t,j=1,r;
	scanf("%d",&t);
	
	while(j<=t)
	{
		k N;

		scanf("%lld",&N);
		
		k z=N;
		k h=0,s=0;
		while(z>0)
		{
	
			r=z%10;
			if(r==4)
			{
				s=s+1*pow(10,h);
			}		
			h++;
			z=z/10;
			
		}
		printf("Case #%lld: %lld %lld\n",j,N-s,s);
		j++;
	}
}