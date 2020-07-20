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
		char c = '\0';
		long pos = 0;
		int start = 0;

		printf("Case #%d: ", t + 1);

		pos = ftell(stdin);

		while ((c = (char)fgetc(stdin)) != '\n') {
			if (c == '4')
				fputc('2', stdout);
			else
				fputc(c, stdout);
			fflush(stdout);
		}

		fputc(' ', stdout);

		(void) fseek(stdin, pos, SEEK_SET);
		start = 0;
		while ((c = (char)fgetc(stdin)) != '\n') {
			if (c == '4') {
				start = 1;
				fputc('2', stdout);
			} else if (start != 0) {
				fputc('0', stdout);
			}
			fflush(stdout);
		}

		fputc('\n', stdout);
	}

	return 0;
}
