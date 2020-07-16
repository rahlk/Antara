#include <stdio.h>

int main(void)
{
	int t, n, a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		a = n;
		b = 0;
		int transfer = 1; // transfer powers of 10 from a to b to remove "4"s
		while (n > 0) {
			if (n % 10 == 4) {
				a -= transfer;
				b += transfer;
			}
			transfer *= 10;
			n /= 10;
		}
		printf("Case #%d: %d %d\n", i+1, a, b);
	}	
	return 0;
}
