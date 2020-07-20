#include <stdio.h>
#include <memory.h>

int W;
long long ans[10];

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
				break;

			ans[i] = resv - ans[i - 1];

			if (i == 6) {
				ans[1] = ans[1] - ans[2] - ans[3] - ans[4] - ans[5] - ans[6];
			}


			for (j = 1; i <= 6; j++)
				printf("%d ", ans[j]);

			printf("\n");
			fflush(stdout);

			scanf("%lld", &resv);

			if (resv == 1)
				break;
		}
	}

	return 0;
}