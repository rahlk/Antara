#include<stdio.h>
void sum(unsigned long long int);
int main()
{
	unsigned long long int T,N,i;
	scanf("%lld",&T);
	for(i=0;i<T;i++)
	{
		scanf("%lld",&N);
		sum(N);
	}
	return 0;
}
void sum(unsigned long long int N)
{
	unsigned long long int i,x,A=0,B=N;
	for(i=0;N>0;N=N/10)
	{
		x=N%10;
		if(x==4)
		{
			x=3;
		}
		A=A*10+x;
	}
	printf("%lld %lld",A,B-A);
}