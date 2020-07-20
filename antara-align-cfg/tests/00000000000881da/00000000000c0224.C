#if 01

#include<stdio.h>

#define MAXN 1000

int visit[MAXN][MAXN][2];
int dy[2] = { 0, 1 }, dx[2] = { 1, 0 };
int ansInt[32];
char ans[2 * MAXN - 1], rival[2 * MAXN - 1];
char str[2] = { 'E', 'S' };
int n;
//int find;
typedef struct st{
	int y, x, cnt;
	unsigned int route[32];
}BAG;
BAG Queue[MAXN * MAXN * 5];
int wp, rp;

void In_Queue(int y, int x, int cnt, unsigned int *arr){
	Queue[wp].y = y; Queue[wp].x = x; Queue[wp].cnt = cnt;
	int ceil = cnt / 32;
	for (int i = 0; i <= ceil; i++){
		Queue[wp].route[i] = arr[i];
	}
	wp++;
}
BAG Out_Queue(void){
	return Queue[rp++];
}
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
//void dfs(int y, int x, int index){
//	if (find)return;
//	if (y == n - 1 && x == n - 1){
//		find = 1; return;
//	}
//	//printf("dfs(%d %d %d)\n", y, x, index);
//	for (int i = 0; i < 2; i++){
//		if (visit[y][x][i] || find)continue;
//		int ny = y + dy[i]; int nx = x + dx[i];
//		if (ny >= n || nx >= n)continue;
//		ans[index] = str[i];
//		dfs(ny, nx, index + 1);
//	}
//}
void bfs(int y, int x){
	unsigned int route[32] = { 0 };
	int nx, ny;
	BAG out;
	wp = rp = 0;
	In_Queue(y, x, 0, route);
	while (wp > rp){
		out = Out_Queue();
		for (int i = 0; i < 2; i++){
			if (visit[out.y][out.x][i])continue;
			ny = out.y + dy[i]; nx = out.x + dx[i];
			if (ny >= n || nx >= n)continue;
			int index = out.cnt / 32;
			int offset = out.cnt % 32;
			out.route[index] |= (i << offset);
			if (ny == n - 1 && nx == n - 1){
				int ceil = out.cnt / 32;
				for (int i = 0; i <= ceil; i++){
					ansInt[i] = out.route[i];
				}
				return;
			}
			In_Queue(ny, nx, out.cnt + 1, out.route);
		}
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
		ans[2 * n - 2] = 0;
		//getSol
		checkVisit();
		bfs(0, 0);
		//print
		int ceil = 2 * n - 2;
		for (int i = 0; i < ceil; i++){
			int index = i / 32;
			int offset = i % 32;
			if (ansInt[index] & (1 << offset)){
				ans[i] = 'S';
			}
			else ans[i] = 'E';
		}
		printf("Case #%d: %s\n", tc, ans);
		//init
	}


	return 0;
}

#endif