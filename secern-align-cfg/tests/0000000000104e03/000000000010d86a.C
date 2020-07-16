#include <stdio.h>

int res25[10][2] = {
	{2, 3}, {1, 1}, {2, 4}, {1, 2}, {2, 5},
	{1, 3}, {2, 1}, {1, 5}, {2, 2}, {1, 4}};
int res34[12][2] = {
	{1,1},{2,3},{3,1},
	{1,2},{2,4},{3,2},
	{1,3},{2,1},{3,3},
	{1,4},{2,2},{3,4}};
int res45[20][2] = {
	{2, 3}, {1, 1}, {2, 4}, {1, 2}, {2, 5},
	{1, 3}, {2, 1}, {1, 5}, {2, 2}, {1, 4},
	{4, 3}, {3, 1}, {4, 4}, {3, 2}, {4, 5},
	{3, 3}, {4, 1}, {3, 5}, {4, 2}, {3, 4}
};
int res55[25][2] = {
	
	{2,2},{4,1},{3,3},{1,4},{3,5},
	{5,4},{4,2},{2,1},{1,3},{2,5},
	{4,4},{5,2},{3,1},{1,2},{2,4},
	{4,5},{5,3},{3,2},{1,1},{2,3},
	{1,5},{3,4},{5,5},{4,3},{5,1}
};

int main(void) {

	int T, t, R, C, i;
	
	scanf ("%d", &T);
	
	for (t = 1; t <= T; t++) {
		
		scanf ("%d %d", &R, &C);
		printf ("Case #%d: ", t);
		
		if (R == 2 && C == 5) {
			
			puts ("POSSIBLE");
			for (i = 0; i < R * C; i++) printf ("%d %d\n", res25[i][0], res25[i][1]);
		}
		else if (R == 5 && C == 2) {
			
			puts ("POSSIBLE");
			for (i = 0; i < R * C; i++) printf ("%d %d\n", res25[i][1], res25[i][0]);
		}
		else if (R == 3 && C == 4) {
			
			puts ("POSSIBLE");
			for (i = 0; i < R * C; i++) printf ("%d %d\n", res34[i][0], res34[i][1]);
		}
		else if (R == 4 && C == 3) {
			
			puts ("POSSIBLE");
			for (i = 0; i < R * C; i++) printf ("%d %d\n", res34[i][1], res34[i][0]);
		}
		else if (R == 4 && C == 5) {
			
			puts ("POSSIBLE");
			for (i = 0; i < R * C; i++) printf ("%d %d\n", res45[i][0], res45[i][1]);
		}
		else if (R == 5 && C == 4) {
			
			puts ("POSSIBLE");
			for (i = 0; i < R * C; i++) printf ("%d %d\n", res45[i][1], res45[i][0]);
		}
		else if (R == 5 && C == 5) {
			
			puts ("POSSIBLE");
			for (i = 0; i < R * C; i++) printf ("%d %d\n", res55[i][0], res55[i][1]);
		}
		else puts ("IMPOSSIBLE");
	}
	
	
	
	return 0;
}
