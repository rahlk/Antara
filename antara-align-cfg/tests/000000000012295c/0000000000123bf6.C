#include <stdio.h>
#include <memory.h>

#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3

int P, Q;
typedef struct _p {
	int x;
	int y;
	int dir;
}Person;

Person arr[505];

int x[100005];
int y[100005];

int main(void) {
	int t, T;
	int i, j;
	char c;
	int ansx, ansy;
	int max;

	scanf("%d", &T);

	for (t = 1; t <= T; t++) {
		memset(x, 0, sizeof(x));
		memset(y, 0, sizeof(y));
		scanf("%d%d", &P, &Q);

		for (i = 1; i <= P; i++) {
			scanf("%d %d %c", &arr[i].x, &arr[i].y, &c);

			if (c == 'N') {
				for (j = arr[i].y + 1; j <= Q; j++)
					y[j]++;
			}
			else if (c == 'S') {
				for (j = arr[i].y - 1; j >= 0; j--)
					y[j]++;
			}
			else if (c == 'E') {
				for (j = arr[i].x + 1; j <= Q; j++)
					x[j]++;
			}
			else if (c == 'W') {
				for (j = arr[i].x - 1; j >= 0; j--)
					x[j]++;
			}
			else
				printf("Error on scan\n");
		}

		ansx = 0;
		for (i = 0; i <= Q; i++) {
			if (x[ansx] < x[i])
				ansx = i;
		}

		ansy = 0;
		for (i = 0; i <= Q; i++) {
			if (y[ansy] < y[i])
				ansy = i;
		}

		printf("Case #%d: %d %d\n", t, ansx,ansy);
	}
}