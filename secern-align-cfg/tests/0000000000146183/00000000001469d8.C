#include <stdio.h>
#include <stdlib.h>

struct diff {
	long long dx, dy;
};

struct diff d[80000];

static int cmp(const void *p1, const void *p2) {
	const struct diff *d1, *d2;
	long long s;

	d1 = p1;
	d2 = p2;
	s = (d1->dx * d2->dy - d2->dx * d1->dy);
	if(s < 0) {
		return -1;
	}
	if(s > 0) {
		return 1;
	}
	return 0;
}

#define ABS(X) (((X) > 0) ? (X) : -(X))

int main(void) {
	int tt, ii;
	int n, i, j, k, l;
	long long x[400], y[400];

	scanf("%d", &tt);
	for(ii = 1; ii <= tt; ii++) {
		printf("Case #%d: ", ii);
		scanf("%d", &n);
		for(i = 0; i < n; i++) {
			scanf("%lld%lld", &x[i], &y[i]);
		}
		k = 0;
		for(i = 1; i < n; i++) {
			for(j = 0; j < i; j++) {
				if(x[i] >= x[j] && y[i] >= y[j]) continue;
				if(x[i] <= x[j] && y[i] <= y[j]) continue;
				d[k].dx = ABS(x[i] - x[j]);
				d[k].dy = ABS(y[i] - y[j]);
				k++;
			}
		}
		qsort(d, k, sizeof(*d), cmp);
		l = (k > 0) ? 2 : 1;
		for(i = 1; i < k; i++) {
			if(cmp(&d[i], &d[i-1]) != 0) {
				l++;
			}
		}
		printf("%d\n", l);
	}
	return 0;
}
