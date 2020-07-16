#include <stdio.h>
#include <math.h>

int T;
int N, B;
int F;
char get[10][1024];
char table[5][1025];
char buf[1025];
int temp;
int flag;

int main()
{
	scanf("%d", &T);

	for (int i = 0; i < 17; i++)
	{
		temp = i;
		for (int j = 0; j < 5; j++)
		{
			table[j][i] = temp % 2 + '0';
			temp /= 2;
		}
	}

	for (int i = 17; i < 1024; i++)
		for (int j = 0; j < 5; j++)
			table[j][i] = table[j][i - 17];

	for (int t = 1; t <= T; t++)
	{
		int fine[1024] = { 0 };

		scanf("%d %d %d", &N, &B, &F);

		int k = log2(N);
		if (k != log2(N))
			k++;

		for (int f = 0; f < 5; f++)
		{
			printf("%.*s\n", N, table[f]);
			fflush(stdout);

			scanf("%s", get[f]);
		}

		for (int i = 0, j = 0; i < N && j < N - B; i++)
		{
			flag = 1;

			for (int k = 0; k < 5; k++)
			{
				if (table[k][i] != get[k][j])
				{
					flag = 0;
					break;
				}
			}

			if (flag)
			{
				fine[i] = 1;
				j++;
			}
			
		}

		for (int i = 0; i < N; i++)
		{
			if (fine[i] == 0)
				printf("%d ", i);
		}
		printf("\n");
		fflush(stdout);

		scanf("%d", &flag);

		if (flag == 1)
			continue;
		else
			return 0;
	}

	return 0;
}