/*Fair Fight*/

#include<stdio.h>

int C[100000], D[100000];

int abs(int x)
{
	return (x >= 0) ? x : -x;
}

int main()
{
	int count, i, K, L, maxC, maxD, N, R, t, T;
	scanf("%d", &T);
	for (t = 1; t <= T; t++)
	{
		scanf("%d %d", &N, &K);
		for (i = 0; i < N; i++)
			scanf("%d", &C[i]);
		for (i = 0; i < N; i++)
			scanf("%d", &D[i]);
		count = 0;
		for (L = 0; L < N; L++)
		{
			for (R = L; R < N; R++)
			{
				maxC = maxD = -1;
				for (i = L; i <= R; i++)
					if (maxC < C[i])
						maxC = C[i];
				for (i = L; i <= R; i++)
					if (maxD < D[i])
						maxD = D[i];
				if (abs(maxD - maxC) <= K)
					count++;
			}
		}
		printf("Case #%d: %d\n", t, count);
	}
	return 0;
}