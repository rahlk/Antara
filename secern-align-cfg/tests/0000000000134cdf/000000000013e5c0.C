/*Bacterial Tactics*/

#include<stdio.h>
#include<string.h>

char grid[15][20];
char bad_cols[15], bad_rows[15];
int C, R, start_count;

int solve(int depth)
{
	int bottom, can_win, i, j, left, ret, right, top;
	can_win = 0;
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (grid[i][j] == '.')
			{
				if (!bad_rows[i])
				{
					grid[i][j] = 'H';
					left = j - 1;
					while ((left >= 0) && (grid[i][left] == '.'))
					{
						grid[i][left] = 'H';
						left--;
					}
					right = j + 1;
					while ((right < C) && (grid[i][right] == '.'))
					{
						grid[i][right] = 'H';
						right++;
					}
					ret = solve(depth + 1);
					if (!ret)
					{
						can_win = 1;
						if (depth == 0)
							start_count++;
					}
					for (left++; left < right; left++)
						grid[i][left] = '.';
					if ((can_win) && (depth != 0))
						return 1;
				}
				if (!bad_cols[j])
				{
					grid[i][j] = 'V';
					top = i - 1;
					while ((top >= 0) && (grid[top][j] == '.'))
					{
						grid[top][j] = 'V';
						top--;
					}
					bottom = i + 1;
					while ((bottom < R) && (grid[bottom][j] == '.'))
					{
						grid[bottom][j] = 'V';
						bottom++;
					}
					ret = solve(depth + 1);
					if (!ret)
					{
						can_win = 1;
						if (depth == 0)
							start_count++;
					}
					for (top++; top < bottom; top++)
						grid[top][j] = '.';
					if ((can_win) && (depth != 0))
						return 1;
				}
			}
		}
	}
	return can_win;
}

int main()
{
	int can_win, i, j, t, T;
	scanf("%d", &T);
	for (t = 1; t <= T; t++)
	{
		scanf("%d %d", &R, &C);
		for (i = 0; i < R; i++)
			scanf("%s", grid[i]);
		memset(bad_rows, 0, sizeof(bad_rows));
		memset(bad_cols, 0, sizeof(bad_cols));
		for (i = 0; i < R; i++)
			for (j = 0; j < C; j++)
				if (grid[i][j] == '#')
					bad_rows[i] = bad_cols[j] = 1;
		start_count = 0;
		can_win = solve(0);
		if (can_win)
			printf("Case #%d: %d\n", t, start_count);
		else
			printf("Case #%d: 0\n", t);
	}
	return 0;
}