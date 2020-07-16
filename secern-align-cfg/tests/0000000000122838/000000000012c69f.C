#include <stdio.h>
#include <stdlib.h>

int c[100005], d[100005];

int main(void) {
	int tt, ii, n, k, i, a, b, maxc, maxd;
	long long g;

	scanf("%d", &tt);
	for(ii = 1; ii <= tt; ii++) {
		printf("Case #%d: ", ii);
		scanf("%d%d", &n, &k);
		for(i = 1; i <= n; i++) {
			scanf("%d", &c[i]);
		}
		for(i = 1; i <= n; i++) {
			scanf("%d", &d[i]);
		}
		g = 0;
		for(a = 1; a <= n; a++) {
			maxc = maxd = 0;
			for(b = a; b <= n; b++) {
				if(c[b] > maxc) maxc = c[b];
				if(d[b] > maxd) maxd = d[b];
				if(maxc <= maxd + k && maxd <= maxc + k) g++;
			}
		}
		printf("%lld\n", g);
	}
	return 0;
}
