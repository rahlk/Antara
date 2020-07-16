#include <stdio.h>
#include <math.h>

int T;
int N, B;
int F;
char get[10][1024];
char buf[1025];
int flag;

int main()
{
	scanf("%d", &T);

	for (int t = 1; t <= T; t++)
	{
		int fine[1024] = { 0 };

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
			buf[N] = 0;
			printf("%s\n", buf);
			fflush(stdout);

			scanf("%s", get[f]);

			if (get[f][0] == '-')
				return 0;
		}

		for (int i = 0; i < N - B; i++)
		{
			int pos = 0;
			for (int j = 0; j < k; j++)
			{
				pos <<= 1;
				pos += get[j][i] - '0';
			}
			fine[pos] = 1;
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