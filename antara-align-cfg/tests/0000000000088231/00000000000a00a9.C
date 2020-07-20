#include <stdio.h>

int main() {
	// your code goes here
	int tests;
	int n, temp, rem;
	int mul = 1, sum;
	int t;
	
	scanf("%d", &tests);
	
	for (t=1; t<=tests; ++t) {
		scanf("%d", &n);
		
		temp = n;
		sum = 0;
		mul = 1;
		while (temp > 0) {
			rem = temp % 10;
			
			if (rem == 4) {
				sum += mul;
			}
			
			mul *= 10;
			temp /= 10;
		}
		
		printf("Case #%d: %d %d\n", t, n-sum, sum);
	}

	return 0;
}