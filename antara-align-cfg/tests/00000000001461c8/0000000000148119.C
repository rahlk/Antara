#include <stdio.h>


int main(void) {
	int t, T;
	int day;
	int num[105];
	int tmp;
	int i;
	int ans;

	scanf("%d", &T);

	for (t = 1; t <= T; t++) {
		while (1) {
			scanf("%d", &day);

			if (day == -1)
				break;

			if (day <= 90) {
				printf("%d %d\n", day % 18, 1);
				fflush(stdout);
			}
			else if (day <= 92) {
				printf("%d %d\n", day - 72, 0);
				fflush(stdout);
				scanf("%d", &num[day - 72]);

				for (i = 0; i < num[day - 72]; i++)
					scanf("%d", &tmp);
			}
			else if (day <= 99) {
				if (num[19] > num[20]) {
					ans = 20;
					printf("19 1\n");
					fflush(stdout);
				}
				else{
					ans = 19;
					printf("20 1\n");
					fflush(stdout);
				}
			}
			else {
				printf("%d 100\n", ans);
				fflush(stdout);
				break;
			}
		}
	}
}