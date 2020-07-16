#include <stdio.h>

int main(void)
{
	int T, R, C;
	int res_x[400];
	int res_y[400];
	int visited[20][20];
	int mov_i[] = { -1, 2, 1, -2 };
	int mov_j[] = { 2, 1, -2, -1 };
	int i, j, k;

	scanf("%d", &T);

	for (i = 1; i <= T; i++)
	{
		scanf("%d %d", &R, &C);

		for (j = 0; j < 400; j++)
		{
			res_x[j] = 0;
			res_y[j] = 0;
			visited[j / 20][j % 20] = 0;
		}

		j = 0;
		res_x[j] = 0;
		res_y[j] = 0;
		j++;

		while (j < R * C)
		{
			for (k = 0; k < 4; k++)
			{
				if (visited[(res_x[j - 1] + mov_i[k]) % R][(res_y[j - 1] + mov_j[k]) % C] == 0) break;
			}
			if (k == 4) break;
			res_x[j] = (res_x[j - 1] + mov_i[k]) % R;
			res_y[j] = (res_y[j - 1] + mov_j[k]) % C;
			j++;
		}
		if (k == 4) printf("Case #%d: IMPOSSIBLE\n");
		else
		{
			printf("Case #%d: POSSIBLE\n");
			for (k = 0; k < R * C; k++)
			{
				printf("%d %d\n ", res_x[k], res_y[k]);
			}
		}
	}
	return 0;
}