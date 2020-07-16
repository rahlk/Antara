#include<stdio.h>
void main()
{
	int t,i;
	int n,a,b,j;


	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);	
		a=0;
		b=0;
		a=n/2;
		b=n/2;
		if(a+b==n)
		printf("Case #%d: %d %d",i,a,b);
	}
}