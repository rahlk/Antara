#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; ++i)
	{
		int n,m,ans = 0;
		scanf("%d", &n);
		m = 1;
		while(n%m!=n)
		{
			if ((n/m)%10==4)
			{
				ans = ans + m;
			}
			m = m*10;
		}
		printf("Case #%d: %d %d\n", i, ans, n-ans);
	}
}