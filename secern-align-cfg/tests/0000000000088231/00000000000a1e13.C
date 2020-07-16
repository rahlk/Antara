#include<stdio.h>
#include<stdlib.h>

int check(long long n)
{	
	long long k;
	while(n!=0)
	{
		k=n%10;
		if(k==4)
			return 0;
		n=n/10;
	}
	return 1;

}

int main()
{	
	int T,k;
	scanf("%d",&T);
	for(k=0;k<T;k++){
	float i;
	long long N;
	scanf("%lld",&N);
	long long a,b;
	for(i=1.01;i<100000;i=i+0.01)
		{
			 a = N/i;
			 b =N-a;
			if(check(a)&&check(b))
				break;
		}

	printf("Case #%d: %lld %lld\n",k+1,a,b);
}
}