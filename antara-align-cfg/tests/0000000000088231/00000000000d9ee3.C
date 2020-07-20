#include <stdio.h>

int main(void)
{
    char buf[128], buf2[128], *p;
    int t, i, j;

    if (!fgets(buf, sizeof(buf), stdin))
        return 1;

    if (!sscanf(buf, "%d", &t))
        return 1;

    for (i = 1; i <= t; i++) {
        if (!fgets(buf, sizeof(buf), stdin))
            return 1;

        for (j = 0; buf[j]; j++)
            if (buf[j] < '0' || buf[j] > '9') {
                buf[j] = '\0';
                break;
            }
            else if (buf[j] == '4')
                buf[j] = buf2[j] = '2';
            else
                buf2[j] = '0';

        buf2[j] = buf[j];

        p = buf2;
        while (*p && *p == '0')
            p++;

        if (p > buf2 && !*p)
            p--;

        printf("Case #%d: %s %s\n", i, buf, p);
    }
    return 0;
}
