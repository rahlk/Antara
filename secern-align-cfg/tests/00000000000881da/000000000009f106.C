#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char maze[1000][1000];
char lydia_way[2000];
char my_way[2000];
int N;

char find_way(char dir, int x, int y, int step) {
	if (x >= N || y >= N) {
		return 0;
	}
	if (maze[x][y] == dir) {
		return 0;
	}
	//printf("find_way(%c, %d, %d, %d)\n", dir, x, y, step);
	if (x == N - 1 && y == N - 1){
		return 1;
	}


	char way;

	if (maze[x][y] == 'S') {
		dir = 'E';
		way = find_way(dir, x, y + 1, step + 1);
	}
	else if (maze[x][y] == 'E') {
		dir = 'S';
		way = find_way(dir, x + 1, y, step + 1);
	}
	else {
		dir = 'E';
		way = find_way(dir, x, y + 1, step + 1);
		if (way == 0) {
			dir = 'S';
			way = find_way(dir, x + 1, y, step + 1);
		}
	}

	if (way == 1) {
		my_way[step + 1] = dir;
		return 1;
	}

	return 0;

}

int main() { 
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d", &N);
		//lydia way, my way init
		for (int i = 0; i < (N - 1) * 2; i++) {
			lydia_way[i] = my_way[i] = 0;
		}
		//maze init
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				maze[i][j] = 0;
			}
		}

		scanf("%s", lydia_way);

		int p = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				maze[i][j] = lydia_way[p++];
				if (p == (N - 1) * 2) {
					i = N;
					break;
				}

				if (maze[i][j] == 'E') {
					continue;
				}
				else if (maze[i][j] == 'S') {
					i++;
					j--;
					continue;
				}
			}
		}

		if (lydia_way[0] == 'S') {
			my_way[0] = 'E';
			find_way('E', 0, 1, 0);
		}
		else {
			my_way[0] = 'S';
			find_way('S', 1, 0, 0);
		}


		//debug
		/*
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				printf("%c ", maze[i][j]);
			}
			printf("\n");
		}
		*/
		printf("Case #%d: %s\n", t + 1, my_way);

	}

	return 0;
}