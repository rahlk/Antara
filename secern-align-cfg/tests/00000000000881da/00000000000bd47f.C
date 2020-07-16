#include <stdio.h>

const int N = 65536;

char path[N], ans[N];

int main()
{
	int count, cas, px, py, qx, qy, n;
	char *pp, *qq;
	cas = 0;
	scanf("%d", &count);
	while (count--)
	{
		scanf("%d%s", &n, path);
		pp = path;
		qq = ans;
		px = 1;
		py = 1;
		qx = 1;
		qy = 1;
		while (px != n || py != n)
		{
			if (qx == px && qy == py)
			{
				if (*pp == 'E')
				{
					*qq = 'S';
					qx++;
				}
				else
				{
					*qq = 'E';
					qy++;
				}
			}
			else
			{
				if (qy < n)
				{
					*qq = 'E';
					qy++;
				}
				else
				{
					*qq = 'S';
					qx++;
				}
			}
			if (*pp == 'E')
			{
				py++;
			}
			else
			{
				px++;
			}
			pp++;
			qq++;
		}
		*qq = 0;
		printf("Case #%d: %s\n", ++cas, ans);
	}
	return 0;
}