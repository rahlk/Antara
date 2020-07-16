#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define MAX_SIZE 50010

void solve(int testcase, int size, char* moves)
{
	int nmoves = 2 * (size - 1);
	int cross = (moves[0] == moves[nmoves - 1]);

	printf("Case #%d: ", testcase + 1);

	if (!cross)
	{
		if (moves[0] == 'E')
		{
			for (int i = 0; i < size - 1; i++)
				printf("S");
			for (int i = 0; i < size - 1; i++)
				printf("E");
		}
		else
		{
			for (int i = 0; i < size - 1; i++)
				printf("E");
			for (int i = 0; i < size - 1; i++)
				printf("S");
		}

		printf("\n");
		return;
	}

	// figure out when to cross her path
	char key = (moves[0] == 'E' ? 'S' : 'E');
	int index = 0;
	int crossIndex = 0;

	while (moves[index] != key || moves[index + 1] != key)
	{
		if (moves[index] == key)
		{
			crossIndex++;
		}
		index++;
	}

	char first = key;
	char second = moves[0];
	char third = key;

	for (int i = 0; i < crossIndex + 1; i++)
		printf("%c", first);
	for (int i = 0; i < size - 1; i++)
		printf("%c", second);
	for (int i = crossIndex + 1; i < size - 1; i++)
		printf("%c", third);
	printf("\n");
}

int main(int argc, char* argv[])
{
	int ndata;
	scanf("%d", &ndata);
	
	for (int asdf = 0; asdf < ndata; asdf++)
	{
		int size;
		char* moves = malloc(sizeof(char) * MAX_SIZE);

		scanf("%d\n", &size);
		fgets(moves, MAX_SIZE, stdin);

		solve(asdf, size, moves);
	}
	
	return 0;
}
