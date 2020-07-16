#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n_tests = 0;
	int i = 0;
	int j = 0;
	char *number_str = NULL;
	char *number_a_str = NULL;
	char *number_b_str = NULL;
	ssize_t linelen = 0;
	size_t bufsize = 0;
	size_t a_bufsize = 0;
	size_t b_bufsize = 0;
	int b_first_nonzero = 0;

	linelen = getline(&number_str, &bufsize, stdin);
	sscanf(number_str, "%d", &n_tests);
	
	for (i = 0; i < n_tests; i++) {
		linelen = getline(&number_str, &bufsize, stdin);
		// linelen-1 is the length of the number (because newline char)
		if (linelen > a_bufsize) {
			number_a_str = realloc(number_a_str, linelen);
			a_bufsize = linelen;
		}
		strncpy(number_a_str, number_str, linelen-1);
		number_a_str[linelen-1] = 0;

		if (linelen > b_bufsize) {
			number_b_str = realloc(number_b_str, linelen);
			b_bufsize = linelen;
		}
		for (j = 0; j < linelen-1; j++) {
			number_b_str[j] = '0';
		}
		number_b_str[linelen-1] = 0;

		b_first_nonzero = linelen-2;
		for (j = linelen-2; j >= 0; j--) {
			if (number_str[j] == '4') {
				number_a_str[j] = '3';
				number_b_str[j] = '1';
				b_first_nonzero = j;
			}
		}

		printf("Case %d: %s %s\n", i+1, number_a_str, &number_b_str[b_first_nonzero]);
	}
}
