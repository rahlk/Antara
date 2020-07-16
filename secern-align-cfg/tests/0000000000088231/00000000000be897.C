
#include <stdio.h>
#include <math.h>

int checkNum(int a);

int main(void) {
	int t = 0, n = 0, a = 0, b = 0, cnt = 0;

	scanf("%d", &t);
	getchar();

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		getchar();
		for (cnt = 0; ; cnt++) {
			int tmp = pow(10, cnt);
			if ((n %(tmp*10)) / tmp == 4)
				break;
		}
		for (int j = 0; ; j++) {
			a = pow(10, cnt ) + j;
			b = n - a;
			if (checkNum(a) == 0 && checkNum(b) == 0)
				break;
		}

		printf("Case #%d: %d %d\n", i + 1, a, b);
	}
}

int checkNum(int a) {
	int dis = 0, div = 0;
	for (int i = 1; ; i*=10) {
		if (a%i == a)
			break;
		if ((a % (i * 10)) / i == 4) {
			dis = 1;
			break;
		}

	}
	return dis;
}