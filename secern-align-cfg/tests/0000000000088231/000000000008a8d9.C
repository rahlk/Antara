#include<stdio.h>
int N;
int A, B;
int a[101];
int b[101];
int n[101];
int da, db, dn;
void init() {
	A = 0, B = 0;
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
	int is_even;
	if (N % 2 == 0) is_even = 0;
	else is_even = 1;
	for (int i = N/2+is_even; i < N; i++) {
	
		for (int j = N/2; j>0; j--) {
			if (i == j) continue;
			
			if (i + j > N) continue;
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
				break;
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
		init();
	}
}