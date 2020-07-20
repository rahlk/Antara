#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
	int tc, t;
	char n[101], n1[101], n2[101];
	int i;

	scanf("%d", &t);
	tc = 0;
	while(tc++ < t) {
		scanf("%s", n);
		i = 0;
		while(n[i]) {
			if(n[i] == '4') {
				n1[i] = '3';
				n2[i] = '1';
			} else {
				n1[i] = n[i];
				n2[i] = '0';
			}
			i++;
		}
		n1[i] = n2[i] = 0;
		printf("Case #%d: %s %s\n", tc, n1, n2);
	}
	return 0;
}