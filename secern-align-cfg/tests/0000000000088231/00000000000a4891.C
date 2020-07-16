#include"stdio.h"
#include"string.h"
#include"stdlib.h"
#include"ctype.h"
#include"limits.h"
#include"time.h"
#include"stdbool.h"
#define ll long long

ll pow(ll n, ll p)
{
	ll N=1;
	while(p--)
	N*=n;
	return N;
}

int main()
{
	clock_t lnh=clock();
	int t,d=1;
	scanf("%d",&t);
	while(t--)
	{
	ll n,c=0,i,j,k;
	scanf("%lld",&n);
	c=n;
	for(i=j=k=0;c;k++)
	{
		if(c%10==4)
		{
			i+=(3*pow(10,k));
			j+=(1*pow(10,k));
		}
		c/=10;
	}
	
	j+=(n-(i+j));

	printf("Case #%d: %lld %lld",d++,i,j);
	printf("\n");
	}

	clock_t cls=clock();
	//printf("Execution Time: %fms\n",(double)((cls-lnh)*1000)/CLOCKS_PER_SEC);

	return 0;
}