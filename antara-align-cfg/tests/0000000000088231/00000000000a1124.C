#include<stdio.h>
#include<math.h>
int main()
{
	long int M,N,m,n;
	int t,a,b=1,c;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%ld",&M);
		N=M;
		c=0;
		m=0;
		while(N>0)
		{
		a = N%10;
		if (a==4)
		a=2;
		m = m+(a*(pow(10,c)));
		N = N/10;
		c++;
		}
		n = M - m;
		printf("Case #%d:%ld %ld\n",b,m,n);
		b++;
		t--;
	}
	return 0;
}