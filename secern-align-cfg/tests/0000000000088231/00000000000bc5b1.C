#include<stdio.h>
#include<math.h>

long long int weight(long long int);
long long int rev(long long int);
int main(void) 
{
	long long int t,z=1,n,a,b,sum1,sum2;
	scanf("%lld",&t);
	while(t-->0)
	{
		sum1=sum2=1;
		scanf("%lld",&n);
		a=n/2;
		b=n-a;
		while(!(sum1==0 && sum2==0))
		{
			sum1=weight(a);
			a=a-sum1;
			b=b+sum1;
			sum2=weight(b);
			a=a-sum2;
			b=b+sum2;
		}
		printf("Case #%lld: %lld %lld\n",z++,a,b);
	}
	return 0;
}
long long int weight(long long int n)
	{
		int b=0;
		long long int s=0,temp=n;
		while(n!=0)
		{
			long long int a=n%10;
			if(a==4)
			s=s+(a-1)*pow(10,b++);
			else
			s=s+a*pow(10,b++);
			n=n/10;
		}
		s=rev(s);
		return temp-s;
	}
long long int rev(long long int n)
{
	int a=0;
	long long int x=0;
	while(n!=0)
	{
		x=x+(n%10)*pow(10,a++);
		n=n/10;
	}
	return x;
}
