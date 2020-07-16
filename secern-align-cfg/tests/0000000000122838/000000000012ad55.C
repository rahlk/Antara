#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, t, n, k, *c, *d, *ok, cmax = 0, dmax = 0;
	long long int cnt = 0;

	scanf("%d", &t);

	for (int j = 1; j <= t; j++)
	{
		scanf("%d %d", &n, &k);

		c = (int*)malloc(sizeof(int) * (n + 1));
		d = (int*)malloc(sizeof(int) * (n + 1));
		ok = (int*)malloc(sizeof(int) * (n + 1));

		for (i = 1; i <= n; i++)
			scanf("%d", &c[i]);

		for (i = 1; i <= n; i++)
			scanf("%d", &d[i]);

		for (i = 1; i <= n; i++)
		{
			for (int j = i; j <= n; j++)
			{
				if (cmax < c[j])
					cmax = c[j];
				if (dmax < d[j])
					dmax = d[j];

				if (abs(cmax - dmax) <= k)
					cnt++;
			}

			cmax = 0;
			dmax = 0;
		}

		printf("Case #%d: %lld\n", j, cnt);

		cnt = 0;
	}

	return 0;
}