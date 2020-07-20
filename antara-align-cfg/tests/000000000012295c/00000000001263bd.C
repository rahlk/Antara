#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t;	//test cases
	int P;	//N people
	int Q;	//maximum grid dim
	int x, y;
	int maxX;
	int maxY;
	int bestX;
	int bestY;
	int j;
	char dir;	//N, S, E, W
	int spacex[100001] = { 0 };
	int spacey[100001] = { 0 };

	scanf("%d", &t);

	for (int i = 1; i <= t; i++) {
		printf("Case #%d: ", i);
		fflush(stdout);

		for (int k = 0; k <= 100000; k++) {
			spacex[k] = 0;
			spacey[k] = 0;
		}
		bestX = 0;
		bestY = 0;
		maxX = -1;
		maxY = -1;

		scanf("%d", &P);
		scanf("%d", &Q);
		for (int k = 0; k < P; k++) {
			scanf("%d", &x);
			fflush(stdout);
			scanf("%d", &y);
			fflush(stdout);
			scanf("%c", &dir);
			fflush(stdout);
			while (dir == ' ' || dir == '\n')
				scanf("%c", &dir);
			
			if (dir == 'N') {
				for (j = y + 1; j <= Q; j++) {
					spacey[j]++;
				}
			}
			else if (dir == 'S') {
				for (j = y - 1; j >= 0; j--) {
					spacey[j]++;
				}
			}
			else if (dir == 'E') {
				for (j = x + 1; j <= Q; j++) {
					spacex[j]++;
				}
			}
			else if (dir == 'W') {
				for (j = x - 1; j >= 0; j--) {
					spacex[j]++;
				}
			}
		}
		
		for (int k = 0; k <= Q; k++) {
			if (spacex[k] > maxX) {
				maxX = spacex[k];
				bestX = k;
			}

			if (spacey[k] > maxY) {
				maxY = spacey[k];
				bestY = k;
			}

		}


		printf("%d %d\n", bestX, bestY);
		fflush(stdout);

	}

	return 0;
}