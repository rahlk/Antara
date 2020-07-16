#include<stdio.h>
int main()
{
	int t,n,a=0,b=0,rev_a=0,rev_b=0,rem;
	scanf("%d\n",&t);
	int k=0;
	while(k<=t)
	{
		scanf("%d\n",&n);
		while(n>0)
		{
			rem=n%10;
			if(rem==4)
			{
				rev_a=rev_a*10+(rem/2);
				rev_b=rev_b*10+(rem/2);

			}
			else
			{
				rev_a=rev_a*10+rem;
				rev_b=rev_b*10+0;
			}
		}
		unsigned int count= sizeof(rev_a)*8-1;
		a=rev_a;
		while(rev_a)
		{
			a<<=1;
			a |= rev_a&1;
			rev_a>>=1;
			count --;
		}
		a<<=count;
		unsigned int count2= sizeof(rev_b)*8-1;
		b=rev_b;
		while(rev_b)
		{
			b<<=1;
			b |= rev_b&1;
			rev_b>>=1;
			count2--;
		}
		b<<=count2;
		printf("Case #%d: %d %d\n",k+1,a,b);
		k++;
	}
	return 0;
}