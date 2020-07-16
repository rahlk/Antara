#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
char p[100001];
char p2[100001];

int main(int argc, char const *argv[]) {
	int tc, t;
	int i;

	scanf("%d", &t);
	tc = 0;
	while(tc++ < t) {
		scanf("%d", &n);
		scanf("%s", p);
		i = 0;
		while(p[i]) {
			p2[i] = (p[i] == 'E') ? 'S' : 'E';
			i++;
		}
		p2[i] = 0;
		printf("Case #%d: %s\n", tc, p2);
	}
	return 0;
}