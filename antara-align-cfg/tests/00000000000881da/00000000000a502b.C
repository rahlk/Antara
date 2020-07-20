#if 01

#include<stdio.h>

#define MAXN 1000

int visit[MAXN][MAXN][2];
int dy[2] = { 0, 1 }, dx[2] = { 1, 0 };
char ans[2 * MAXN - 1], rival[2 * MAXN - 1];
char str[2] = { 'E', 'S' };
int n;
int find;

void checkVisit(void){
	int y = 0, x = 0, i = 0;
	while (rival[i]){
		if (rival[i] == 'E'){
			visit[y][x][0] = 1;
			y += dy[0]; x += dx[0];
		}
		else{
			visit[y][x][1] = 1;
			y += dy[1]; x += dx[1];
		}
		i++;
	}
}
void dfs(int y, int x, int index){
	if (find)return;
	if (y == n - 1 && x == n - 1){
		find = 1; return;
	}
	//printf("dfs(%d %d %d)\n", y, x, index);
	for (int i = 0; i < 2; i++){
		if (visit[y][x][i] || find)continue;
		int ny = y + dy[i]; int nx = x + dx[i];
		if (ny >= n || nx >= n)continue;
		ans[index] = str[i];
		dfs(ny, nx, index + 1);
	}
}
int main(void){

	int T, tc;
	scanf("%d", &T);
	for (tc = 1; tc <= T; tc++){
		//input
		scanf("%d %s", &n, rival);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				for (int k = 0; k < 2; k++){
					visit[i][j][k] = 0;
				}
			}
		}
		ans[2 * n - 2] = 0; find = 0;
		//getSol
		checkVisit();
		dfs(0, 0, 0);
		//print
		printf("Case #%d: %s\n", tc, ans);
		//init
	}


	return 0;
}

#endif