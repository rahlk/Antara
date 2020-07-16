#include <stdio.h>
#include <math.h>

int T;
int N, B;
int F;
char get[10][1024];
int fine[1024];
char buf[1025];
int flag;

int main()
{
	scanf("%d", &T);

	for (int t = 1; t <= T; t++)
	{
		scanf("%d %d %d", &N, &B, &F);

		int k = log2(N);
		if (k != log2(N))
			k++;

		int p = pow(2, k);

		for (int f = 0; f < k; f++)
		{
			p /= 2;
			for (int i = 0; i < N; i++)
				buf[i] = ((i & p) > 0) + '0';
			printf("%s\n", buf);

			scanf("%s", get[f]);
		}

		for (int i = 0; i < N - B; i++)
		{
			int pos = 0;
			for (int j = k - 1; j >= 0; j--)
			{
				pos <<= 1;
				pos += get[i][j] - '0';
			}
			fine[pos] = 1;
		}

		for (int i = 0; i < N; i++)
		{
			if (fine[i] == 0)
				printf("%d ", i + 1);
		}
		printf("\n");

		scanf("%d", &flag);

		if (flag == 1)
			continue;
		else
			break;
	}

	return 0;
}