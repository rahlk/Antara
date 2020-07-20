#include <stdio.h>

int a1[100], a2[100];

int main() {
	int T, N[100];

	
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
		scanf("%d", &N[i]);

	for (int i = 0; i < T; i++) {
		for (int j = 1; N[i]!=0; j *= 10) {
			if (N[i] % 2) {
				N[i] -= 1; a2[i] += j;
			}
			if (N[i] % 10 == 8) {
				a1[i] += j; a2[i] += 7 * j;
			}
			else {
				a1[i] += N[i] % 10 / 2 * j;
				a2[i] += N[i] % 10 / 2 * j;
			}
			N[i] /= 10;
		}
		if (a1[i] == 0)
			if (a2[i] % 10 == 5){
				a1[i]+=2; a2[i]-=2;
			}
			else {
				a1[i] += 1; a2[i] -= 1;
			}
	}

	for (int i = 0; i < T; i++) {
		printf("Case #%d: %d %d\n", i + 1, a1[i], a2[i]);
	}

	return 0;
}