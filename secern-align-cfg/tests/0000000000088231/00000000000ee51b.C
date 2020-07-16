#include <stdio.h>
#include <math.h>


int main() {
	int T;
	long long N;
	
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		scanf("%lld", &N);
		
		
		long long a = 0, b = 0;
		
		int index = 0;
		
		while(N > 0) {
			int x = N % 10;
			if(x == 4) {
				a += 3 * pow(10, index);
				b += 1 * pow(10, index);
			} else {
				a += x * pow(10, index);
			}
			
			index++;
			N /= 10;
		}
		
		printf("Case #%d: %lld %lld\n", i + 1, a, b);
	}

	return 0;
}
