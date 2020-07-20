#include <stdio.h>

int main(void)
{
	int T;
	int N;
	int i, j;
	char path[20000];

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d", &N);
		scanf("%s", path);

		printf("Case #%d: ", i + 1);
		for (j = 0; j < 2 * N - 2; j++)
		{
			if (path[j] == 'S') printf("E");
			else printf("S");
		}
		printf("\n");
	}
	return 0;
}