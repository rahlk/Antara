#include <stdio.h>
#include <stdbool.h>

typedef long long unsigned int llu;

bool isValid(llu part) {
    llu partBk = part;
    while(1) {
        llu digit = partBk % 10;
        if (digit == 4) {
            return false;
        }

        if ((partBk / 10) == 0) {
            break;
        }

        partBk /= 10;
    }

    return true;
}

int main() {
    int t;
    llu n;
    scanf("%d", &t);

    int i;
    for (i = 1; i <= t; i++) {
        llu a, b;

        scanf("%llu", &n);
        if (n % 2 == 0) {
            a = n / 2;
            b = a;
        } else {
            a = (n + 1) / 2;
            b = n - a;
        }

        int j;
        llu aBk = a, bBk = b;

        for (j = aBk; j > 0; j--) {
            if (isValid(a) && isValid(b)) {
                break;
            }

            a--;
            b++;
        }

        printf("Case #%d: %llu %llu\n", i, a, b);
    }

    return 0;
}
