#include <stdio.h>

int main()
{
	int T;
	int N;
	char input[100001];

	scanf("%d", &T);

	for (int t = 1; t <= T; t++)
	{
		scanf("%d", &N);
		scanf("%s", input);

		printf("Case #%d: ", t);

		for (int i = 0; i < 2 * N - 2; i++)
		{
			if (input[i] == 'E')
				printf("S");
			else
				printf("E");
		}

		printf("\n");
	}

	return 0;
}