#include <stdio.h>

int main(void) {
	int t, i, j, sa, sb;
	char n[200], a[200], b[200];

	scanf("%d", &t);
	for(i = 1; i <= t; i++) {
		scanf("%s", n);
		if(n[0] == '1') {
			if(n[1] == '0') {
				a[0] = b[0] = '0';
				a[1] = b[1] = '5';
			} else {
				a[0] = n[0];
				b[0] = '0';
				if(a[1] == '4') {
					a[1]--;
					b[1]++;
				}
				a[1] = '0';
				b[1] = n[1];
				if(b[1] == '4') {
					a[1]++;
					b[1]--;
				}
			}
			j = 2;
		} else {
			j = 0;
		}
		for(; n[j] != '\0'; j++) {
			a[j] = '0' + (n[j] - '0') / 2;
			b[j] = '0' + (n[j] - '0' + 1) / 2;
			if(a[j] == '4' || b[j] == '4') {
				a[j]--;
				b[j]++;
			}
		}
		a[j] = b[j] = '\0';
		for(sa = 0; a[sa] == '0'; sa++);
		for(sb = 0; b[sb] == '0'; sb++);
		printf("Case %d: %s %s\n", i, a+sa, b+sb);
	}
	return 0;
}
