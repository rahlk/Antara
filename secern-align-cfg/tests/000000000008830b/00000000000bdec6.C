#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define DEBUGF(s, ...) fprintf(stderr, "\tDEBUG #%d: " s, t+1, ##__VA_ARGS__)

int gcd(int a, int b)
{
	if (b == 0)
		return a;

	return gcd(b, a % b);
}

void do_test(int t)
{
	int n, l;
	int prime_text[200];
	char letter_text[200] = { 0 };
	int c0, c1;
	int i;
	int max_p, last_p;
	char next_c;

	scanf("%d %d %d %d", &n, &l, &c0, &c1);	

	/* c0 = prime_text[0] * prime_text[1]
	 * c1 = prime_text[1] * prime_text[2]
     */

	prime_text[1] = c0 > c1 ? gcd(c0, c1) : gcd(c1, c0);
	prime_text[0] = c0 / prime_text[1];	
	prime_text[2] = c1 / prime_text[1];
	
	for (i = 2; i < l; i++)
	{
		int cc;
		scanf("%d", &cc);

		prime_text[i + 1] = cc / prime_text[i];
	}
	
	for (max_p = 0, i = 0; i <= l; i++)
	{
		if (prime_text[i] > max_p)
			max_p = prime_text[i];
	}

	last_p = 0;
	next_c = 'A';

	while (last_p < max_p)
	{
		int new_min = max_p;

		for (i = 0; i <= l; i++)
		{
			if (prime_text[i] > last_p && prime_text[i] <= new_min)
			{	
				new_min = prime_text[i];
				letter_text[i] = next_c;
			}
		}

		next_c++;
		last_p = new_min;
	}

	printf("Case #%d: %s\n", t + 1, letter_text);
}

int main()
{
	int t, i;

	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
		do_test(i);

	return 0;
}
