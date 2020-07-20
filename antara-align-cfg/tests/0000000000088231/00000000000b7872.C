#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define DEBUGF(s, ...) fprintf(stderr, "\tDEBUG #%d: " s, t+1, ##__VA_ARGS__)

void do_test(int t)
{
	int first_nonzero = -1;
	int i;
	char a[201], b[201];

	scanf("%200s", a);

	for (i = 0; a[i]; i++)
	{
		if (a[i] == '4')
		{
			a[i] = '3';
			b[i] = '1';
			if (first_nonzero < 0)
				first_nonzero = i;
		}
		else
		{
			b[i] = '0';
		}
	}

	b[i] = 0;

	printf("Case #%d: %s %s\n", t + 1, a, b + first_nonzero);
}

int main()
{
	int t, i;

	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
		do_test(i);

	return 0;
}
