#include <stdio.h>
#include <math.h>

int check_for_four(unsigned long long k)
{
	int c = 1;
	int ret = 0;
	while (k) {
		if ((k % 10) == 4) {
			ret = c;
			break;
		}
		c++;
		k /= 10;
	}
	return ret;
}

void get_a_b(unsigned long long n, unsigned long long *a,
		unsigned long long *b)
{
	int x = 0;
	int y = 0;
	int diff = 0;
	*a = n - 1;
	*b = 1;

	while (*a && (*b < n)) {
		x = check_for_four(*b);
		if (x)
			goto skip;
		y = check_for_four(*a);
		if (!x && !y)
			break;
		if (x && !y) {
			diff = pow(10, x - 1);
		} else {
			diff = pow(10, y - 1);
		}
		*b += diff;
		*a -= diff;
skip:
		(*a)--;
		(*b)++;
	}
}

int main(void)
{
	int i = 0;
	int ret = -1;
	int tc = -1;

	scanf("%d", &tc);
	if ((tc < 1) || (tc > 100)) {
		fprintf(stderr, "Invalid number of test cases. Aborting.\n");
		goto out;
	}

	for (i = 0; i < tc; i++) {
		unsigned long long a = 0;
		unsigned long long b = 0;
		unsigned long long n = 0;

		scanf("%llu", &n);
		if ((n < 1) || (n > 1000000000)) {
			fprintf(stderr, "Invlaid value of input number.\n");
			goto out;
		}

		get_a_b(n, &a, &b);
		printf("Case #%d: %llu %llu\n", (i + 1), a, b);
	}
	ret = 0;

out:
	return ret;
}
