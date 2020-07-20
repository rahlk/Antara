#include<stdio.h>
int N;
int L;
int a[101];
char sol[102];
int p[10001];
int p1[10001];
int choose[27];
char c[10001];
int chk[10001];
struct st {
	int n1, n2;
	int result;
};
struct st s[101];
void prime() {
	int cnt = 0;
	p[0] = 1, p[1] = 1;
	for (int i = 2; i*i < 10001; i++) {
		for (int j = i * 2; j <= 10001; j += i) {
			p[j] = 1;
		}
	}
	for (int i = 0; i < 10001; i++) {
		if (p[i] == 0) p1[cnt++] = i;
	}

	
}
void init() {
	for (int i = 0; i < 27; i++) {
		choose[i] = 0;
		
	}
	for (int i = 0; i < 10001; i++) {
		chk[i] = 0;
		c[i] = 0;
	}
}
void input() {
	scanf("%d %d", &N, &L);
	for (int i = 0; i < L; i++) {
		scanf("%d", &a[i]);
	}
}
void sort(int cnt) {
	int t;
	for (int i = 0; i < cnt - 1; i++) {
		for (int j = i + 1; j < cnt; j++) {
			if (choose[i] > choose[j]) {
				t = choose[i];
				choose[i] = choose[j];
				choose[j] = t;
			}
		}
	}
	for (int i = 0; i < cnt; i++) {
		c[choose[i]] = 'A' + i;
	}
}
void func() {
	int cnt = 0;
	for (int i = 0; i < L; i++) {
		for (int k = 0; k < 1229; k++) {
			if (a[i] % p1[k] == 0) {
				if (chk[p1[k]] == 0) {
					
					choose[cnt++] = p1[k];
					chk[p1[k]] = 1;
					if (chk[a[i] / p1[k]] == 0) {
						choose[cnt++] = a[i]/p1[k];
						chk[a[i] / p1[k]] = 1;
					}
					break;
				}

			}
		}
	}
	sort(cnt);
	for (int i = 0; i < L; i++) {
		for (int j = 0; j < cnt; j++) {
			if (a[i] % choose[j] == 0) {
				s[i].n1 = choose[j], s[i].n2 = a[i] / choose[j];
				break;
			}
			
		}
		if (i > 0) {
			if (s[i - 1].n1 == s[i].n1) s[i - 1].result = s[i - 1].n2;
			else if (s[i - 1].n1 == s[i].n2) s[i - 1].result = s[i - 1].n2;
			else if (s[i - 1].n2 == s[i].n1) s[i - 1].result = s[i - 1].n1;
			else if (s[i - 1].n2 == s[i].n2) s[i - 1].result = s[i - 1].n1;
			else printf("err\n");
		}
	}
	s[L-1].result = s[L - 2].result == s[L - 2].n1 ? s[L - 2].n2 : s[L - 2].n1;
	
	s[L].result = s[L - 1].result == s[L - 1].n1 ? s[L - 1].n2 : s[L - 1].n1;
	for (int i = 0; i < L+1; i++) {
		sol[i] = c[s[i].result];
	}
}
int main() {
	int T;
	scanf("%d", &T);
	prime();
	for (int i = 0; i < T; i++) {
		input();



		func();
		printf("Case #%d: ", i + 1);
		for (int k = 0; k < L + 1; k++) {
			printf("%c", sol[k]);
		}
		printf("\n");
		init();
	}
}