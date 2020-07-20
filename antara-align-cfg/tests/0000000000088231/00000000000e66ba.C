
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char linebuffer[102], outbuffer[102];
	gets(linebuffer);

	int num_of_in = atoi(linebuffer), i, j;

	for (i = 0; i < num_of_in; i++)
	{
		memset(linebuffer, '0', 101);
		memset(outbuffer, '0', 101);
		linebuffer[101] = '\0';
		outbuffer[101] = '\0';

		gets(linebuffer);

		j = 0;

		int first_hit = -1;

		while (linebuffer[j] != '\0')
		{
			if (linebuffer[j] == '4')
			{
				if (first_hit == -1)
				{
					first_hit = j;
				}
				linebuffer[j] = '3';
				outbuffer[j - first_hit] = '1';
			}
		}

		printf("Case #%d: %s %s\n", (i + 1), linebuffer, outbuffer);
	}

}