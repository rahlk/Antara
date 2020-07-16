#include <stdio.h>
#include <stdlib.h>
int process(int i)
{
    char s[100000];
    int n;
    long j;
    scanf("%d", &n);
    scanf("%s", &s);
    for (j = 0; s[j] != '\0'; j++) {
        if (s[j]=='E') s[j] = 'S';
        else s[j] = 'E';
    }

printf("Case #%d: %s\n", i, s);
return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
		process(i);
	return 0;
}
