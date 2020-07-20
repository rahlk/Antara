#include <stdio.h>

int main() {
	int T, P, Q;
	int X[500][2];
	int Y[500][2];
	char dir;
	int tx, ty;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		scanf("%d %d", &P, &Q);
		int size_x = 0;
		int size_y = 0;
		int num_down = 0;
		int num_west = 0;
		for (int j = 0; j < P; j++) {
			scanf("%d %d %c", &tx, &ty, &dir);
			if (dir == 'W' || dir == 'E') {
				int s = 0;
				while (1) {
					if (s == size_x) {
						X[s][0] = tx;
						if (dir == 'W') {
							X[s][1] = 1000;
							num_west++;
						}
						else
							X[s][1] = 1;
						size_x++;
						break;
					}
					else if (tx > X[s][0] && tx < X[s + 1][0]) {
						for (int k = size_x; k > s+1; k--) {
							X[k][0] = X[k - 1][0];
							X[k][1] = X[k - 1][1];
						}
						X[s][0] = tx;
						if (dir == 'W') {
							X[s][1] = 1000;
							num_west++;
						}
						else
							X[s][1] = 1;
						size_x++;
						break;
					}
					else if (tx == X[s][0]) {
						if (dir == 'W') {
							X[s][1] +=1000;
							num_west++;
						}
						else
							X[s][1] ++;

						break;

					}
					else
						s++;
				}
			}


			else if (dir == 'S' || dir == 'N') {

				int s = 0;
				while (1) {

					if (s == size_y) {
						Y[s][0] = ty;
						if (dir == 'S') {
							Y[s][1] = 1000;
							num_down++;
						}
						else
							Y[s][1] = 1;
						size_y++;
						break;
					}
					else if (ty > Y[s][0] && ty < Y[s + 1][0]) {

						for (int k = size_y; k > s+1; k--) {
							Y[k][0] = Y[k - 1][0];
							Y[k][1] = Y[k - 1][1];
						}
						Y[s][0] = ty;
						if (dir == 'S') {
							Y[s][1] = 1000;
							num_down++;
						}
						else
							Y[s][1] = 1;
						size_y++;
						break;
					}
					else if (ty == Y[s][0]) {
						if (dir == 'S') {
							Y[s][1] +=1000;
							num_down++;
						}
						else
							Y[s][1] ++;

						break;

					}
					else
						s++;
				}
			
			}

		}
		int ans_x = 0;
		int ans_y = 0;
		int mx = num_west;
		int my = num_down;
		int cx = num_west;
		int cy = num_down;
		for (int j = 0; j < size_x; j++) {
			cx = cx + X[j][1]%1000 - X[j][1]/1000;
			if(cx> mx){
				if ((j == size_x - 1) || X[j + 1][0] != X[j][0] + 1) {
					mx = cx;
					ans_x = X[j][0] + 1;
				}
				else {
					if (cx - X[j + 1][1] / 1000 > mx) {
						ans_x = X[j][0] + 1;
						mx = cx - X[j + 1][1] / 1000;
					}
				}
			}
		}

		for (int j = 0; j < size_y; j++) {
			cy = cy + Y[j][1]%1000 - Y[j][1]/1000;
			if (cy > my) {
				if ((j == size_y - 1) || Y[j + 1][0] != Y[j][0] + 1) {
					my = cy;
					ans_y = Y[j][0] + 1;
				}
				else {
					if (cy - Y[j + 1][1] / 1000 > my) {
						ans_y = Y[j][0] + 1;
						my = cy - Y[j + 1][1] / 1000;
					}
				}
			}
			

		}
		printf("Case #%d: %d %d\n", i, ans_x, ans_y);
	}
	return 0;
}