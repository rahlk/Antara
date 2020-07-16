#include <stdio.h>

int search(int row, int col, int length);
int map[1001][1001];
int DP[1001][1001];
char my_footprints[2002];

int main()
{

	int TC;
	int tc;
	int N;
	char lydia_footprints[2002];
	int i, j;
	int cnt;
	int ret;
	

	scanf("%d", &TC);
	for (tc = 1; tc <= TC; tc++) {
		scanf("%d", &N);
		//for (i=0; i < 2*N - 2; i++) 
		//	scanf("%c", &lydia_footprints[i]);
			scanf("%s", lydia_footprints);

		lydia_footprints[2*N - 2] = '\0';
#if 0
		printf("N=%d\n", N);
		printf("%s\n", lydia_footprints);
#endif

		for (i=0; i<N; i++)
			for (j=0; j<N; j++) {
				map[i][j] = 0;
				DP[i][j] = 0;
			}
		for (i=0; i<2*N; i++)
			my_footprints[i] = '\0';

		/* initialize map with lydia footprints */
		map[0][0] = 1;
		i = j = 0;
		for (cnt = 0; cnt < 2*N - 2; cnt++) {
			if (lydia_footprints[cnt] == 'S')
				map[++i][j] = 1;
			else
				map[i][++j] = 1;
		}	

		ret = search(0, 0, N);
		if (ret != 0) {
			/* do exception */
		}

		/* print my footprints */
		printf("Case #%d: %s\n", tc, my_footprints);

	}
	
	
	return 0;
}
int search(int row, int col, int length)
{
	int i;
	int ret;
	ret = 0;

	if (DP[row][col] == 1)
		return 0;

	DP[row][col] = 1;

	if (row == length -1 && col == length - 1) {
		return 1;
	}
	
	if (row < length - 1) {
		if (!(map[row][col] == 1 && map[row + 1][col] == 1)) {
			my_footprints[row+col] = 'S';
			ret = search(row+1, col, length);
			if (ret == 1)
				return ret;
		}
	}

	if (col < length - 1) {
		if (!(map[row][col] == 1 && map[row][col+1] == 1)) {
			my_footprints[row+col] = 'E';
			ret = search(row, col+1, length);
			if (ret == 1)
				return ret;
		}
	}

	return 0;
}

