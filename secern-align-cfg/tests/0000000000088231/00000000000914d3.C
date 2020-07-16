#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>

#define AMOUNT 100


int is_digit_4(long int nb);
void remove_digit(int* a, int* b);


int main()
{
	long int i, n, a ,b, k, t;

	char str[AMOUNT];

	scanf("%d", &t);

	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);	
		a = n / 2;
		b = n - a;		
		if (b < 0)
		{
			b = 0;
		}
		remove_digit(&a,&b);
		printf("Case #%d: %d %d\n", i, a , b);
	}
	
	return 0;
}

int is_digit_4(long int nb)
{
	int which_digit = 0;

	while (((nb % 10) == 8) || ((nb % 10) % 4 != 0))
	{
		which_digit++;
		nb = nb / 10;
	}
	if (nb == 0)
	{
		return 0;
	}
	else
	{
		return which_digit;
	}
	
}

void remove_digit(int* a, int* b)
{
	int buffer;
	int remove = 1;
	while (remove)
	{
		remove = is_digit_4(*a);

		if (remove)
		{
			buffer = pow(10, remove);

			*a = *a - buffer;
			*b = *b + buffer;
		}

		remove = is_digit_4(*b);
		if (remove)
		{
			buffer = pow(10, remove);

			*a = *a - buffer;
			*b = *b + buffer;
		}
	}
	
}