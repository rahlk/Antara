#ifndef _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS 
#endif 

#include <stdio.h>

char sen[1030];
char rec[1030];
int d[1030];

int main() {
	int T, N, B ,F;
	scanf("%d", &T);

	for (int t = 1; t <= T; t++) {
		int i, b = 0;
		scanf("%d %d %d", &N, &B, &F);
		for (int i = 0; i < N; i++) d[i] = 0;

		for (i = 16; i > 0; i >>= 1) {
			char c = '0';
			int cnt = 0;
			for (int j = 0; j < N; j++) {
				sen[j] = c;
				cnt++;
				if (cnt == i) {
					cnt = 0;
					if (c == '0') c = '1';
					else c = '0';
				}
			}
			sen[N] = 0;

			printf("TEST_STORE %s\n", sen);
			fflush(stdout);
			scanf("%s", rec);

			c = '0';
			cnt = 0;
			b = 0;
			for (int j = 0; j < N; j++) {
				if (rec[j-b] != c) b++;
				if (d[j] > b) b = d[j];
				else d[j] = b;
				cnt++;
				if (cnt == i) {
					cnt = 0;
					if (c == '0') c = '1';
					else c = '0';
				}
			}
		}

		b = 1;
		i = 0;
		for (; i < N; i++) {
			if (b == B) break;
			if (d[i] == b) {
				printf("%d ", i);
				b++;
			}
		}
		while (d[i] != B) i++;
		printf("%d\n", i);
		fflush(stdout);		
		scanf("%d", &b);
		if (b != 1) return 0;
	}
	return 0;
}
