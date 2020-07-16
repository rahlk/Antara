#include <stdio.h>
#include <math.h> 

int main() {
	int T; 
	int i; 

	scanf("%d", &T);
	for (i = 0; i<T; i++) {
		long long N; 
		scanf("%lld", &N);

		long long t = N;
		long long a = 0; 
		long long b = 0; 

		int pv[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 

		int c = 0;
		while (t != 0) {
			int r; 
			r = t%10;
			if (r == 4) {
				pv[c] = 1;
			}
			t = t/10;
			c++;
		}

		int j; 
		for (j=0;j<100;j++) {
			b = b + pow(10, j) * pv[j];
		}

		a = N - b;

		printf("Case #%d: %lld %lld\n", i+1, a, b);
	}
}
