#include <stdio.h>
#include <memory.h>

int T, w;
long long R[6];
long long total;
long long buf;
long long temp = 127;
int flag;

int main()
{
	scanf("%d %d", &T, &w);

	for (int t = 1; t <= T; t++)
	{
		printf("40\n");
		fflush(stdout);
		scanf("%lld", &total);

		buf = (total >> 40);
		R[0] = buf;
		buf = (total & (temp << 20)) >> 20;
		R[1] = buf;
		buf = (total & (temp << 13)) >> 13;
		R[2] = buf;

		printf("200\n");
		fflush(stdout);
		scanf("%lld", &total);

		buf = (total >> 50);
		R[3] = buf;
		buf = (total & (temp << 40)) >> 40;
		R[4] = buf;
		buf = (total & (temp << 33)) >> 33;
		R[5] = buf;

		printf("Case #%d: ", t);
		for (int i = 0; i < 6; i++)
			printf("%lld ", R[i]);
		printf("\n");
		fflush(stdout);
		scanf("%d", &flag);

		if (flag)
			break;
	}

	return 0;
}