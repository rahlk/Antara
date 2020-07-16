#include<stdio.h>

int main()
{
	int t, x, a, b, d, i;
	scanf("%d", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%d", &x);
		d=1;
		a=0;
		b=0;
		while(x!=0)
		{
			if(x%10==4)
			{
				a+=d*2;
				b+=d*2;
			}
			else
			{
				a+=0;
				b+=d*(x%10);
			}
			x/=10;
			d*=10;
		}
		printf("Case #%d: %d %d\n", i, a, b);
	}
}
