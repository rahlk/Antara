#include<stdio.h>
main()
{
	long long int t,n,i=1,x,y;
	scanf("%lld",&t);
	while(i<=t)
	{
		scanf("%lld",&n);
		x=n/2;
		y=n-x;
		printf("Case #%lld: %lld %lld\n",i,x,y);
		i++;
	}
}