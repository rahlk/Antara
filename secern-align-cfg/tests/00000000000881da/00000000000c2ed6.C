#include <stdio.h>

int main() {
	int t, tt, n, i;
	char w[50001];
	scanf("%d", &tt);
	for (t = 1; t <= tt; t++) {
		scanf("%d", &n);
		scanf("%s", w);
		for (i = 0; w[i]; i++)
			if (w[i] == 'S') w[i] = 'E';
			else w[i] = 'S';
		printf("Case #%d: %s\n", t, w);
	}
}
