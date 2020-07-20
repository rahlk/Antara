#include <stdio.h>

void find_pairs(unsigned int n, unsigned int *p1, unsigned int *p2)
{
    unsigned int tmp = n, m = 1, digit;

    *p1 = 0;
    *p2 = 0;

    while (tmp) {
        digit = tmp % 10;
        if (digit == 4) {
            digit--;
        }

        *p1 += (digit * m);

        m *= 10;
        tmp /= 10;
    }

    *p2 = n - (*p1);

    return;
}

int main() {
    int i, T;

    scanf("%d", &T);

    for (i = 1; i <= T; i++) {
        unsigned int N, p1, p2;

        scanf("%d", &N);

        find_pairs(N, &p1, &p2);

        printf("Case #%d: %d %d\n", i, p1, p2);
    }

    return 0;
}