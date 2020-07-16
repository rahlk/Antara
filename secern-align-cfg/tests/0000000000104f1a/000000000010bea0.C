#include <stdio.h>
#include <memory.h>

int N, M;
int pos[1000005];


int main(void) {
	int t, T;
	int i, j;
	int num;
	int sum;
	int max;
	int input;

	scanf("%d", &T);

	for (t = 1; t <= T; t++) {
		scanf("%d%d", &N, &M);
		memset(pos, 0, sizeof(pos));

		for (i = 1; i <= N; i++) {
			for (j = 1; j <= 18; j++)
				printf("%d ", 19 - i);

			printf("\n");
			fflush(stdout);

			sum = 0;
			for (j = 1; j <= 18; j++) {
				scanf("%d", &input);
				sum += input;
			}

			sum = sum % (19 - i);
			num = sum;
			while (num <= M) {
				pos[num]++;
				sum += (19 - i);
			}

			max = 0;
			for (i = 1; i <= M; i++) {
				if (pos[max] < pos[i])
					max = i;
			}

			printf("%d\n", max);
			fflush(stdout);

			scanf("%d", &input);

			if (input == 1)
				break;
		}

	}
}