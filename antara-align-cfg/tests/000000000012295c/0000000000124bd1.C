#include <stdio.h>
#include <memory.h>

int T;
int P, Q;
int x, y;
char d;
int xbuf[100001], ybuf[100001];
int xrs[100001], yrs[100001];
int mX, mY;

int main()
{
	scanf("%d", &T);

	for (int t = 1; t <= T; t++)
	{
		memset(xbuf, 0, 100001 * 4);
		memset(ybuf, 0, 100001 * 4);

		scanf("%d %d", &P, &Q);

		for (int i = 0; i < P; i++)
		{
			scanf("%d %d %c", &x, &y, &d);
			switch (d)
			{
			case 'N':
				ybuf[y + 1]++;
				break;
			case 'W':
				xbuf[0]++;
				xbuf[x]--;
				break;
			case 'S':
				ybuf[0]++;
				ybuf[y]--;
				break;
			case 'E':
				xbuf[x + 1]++;
			}
		}

		xrs[0] = xbuf[0];
		yrs[0] = ybuf[0];
		mX = mY = 0;

		for (int i = 1; i <= Q; i++)
		{
			xrs[i] = xrs[i - 1] + xbuf[i];
			yrs[i] = yrs[i - 1] + ybuf[i];

			if (xrs[i] > xrs[mX])
				mX = i;
			if (yrs[i] > yrs[mY])
				mY = i;
		}

		printf("Case #%d: %d %d\n", t, mX, mY);
	}

	return 0;
}