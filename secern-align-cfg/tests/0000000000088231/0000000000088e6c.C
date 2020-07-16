#include<stdio.h>
int N;
int A, B;
int a[101];
int b[101];
int n[101];
int da, db, dn;
void init() {
	for (int i = 0; i < 101; i++) {
		a[i] = 0, b[i] = 0, n[i] = 0;
	}
	da = 0, db = 0, dn = 0;
}
void input() {
	int t;
	scanf("%d", &N);
	t = N;
	while (t > 0) {
		dn++;
		t  /= 10;
	}
}
void func() {
	int t = 0;
	int flag=0;
	for (int i = 0; i < 1000000000; i++) {
		if (i >= N) break;
		for (int j = 0; j < 1000000000; j++) {
			
			if (j >= N)break;
			if (i + j > N) break;
			if (i + j == N) {	//합이 N일경우
				flag = 0;
				t = i;
				while (t > 0) {
					if (t % 10 == 4) {
						flag = 1;
						break;
					}
					t /= 10;
				}
				t = j;
				while (t > 0) {
					if (t % 10 == 4) {
						flag = 1;
						break;
					}
					t /= 10;
				}
				if (flag == 0) {
					A = i, B = j;
					return;
				}
			}
		}
	}
}
int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		input();
		func();
		printf("Case #%d: %d %d\n", i + 1, A, B);
	}
}
