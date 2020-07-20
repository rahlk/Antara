#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char linebuffer[50001];

	fgets(linebuffer, 10, stdin);

	int nbr_lines = atoi(linebuffer), i, j;

	for (i = 0; i < nbr_lines; i++)
	{
		fgets(linebuffer, 10, stdin);

		//int l = atoi(linebuffer);

		fgets(linebuffer, 50000, stdin);

		printf("Case #%d: ", (i + 1));

		for (j = 0; j < strlen(linebuffer) - 1; j++)
		{
			printf("%c", linebuffer[j] == 'E' ? 'S' : 'E');
		}
		printf("\n");
	}


}