#include<stdio.h>
#include<stdlib.h>

int main() {
	int T;
	int x_coor[10010], y_coor[10010];
	for (int i = 0; i < 10010; i++) {
		x_coor[i] = 0;
		y_coor[i] = 0;
	}
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int P,SQUA;
		scanf("%d %d", &P, &SQUA);
		for (int j = 0; j < P; j++) {
			int x, y;
			char way;
			scanf("%d %d %c", &x, &y, &way);
			if (way == 'N') {
				for (int k = y+1; k < SQUA + 1; k++) {
					y_coor[k]++;
				}
			}
			else if (way == 'W') {
				for (int k = x - 1; k >= 0 ; k--) {
					x_coor[k]++;
				}
			}
			else if (way == 'S') {
				for (int k = y - 1; k >= 0 ; k--)  {
					y_coor[k]++;
				}
			}
			else if (way == 'E') {
				for (int k = x+1; k < SQUA + 1; k++) {
					x_coor[k]++;
				}
			}
		}
		int maxx = 0, maxxat = 0, maxy = 0, maxyat = 0;
		for (int j = 0; j <= SQUA; j++) {
			if (x_coor[j] > maxx) {
				maxx = x_coor[j];
				maxxat = j;
			}
		}
		for (int j = 0; j <= SQUA; j++) {
			if (y_coor[j] > maxy) {
				maxy = y_coor[j];
				maxyat = j;
			}
		}
		
		printf("Case #%d: %d %d\n", i+1,maxxat, maxyat);
	}
}