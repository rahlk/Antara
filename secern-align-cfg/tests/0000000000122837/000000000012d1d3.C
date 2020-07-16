#include <stdio.h>

int T, w;
long long R[6];
long long total;
long long temp = 127LL;
int flag;

int main()
{
	scanf("%d %d", &T, &w);

	for (int t = 1; t <= T; t++)
	{
		printf("40\n");
		fflush(stdout);
		scanf("%lld", &total);

		R[0] = (total >> 40);
		R[1] = (total >> 20) & temp;
		R[2] = (total >> 13) & temp;

		printf("200\n");
		fflush(stdout);
		scanf("%lld", &total);

		R[3] = (total >> 50);
		R[4] = (total >> 40) & temp;
		R[5] = (total >> 33) & temp;

		for (int i = 0; i < 6; i++)
			printf("%lld ", R[i]);
		printf("\n");
		fflush(stdout);

		scanf("%d", &flag);

		if (flag == -1)
			break;
	}

	return 0;
}