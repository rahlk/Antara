#include <stdio.h>

int pool[105];
int v[22][105];
int list[22];

int main() {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		int day;
		int winv = 1;
		int V;
		int lcnt = 0;
		for (int i = 0; i <= 100; i++) {
			pool[i] = 0;
			for (int j = 0; j <= 20; j++) v[j][i] = 0;
		}
		for (int j = 0; j <= 20; j++) list[j] = 0;

		while (1) {
			scanf("%d", &day);
			if (day == 100) {
				if (v[list[10]][0] > v[list[11]][0]) printf("%d 100\n", list[10]);
				else printf("%d 100\n", list[11]);
				fflush(stdout);
				scanf("%d", &V);
				break;
			}
			else if (day <= 60) {
				V = day % 10;
				if (!V) V = 10;
				printf("%d %d\n", V, V);
				fflush(stdout);
			}
			else if (day <= 70) {
				V = day - 50;
				printf("%d %d\n", V, 0);
				fflush(stdout);
				scanf("%d", &v[V][0]);
				for (int i = 1; i <= v[V][0]; i++) {
					scanf("%d", &v[V][i]);
					pool[v[V][i]] = 1;
				}
			}
			else if (day <= 80) {
				V = (day % 5) + 5;
				printf("%d %d\n", list[V], V + 10);
				fflush(stdout);
			}
			else if (day <= 85) {
				V = list[day%5];
				printf("%d %d\n", V, 0);
				fflush(stdout);
				scanf("%d", &v[V][0]);
				for (int i = 1; i <= v[V][0]; i++) {
					scanf("%d", &v[V][i]);
					pool[v[V][i]] = 1;
				}
			}
			else if (day <= 93) {
				V = (day % 3) + 12;
				printf("%d %d\n", list[V], V + 10);
				fflush(stdout);
			}
			else if (day <= 95) {
				V = list[(day % 3) + 10];
				printf("%d %d\n", V, 0);
				fflush(stdout);
				scanf("%d", &v[V][0]);
				for (int i = 1; i <= v[V][0]; i++) {
					scanf("%d", &v[V][i]);
					pool[v[V][i]] = 1;
				}
			}
			else if (day <= 99) {
				if (v[list[10]][0] > v[list[11]][0]) printf("%d %d\n", list[10], 20);
				else printf("%d %d\n", list[11], 20);
				fflush(stdout);
			}

			if (day == 85) {
				int c = 0;
				while (lcnt < 15) {
					for (int i = 0; i < 10; i++) {
						if (v[list[i]][0] == c) {
							list[lcnt] = i;
							lcnt++;
						}
					}
					c++;
				}
			}
			else if (day == 70) {
				int c = 0;
				while (lcnt < 10) {
					for (int i = 20; i > 10; i--) {
						if (v[i][0] == c) {
							list[lcnt] = i;
							lcnt++;
						}
					}
					c++;
				}
			}
		}
	}
	return 0;
}