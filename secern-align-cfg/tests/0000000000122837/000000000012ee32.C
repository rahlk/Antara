#include <stdio.h>

int T, w;
long long R[6];
long long total1, total2;
long long temp = 127LL;
int flag;

int main()
{
	scanf("%d %d", &T, &w);

	for (int t = 1; t <= T; t++)
	{
		printf("40\n");
		fflush(stdout);
		scanf("%lld", &total1);

		R[0] = (total1 >> 40);
		R[1] = (total1 >> 20) & temp;;

		printf("200\n");
		fflush(stdout);
		scanf("%lld", &total2);

		R[3] = (total2 >> 50);
		R[4] = (total2 >> 40) & temp;
		R[5] = (total2 >> 33) & temp;
		R[2] = ((total1 - (R[3] << 10) - (R[4] << 8) - (R[5] << 7)) >> 13) & temp;

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