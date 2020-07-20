#include <stdio.h>

int map[] = {0, 0, 1, 2, 3, 4, 5, 6, 7, 8};

int main() {
	int T; 
	int i; 

	scanf("%d", &T);
	for (i = 0; i<T; i++) {
		int N; 
		scanf("%d", &N);

		int t = N;
		int a = 0; 
		int b = 0; 

		while (t != 0) {
			int r; 
			r = t%10;
			a = a*10 + map[r];
			t = t/10;
		}

		b = N - a;

		printf("Case #%d: %d %d\n", i+1, a, b);
	}
}
