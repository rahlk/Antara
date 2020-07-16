#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
	char _line[256];
	char *line = _line;
	size_t n = 256;
	int T = 0;

	if (getline(&line, &n, stdin) < 0)
		return 1;

	T = atoi(line);

	for (int t = 0; t < T; t++) {
		int N = 0;
		char c = '\0';

		printf("Case #%d: ", t + 1);

		if (getline(&line, &n, stdin) < 0)
			return 1;

		N = atoi(line);

		while ((c = (char)fgetc(stdin)) != '\n') {
			if (c == 'E')
				fputc('S', stdout);
			else
				fputc('E', stdout);
			fflush(stdout);
		}

		fputc('\n', stdout);
	}

	return 0;
}
