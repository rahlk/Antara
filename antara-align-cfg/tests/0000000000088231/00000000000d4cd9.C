#include <stdio.h>

char buf[1000];
char a[1000];
char b[1000];

int main () {
    int case_count;
    scanf("%d", &case_count);
    for(int count = 1; count <= case_count; count++) {
        long long n = 0;
        scanf("%s", buf);
		int i = 0;
		int j = 0;
		for(i = 0; buf[i] != '\0'; i++) {
			if(buf[i] == '4') {
				a[i] = '1';
				b[j] = '3';
				j++;
			} else {
				a[i] = buf[i];
				if (j>0) {
					b[j] = '0';
					j++;
				}
			}
		}
		a[i] = '\0';
		b[j] = '\0';
        printf("Case #%d: %s %s\n", count, a, b);
    }
    return 0;
}
