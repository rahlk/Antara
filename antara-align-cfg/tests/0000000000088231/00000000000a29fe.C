#include<stdio.h>
#include<math.h>
int main()
{
	long long int T,N,i,j,k,l,x,c=1,a,f=0,s,b;
	scanf("%lld",&T);
	for(i=0;i<T;i++)
	{
		f=0;
		s=0;
		c=1;
		scanf("%lld",&N);
		x=N;
		while(x!=0)
		{
			a=x%10;
		//	printf("%lld",a);
			if(a==4)
			  {
			  a--;
			  f=1;
		      }
			  s=s+a*c;
			   c=c*10;
			x=x/10;
		}
		  if(f==1)
		  {
		  	printf("Case #%lld : %lld %lld\n",i+1,s,N-s);
		  }
		  else
		  {
		  	b=abs(N%10-4)+1;
		  	printf("Case #%lld : %lld %lld\n",i+1,b,N-b);
		  }
	}
}