#include <stdio.h>
#include <stdlib.h>

struct frac {
	long long x, y;
};

static int cmp(const void *p1, const void *p2) {
	const struct frac *d1, *d2;
	long long s;

	d1 = p1;
	d2 = p2;
	s = (d1->x * d2->y - d2->x * d1->y);
	if(s < 0) {
		return -1;
	}
	if(s > 0) {
		return 1;
	}
	return 0;
}

#define ABS(X) (((X) > 0) ? (X) : -(X))

static struct frac inv(struct frac f) {
	struct frac erg;

	erg.x = f.y;
	erg.y = f.x;
	return erg;
}

static struct frac best(struct frac lower, struct frac upper) {
	long long l;
	struct frac erg;

	l = lower.x / lower.y + 1; // smallest integer larger than lower
	//u = (upper.x - 1) / upper.y; // largest integer smaller than upper
	if(l * upper.y < upper.x) {
		erg.x = l;
		erg.y = 1;
		return erg;
	}
	// we are in interval [l-1,l]
	lower.x -= (l-1) * lower.y;
	upper.x -= (l-1) * upper.y;
	erg = inv(best(inv(upper), inv(lower)));
	erg.x += (l-1) * erg.y;
	return erg;
}

int main(void) {
	int tt, ii;
	int n, i;
	long long x[400], y[400];
	struct frac upper, lower, d;

	scanf("%d", &tt);
	for(ii = 1; ii <= tt; ii++) {
		printf("Case #%d: ", ii);
		scanf("%d", &n);
		for(i = 0; i < n; i++) {
			scanf("%lld%lld", &x[i], &y[i]);
		}
		lower.x = 0;
		lower.y = 1;
		upper.x = 1;
		upper.y = 0;
		for(i = 1; i < n; i++) {
			if(x[i] == x[i-1]) {
				if(y[i] < y[i-1]) {
					goto impossible;
				} else {
					continue;
				}
			}
			if(x[i] < x[i-1]) { // get upper bound on a/b
				if(y[i] <= y[i-1]) {
					goto impossible;
				}
				d.x = y[i] - y[i-1];
				d.y = x[i-1] - x[i];
				if(cmp(&d, &upper) < 0) {
					upper = d;
				}
			}
			if(x[i] > x[i-1]) { // get lower bound on a/b
				if(y[i] >= y[i-1]) {
					continue;
				}
				d.x = y[i-1] - y[i];
				d.y = x[i] - x[i-1];
				if(cmp(&d, &lower) > 0) {
					lower = d;
				}
			}
		}
		if(cmp(&lower, &upper) >= 0) {
			goto impossible;
		}
		d = best(lower, upper);
		printf("%lld %lld\n", d.x, d.y);
		//printf("lower = %lld/%lld\n", lower.x, lower.y);
		//printf("upper = %lld/%lld\n", upper.x, upper.y);
		continue;
		impossible:
		printf("IMPOSSIBLE\n");
	}
	return 0;
}
