#include<stdio.h>
#include<stdlib.h>

int main()
{	int t, n, i;
	scanf("%d", &t);
	i = 1;
	while (i <= t)
	{	scanf("%d", &n);
		int c = n;
		int d = 0;
		while (c > 0)
		{	d++;
			c /= 10;
		}
		c = n;
		int a[d], j, b[d];
		for (j = d-1; j >= 0; j--)
		{	a[j] = c % 10;
			c /= 10;
		}
		for (j = 0; j < d; j++)
		{	if (a[j] == 4)
			{	a[j]--;
				b[j] = 1;
			}
			else
			{	b[j] = 0;
			}
		}
		int n1, n2;
		n1 = n2 = 0;
		for (j = 0; j < d; j++)
			n1 = n1 * 10 + a[j];
		for (j = 0; j < d; j++)
			n2 = n2 * 10 + b[j];

		printf("Case #%d: %d %d\n", i, n1, n2);
		i++;
	}
}
