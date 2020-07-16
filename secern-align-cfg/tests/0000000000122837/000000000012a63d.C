#include <stdio.h>
#include <memory.h>

int W;
long long ans[10];
long long server[10];

int main(void) {
	int t, T;
	int i,j;
	long long resv;

	scanf("%d", &T);
	scanf("%d", &W);

	for (t = 1; t <= T; t++) {
		memset(ans, 0, sizeof(ans));
		for (i = 1; i <= W; i++) {
			printf("%d\n", i);
			fflush(stdout);
			scanf("%lld", &resv);

			if (resv == -1)
				return 0;
			else
				server[i] = resv;
			
		}

		ans[1] = (server[6] - 2 * server[3] - 4 * server[2] + 4 * server[1]) / 40;
		ans[2] = -1 * (server[6] - 2 * server[3] - 24 * server[2] + 24 * server[1]) / 20;
		ans[3] = -1 * (server[6] - 12 * server[3] + 6 * server[2] + 4 * server[1]) / 10;
		ans[4] = (-1 * server[6] + 10 * server[4] - 8 * server[3] - 16 * server[2] + 16 * server[1]) / 10;
		ans[5] = -1 * (2 * server[6] - 5 * server[5] + 5 * server[4] -4 * server[3] - 8 * server[2] + 8 * server[1]) / 5;
		ans[6] = (3 * server[6] - 5 * server[5] - 6 * server[3] - 2 * server[2] + 12 * server[1]) / 5;
		

		for (j = 1; j <= 6; j++)
			printf("%lld ", ans[j]);

		printf("\n");
		fflush(stdout);


		scanf("%lld", &resv);

		if (resv == -1)
			return 0;
	}

	return 0;
}