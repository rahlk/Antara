#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	// printf("Started running");
	int t;
	int n, i, j, n_digits, n_copy;
	int a, b;
	scanf("%d", &t);
	for(int ti = 1; ti <= t; ++ti) {
		scanf("%d", &n);
		n_copy = n;
		a = b = 0;
		n_digits = floorf(log10f(n)) + 1;
		for(i = 0; i < n_digits; ++i) {
			j = n_copy % 10;
			if(j != 4) {
				a = (j * pow(10, i)) + a;
			}
			else {
				a = (3 * pow(10, i)) + a;
				b += pow(10, i);
			}
			n_copy /= 10;
		}
		printf("Case #%d: %d %d\n", ti, a, b);
	}

	return 0;
}