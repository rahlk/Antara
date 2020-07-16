#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long int i;
int main()
{
	int t,j=1,r;
	scanf("%d",&t);
	
	while(j<=t)
	{
		i N;

		scanf("%lld",&N);
		
		i p=N;
		i m=0,s=0;
		while(p>0)
		{
	
			r=p%10;
			printf("%d",r);
			if(r==4)
			{
				s=s+1*pow(10,m);
			}		
			m++;
			p=p/10;
			
		}
		printf("#case %lld:%lld %lld\n",j,N-s,s);
		j++;
	}
}