#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

typedef unsigned int uint;

int digits[100];
int dx = 0;
int64_t getNextA(int64_t a);
int64_t getNextB(int64_t b);

int main(void)
{
	int n;
	scanf("%d%*c", &n);

	int64_t t;
	int digits[20];
	int idx = 0;

	int i = 0;
	for(; i < n; i++)
	{
		scanf("%lld%*c", &t);

		int64_t a = 1;
		int64_t b = t - 1;
		bool end = false;
		bool first = true;

		a = 1;
		for(int64_t a = 1; a < t; a++, a = getNextA(a))
		{
			int64_t b = getNextB(t - 1);
			for(int64_t b = getNextB(t - 1); b >= 1; b--, b = getNextB(b))
			{
				// printf("%lld %lld\n", a, b);
				if(a + b == t)
				{
					printf("Case #%d: %lld %lld\n", i + 1, a, b);
					goto end;
				}
			}
		}
		end:
			;

		// while(a <= b && !end)
		// {
		// 	if(!first)
		// 	{
		// 		if((a + b) == t)
		// 		{
		// 			printf("Case #%d: %lld %lld\n", i + 1, a, b);
		// 			end = true;
		// 		}
		// 	}
		// 	else
		// 		first = false;
		// 	printf("%lld %lld\n", a, b);

		// 	a++;
		// 	b--;

		// 	dx = 0;
		// 	a = getNextA(a);
		// 	dx = 0;
		// 	b = getNextB(b);
		// }
	}

	return 0;
}

int64_t getNextB(int64_t b)
{
	dx = 0;
	bool has = false;
	int pos = -1;
	while(b > 0)
	{
		digits[dx++] = b % 10;
		if(digits[dx - 1] == 4)
		{
			pos = dx - 1;
			has = true;
		}
		b /= 10;
	}
	if(has)
	{
		digits[pos]--;
		int i = pos - 1;
		for(; i >= 0; i--)
			digits[i] = 0;
	}

	int64_t k = 0;
	int i = dx - 1;
	for(; i >= 0; i--)
	{
		k = k * 10 + digits[i];
	}
	return k;
}

int64_t getNextA(int64_t a)
{
	dx = 0;
	bool has = false;
	int pos = -1;
	while(a > 0)
	{
		digits[dx++] = a % 10;
		if(digits[dx - 1] == 4)
		{
			pos = dx - 1;
			has = true;
		}
		a /= 10;
	}
	if(has)
	{
		digits[pos]++;
		int i = pos - 1;
		for(; i >= 0; i--)
			digits[i] = 0;
	}

	int64_t k = 0;
	int i = dx - 1;
	for(; i >= 0; i--)
	{
		k = k * 10 + digits[i];
	}
	return k;
}