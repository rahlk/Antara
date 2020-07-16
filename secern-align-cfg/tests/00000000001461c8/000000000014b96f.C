#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int tt, ii;
	int i, j, tmp, my, d;
	int look = 8, boykott = 6, steps = (20 - look) * boykott;
	int n[11];

	scanf("%d", &tt);
	for(ii = 1; ii <= tt; ii++) {
		for(i = 1; i <= 100; i++) {
			scanf("%d", &tmp);
			if(i <= steps) {
				printf("%d %d\n", look + 1 + (i - 1) / boykott, 100);
				fflush(stdout);
			} else if(i <= steps + look) {
				printf("%d %d\n", i - steps, 0);
				fflush(stdout);
				scanf("%d", &n[i-steps]);
				for(j = 0; j < n[i-steps]; j++) {
					scanf("%d", &tmp);
				}
				if(i == steps + look) {
					my = 1;
					for(j = 1; j <= look; j++) {
						if(n[j] < n[my]) {
							my = j;
						}
					}
				}
			} else if(i <= 99) {
				for(d = 0; ; d++) {
					for(j = 1; j <= look; j++) {
						if(j != my && n[j] <= n[my] + d) {
							printf("%d %d\n", j, 100);
							fflush(stdout);
							n[j]++;
							goto finish;
						}
					}
				}
				finish: i = i;
			} else if(i == 100) {
				printf("%d %d\n", my, 100);
				fflush(stdout);
			}
		}
	}
	return 0;
}
