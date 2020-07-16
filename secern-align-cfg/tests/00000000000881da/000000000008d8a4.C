#include<stdio.h>
int N;
short map[25005][25005];
char p[100005];
char sol[100005];
char a[100005];
struct st {
	int i, j;
	char dir;
};
struct st lydia[100000];
struct st me;
int ce, cs;
void init() {
	for (int i = 0; i < 1001; i++) {
		lydia[i].i = 0;
		lydia[i].j = 0;
	}
	me.i = 0, me.j = 0;
}
void input() {
	scanf("%d", &N);
	for (int i = 0; i < 2*N-2; i++) {
		scanf(" %c", &p[i]);
		lydia[i].dir = p[i];
		if (p[i] == 'S') {
			lydia[i + 1].i = lydia[i].i + 1;
			lydia[i + 1].j = lydia[i].j;
		}
		else {
			lydia[i + 1].j = lydia[i].j + 1;
			lydia[i + 1].i = lydia[i].i;
		}
	}
}
void func(int node,int ce,int cs) {

	if (node!=0&&lydia[node].i == me.i&&lydia[node].j == me.j&&lydia[node-1].dir==me.dir) {
		return;
	}
	if (ce > N-1 || cs > N-1) return;
	if (node == 2 * N - 2) {
		for (int i = 0; i < 2 * N - 2; i++) {
			sol[i] = a[i];
		}
		return;
	}
	
	a[node] = 'E';
	me.j++;
	me.dir = 'E';
	func(node+1,ce+1,cs);
	me.j--;
	a[node] = 'S';
	me.i++;
	me.dir = 'S';
	func(node+1,ce,cs+1);
	me.i--;
	
	
}
int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {

		input();
		func(0,0,0);
		printf("Case #%d: ", i + 1);
		for (int k = 0; k < 2*N-2; k++) {
			printf("%c", sol[k]);
		}
		printf("\n");
		init();
	}
}