#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

typedef unsigned int uint;

bool hasDigit(int64_t n, int k);

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

		while(a <= b && !end)
		{
			if((a + b) == t)
			{
				if(!hasDigit(a, 4) && !hasDigit(b, 4))
				{
					printf("Case #%d: %lld %lld\n", i + 1, a, b);
					end = true;
				}
			}
			a++;
			b--;
		}
	}

	return 0;
}

bool hasDigit(int64_t n, int k)
{
	while(n)
	{
		if((n % 10) == k)
			return true;
		n /= 10;
	}
	return false;
}