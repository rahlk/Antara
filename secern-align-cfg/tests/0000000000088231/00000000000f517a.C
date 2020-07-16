#include <stdio.h>


static int has4(int x)
{
	if (x > 1000000000) {
		if ((x / 1000000000) == 4)
			return 1;
		x %= 1000000000;
	}

	if (x > 100000000) {
		if ((x / 100000000) == 4)
			return 1;
		x %= 100000000;
	}
	
	if (x > 10000000) {
		if ((x / 10000000) == 4)
			return 1;
		x %= 10000000;
	}
	
	if (x > 1000000) {
		if ((x / 1000000) == 4)
			return 1;
		x %= 1000000;
	}

	if (x > 100000) {
		if ((x / 100000) == 4)
			return 1;
		x %= 100000;
	}	

	if (x > 10000) {
		if ((x / 10000) == 4)
			return 1;
		x %= 10000;
	}	

	if (x > 1000) {
		if ((x / 1000) == 4)
			return 1;
		x %= 1000;
	}	
	
	if (x > 100) {
		if ((x / 100) == 4)
			return 1;
		x %= 100;
	}	

	if (x > 10) {
		if ((x / 10) == 4)
			return 1;
		x %= 10;
	}	
	
	if (x == 4)
		return 1;
	
	return 0;
}

void solve(int x, int *a, int *b)
{
	int j, k;
	
	for (j = 1; j < x; j++) {
		k = x - j;
		
		if (has4(k) || has4(j)) {
			//printf("%d %d\n", k, j);
			continue;
		}
		
		*a = j;
		*b = k;
		break;
	}
}

int main(int argc, char **argv)
{
	int i, N, x, a, b;

	scanf("%d", &N);
	for (i=1; i<=N; i++) {
		scanf("%d", &x);
		solve(x, &a, &b);
		printf("Case #%d: %d %d\n", i, a, b);
	}

	return 0;
}
