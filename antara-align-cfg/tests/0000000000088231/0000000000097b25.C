#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned long int no_cases, case_no;
	scanf("%lu", &no_cases);
	getchar();
	for (case_no = 0; case_no != no_cases; case_no++)
	{
		char a[101], b[103], c; int n = 0, x = 101;
		b[101] = '0'; b[102] = '\0';
		while ((c = getchar()) != '\n')
		{
			if (c == '4')
			{
				a[n] = b[n] = '2';
				if (x == 101) x = n;
			}
			else
			{
				a[n] = c;
				b[n] = '0';
			}
			n++;
		}
		a[n] = b[n] = '\0';
		
		printf("Case #%lu: %s %s\n", case_no + 1, a, b + x);
	}
	return 0;
}
