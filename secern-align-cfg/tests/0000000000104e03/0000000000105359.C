#include <stdio.h>

int T;
int r, c;
int flag;

int gcd(int p, int q)
{
	int r = p % q;

	while (r)
	{
		p = q;
		q = r;
		r = p % q;
	}
	return q;
}

int main()
{
	scanf("%d", &T);

	for (int tc = 1; tc <= T; tc++)
	{
		scanf("%d %d", &r, &c);

		flag = gcd(r, c);

		if (flag == 1)
		{
			printf("Case #%d: POSSIBLE\n", tc);
			for (int i = 1; i <= r * c; i++)
				printf("%d %d\n", i % r + 1, (i * r) % c + 1);
		}
		else
			printf("Case #%d: IMPOSSIBLE\n", tc);
	}

	return 0;
}