#include <stdio.h>
#include <string.h>


int T, t, P, p, Q;
int x, y;
char d;
int i, j;
int k[100000][100000];
int max, xmax, ymax;

int main(int argc, char** argv) {
	
	scanf("%d", &T);

	//casos
	for (t = 1; t <= T; t++) {
		max = 0;
		for (i = 0; i <= Q; i++)
			for (j = 0; j <= Q; j++) {
				k[i][j] = 0;
			}
		//leo cada caso ****
		scanf("%d", &P);
		scanf("%d", &Q);
		for (p = 0; p < P; p++) {
			scanf("%d", &x);
			scanf("%d", &y);
			scanf(" %c", &d);
			//printf("caso %d: %d %d %c\n", t, x, y, d);
			if (d == 'N') {
				for (i = 0; i <= Q; i++)
					for (j = y + 1; j <= Q; j++) {
						k[i][j]++;
						if (k[i][j] > max) {
							max = k[i][j];
							xmax = i;
							ymax = j;
						} else if (k[i][j] == max) {
							if (i == xmax && j < ymax)
								ymax = j;
							if (i < xmax && j == ymax)
								xmax = i;
						}
					}
			} else if (d == 'S') {
				for (i = 0; i <= Q; i++)
					for (j = 0; j <= y - 1; j++) {
						k[i][j]++;
						if (k[i][j] > max) {
							max = k[i][j];
							xmax = i;
							ymax = j;
						} else if (k[i][j] == max) {
							if (i == xmax && j < ymax)
								ymax = j;
							if (i < xmax && j == ymax)
								xmax = i;
						}
					}
			} else if (d == 'E') {
				for (i = x + 1; i <= Q; i++)
					for (j = 0; j <= Q; j++) {
						k[i][j]++;
						if (k[i][j] > max) {
							max = k[i][j];
							xmax = i;
							ymax = j;
						} else if (k[i][j] == max) {
							if (i == xmax && j < ymax)
								ymax = j;
							if (i < xmax && j == ymax)
								xmax = i;
						}
					}
			} else if (d == 'W') {
				for (i = 0; i <= x - 1; i++)
					for (j = 0; j <= Q; j++) {
						k[i][j]++;
						if (k[i][j] > max) {
							max = k[i][j];
							xmax = i;
							ymax = j;
						} else if (k[i][j] == max) {
							if (i == xmax && j < ymax)
								ymax = j;
							if (i < xmax && j == ymax)
								xmax = i;
						}
					}
			}
		}
		//resuelvo

		printf("Case #%d: %d %d\n", t, xmax, ymax);
	} //siguiente caso
	return (0);

}
