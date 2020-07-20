#include <stdio.h>
int num, CH_NUM, a, b, c, soup, flag;
int main() {
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &CH_NUM);
		a = CH_NUM / 2;
		b = CH_NUM - a;
		while (1) {
			flag = 0;
			c = a;
			while (c > 0) {
				soup = c % 10;
				c /= 10;
				if (soup == 4) {
					flag = 1;
					break;
				}
			}
			c = b;
			while (c > 0 && flag == 0) {
				soup = c % 10;
				c /= 10;
				if (soup == 4) {
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				break;
			b /= 2;
			a = CH_NUM - b;
		}
		printf("Case #%d: %d %d\n", i + 1, a, b);
	}
}