#include <stdio.h>

int main() {
	int t, tt, i, j;
	char n[101], d[101];
	scanf("%d", &tt);
	for (t = 1; t <= tt; t++) {
		scanf("%s", n);
		int f = 0;
		for (j = i = 0; n[i]; i++) {
			if (n[i] == '4') {
				f = 1;
				n[i]--;
				d[j++] = '1';
			} else if (f) d[j++] = '0';
		}
		if (!f) d[j++] = '0';
		d[j] = '\0';
		printf("Case #%d: %s %s\n", t, n, d);
	}
}
