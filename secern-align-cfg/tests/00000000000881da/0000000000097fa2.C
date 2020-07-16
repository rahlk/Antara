#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned long int no_cases, case_no;
	scanf("%lu", &no_cases);
	getchar();
	for (case_no = 0; case_no != no_cases; case_no++)
	{
		char c;
		while (getchar() != '\n') {}
		printf("Case #%lu: ", case_no + 1);
		while ((c = getchar()) != '\n')
			putchar('E' ^ 'S' ^ c);
		putchar(c);
	}
	return 0;
}
