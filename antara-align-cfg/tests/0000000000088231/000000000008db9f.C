#include <stdio.h>
#include <stdlib.h>
int process(int i)
{
	char n[101];
	char r[101];
    int j;
	scanf("%s", &n);
	for (j = 0; n[j] != '\0'; j++) {
		if (n[j] == '4') {
			n[j] = '3';
			r[j] = '1';
		} else
			r[j] = '0';
	} r[j] = '\0';

    char *s;
    s = r;
    while (*s && *s == '0') s++; 
    if (*s) {
	printf("Case #%d: %s %s\n", i, n, s);
    return 0;}
    printf("Case #%d: %s 0\n", i, n); return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
		process(i);
	return 0;
}
