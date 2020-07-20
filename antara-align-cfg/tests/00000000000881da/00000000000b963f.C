#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define DEBUGF(s, ...) fprintf(stderr, "\tDEBUG #%d: " s, t+1, ##__VA_ARGS__)

void do_test(int t)
{
	int n;
	int i;

	scanf("%d", &n);

	printf("Case #%d: ", t + 1);

	for (i = 0; i < 2 * n - 2; i++)
	{
		char c;
		scanf(" %c", &c);

		putchar(c == 'S' ? 'E' : 'S');
	}

	putchar('\n');
}

int main()
{
	int t, i;

	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
		do_test(i);

	return 0;
}
