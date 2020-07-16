#include <stdio.h>

int main() {
	int tt, k;
	char in[123], res[123];
	scanf("%d\n", &tt);
	for (int qq = 1; qq <= tt; qq++) {
		scanf("%s", in);
		for (k = 0; in[k] != '\0'; k++)
			if (in[k] == '4' && (in[k] = '3')) res[k] = '1';
			else res[k] = '0';
		res[k] = '\0';
		for (k = 0; res[k] != '\0' && res[k] == '0'; k++);
		printf("Case #%i: %s %s\n", qq, in, &res[k]);
	}
	return 0;
}
