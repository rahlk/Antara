/*Manhattan Crepe Cart*/

#include<stdio.h>
#include<string.h>

int countx[100001], county[100001];

int main()
{
	char d[4];
	int i, j, maxx, maxy, P, Q, t, T, x, y;
	scanf("%d", &T);
	for (t = 1; t <= T; t++)
	{
		scanf("%d %d", &P, &Q);
		memset(countx, 0, sizeof(countx));
		memset(county, 0, sizeof(county));
		for (i = 0; i < P; i++)
		{
			scanf("%d %d %s", &x, &y, d);
			if (d[0] == 'E')
				for (j = x + 1; j <= Q; j++)
					countx[j]++;
			else if (d[0] == 'W')
				for (j = 0; j < x; j++)
					countx[j]++;
			else if (d[0] == 'N')
				for (j = y + 1; j <= Q; j++)
					county[j]++;
			else
				for (j = 0; j < y; j++)
					county[j]++;
		}
		maxx = -1;
		for (i = 0; i <= Q; i++)
			if ((maxx == -1) || (countx[i] > countx[maxx]))
				maxx = i;
		maxy = -1;
		for (i = 0; i <= Q; i++)
			if ((maxy == -1) || (county[i] > county[maxy]))
				maxy = i;
		printf("Case #%d: %d %d\n", t, maxx, maxy);
	}
	return 0;
}