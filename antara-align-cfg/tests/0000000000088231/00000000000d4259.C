#include<stdio.h>
#include<math.h>

int main()
{
	int m,t;
	long long int i,n,c,d,k,s;
	
	scanf("%d",&t);
	
	for(m=0;m<t;m++)
	{
		scanf("%lld",&n);
		c=n;
		k=0;
		s=0;
		
		while(c>0)
		{
			d=c%10;
			c=c/10;
	
			if(d==4)
			{
				s=s+1*(pow(10,k));
				//printf("pow:%d\n",pow(10,k));
			}
			k++;
		}
		
		printf("Case #%d: %lld %lld \n",m+1,s,n-s);
		
	}
	
}