#include<stdio.h>

int test(int a)
{
	while (a)
	{
		if (a % 10 == 4)
			return 0;
		a /= 10;
	}
	return 1;
}

int main(void)
{
	int a, t, i, x, y;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &a);
		x = 1;
		y = a - 1;
		while (1)
		{
			if (test(x) && test(y))
			{
				printf("Case #%d : %d %d\n", i, x, y);
				break;
			}
			else
			{
				x++;
				y--;
			}
		}
	}
	return 0;
}