#include <stdio.h>

int solve(void)
{
    int i, n;
    char buf[50176];

    if (scanf("%d%s", &n, buf) != 2)
        return -1;

    n = 2*n - 2;

    for (i = 0; i < n; i++)
        switch(buf[i]) {
            case 'E':
                buf[i] = 'S';
                break;
            case 'S':
                buf[i] = 'E';
                break;
            default:
                return -1;
        }

    printf("%s", buf);

    return 0;
}

int main(void)
{
    int i, t;

    if (!scanf("%d", &t))
        return 1;

    for (i = 1; i <= t; i++) {
        printf("Case #%d: ", i);

        if (solve() < 0)
            return 1;

        printf("\n");
    }
}
