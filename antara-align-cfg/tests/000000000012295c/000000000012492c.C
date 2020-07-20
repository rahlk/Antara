#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char dir;
	int i, j, t, p, x, y, *lrow, *rrow, *ucol, *dcol, xmax = 0, ymax = 0, xind = 0, yind = 0;
	long long int q;

	scanf("%d", &t);

	for(j=1; j<=t; j++)
	{
		scanf("%d %lld", &p, &q);

		lrow = (int*)calloc(q + 1, sizeof(int));
		rrow = (int*)calloc(q + 1, sizeof(int));
		ucol = (int*)calloc(q + 1, sizeof(int));
		dcol = (int*)calloc(q + 1, sizeof(int));

		fflush(stdin);

		for (i = 0; i < p; i++)
		{
			scanf("%d %d %c", &x, &y, &dir);

			if (dir == 'N')
				ucol[y+1]++;
			else if (dir == 'S')
				dcol[y-1]++;
			else if (dir == 'E')
				lrow[x+1]++;
			else
				rrow[x-1]++;
		}

		for (i = 0; i < q; i++)
		{
			lrow[i + 1] += lrow[i];
			rrow[q - (i + 1)] += rrow[q - i];
			ucol[i + 1] += ucol[i];
			dcol[q - (i + 1)] += dcol[q - i];
		}

		for (i = 0; i <= q; i++)
		{
			if (xmax < lrow[i] + rrow[i])
			{
				xmax = lrow[i] + rrow[i];
				xind = i;
			}

			if (ymax < ucol[i] + dcol[i])
			{
				ymax = ucol[i] + dcol[i];
				yind = i;
			}
		}

		printf("Case #%d: %d %d\n", j, xind, yind);

		xind = 0;
		yind = 0;
		xmax = 0;
		ymax = 0;
	}

	return 0;
}