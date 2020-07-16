#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int deciPow(int num, int n) {
	while (n--) {
		num *= 10;
	}
	return num;
}

void func(int num, int*a, int*b) {
	int cnt = 0;
	while (num > 0) {
		int tmp = num % 10;
		if (tmp == 4) {
			*a += deciPow(1, cnt);
			*b += deciPow(3, cnt);
		}
		else if (tmp / 2 == 4) {
			*a += deciPow(3, cnt);
			*b += deciPow(tmp-3, cnt);
		}
		else if (tmp == 7) {
			*a += deciPow(2, cnt);
			*b += deciPow(5, cnt);
		}
		else {
			*a += deciPow(tmp/2, cnt);
			*b += deciPow(tmp - tmp/2, cnt);
		}
		cnt++;
		num /= 10;
	}
}

int main() {
	int T, n, a, b;
	scanf("%d", &T);
	for(int i=1;i<=T;i++) {
		scanf("%d", &n);
		a = 0, b = 0;
		func(n, &a, &b);
		printf("Case #%d: %d %d\n", i, a, b);
	}
}