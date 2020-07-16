/*Bacterial Tactics*/

#include<stdio.h>

char grid[15][20];
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
				if (!(((left >= 0) && (grid[i][left] == '#')) || ((right < C) && (grid[i][right] == '#'))))
				{
					ret = solve(depth + 1);
					if (!ret)
					{
						can_win = 1;
						if (depth == 0)
							start_count++;
					}
				}
				for (left++; left < right; left++)
					grid[i][left] = '.';
				if ((can_win) && (depth != 0))
					return 1;
			}
		}
	}
	for (i = 0; i < R; i++)
	{
		for (j = 0; j < C; j++)
		{
			if (grid[i][j] == '.')
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
				if (!(((top >= 0) && (grid[top][j] == '#')) || ((bottom < R) && (grid[bottom][j] == '#'))))
				{
					ret = solve(depth + 1);
					if (!ret)
					{
						can_win = 1;
						if (depth == 0)
							start_count++;
					}
				}
				for (top++; top < bottom; top++)
					grid[top][j] = '.';
				if ((can_win) && (depth != 0))
					return 1;
			}
		}
	}
	return can_win;
}

int main()
{
	int can_win, i, t, T;
	scanf("%d", &T);
	for (t = 1; t <= T; t++)
	{
		scanf("%d %d", &R, &C);
		for (i = 0; i < R; i++)
			scanf("%s", grid[i]);
		start_count = 0;
		can_win = solve(0);
		if (can_win)
			printf("Case #%d: %d\n", t, start_count);
		else
			printf("Case #%d: 0\n", t);
	}
	return 0;
}