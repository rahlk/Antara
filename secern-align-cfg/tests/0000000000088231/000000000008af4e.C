#include "stdio.h"

typedef unsigned long long U64;

int check(U64 num)
{
    U64 temp = 0;
    while (num > 0) {
        temp = num % 10;
        num = num / 10;
        if (temp == 4) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int testcases, t;
    U64 n, nhalf, i;
    scanf("%d", &testcases);

    for(t = 1; t <= testcases; t++) {
        scanf("%d", &n);
        nhalf = n / 2;
        for(i = 0; i < nhalf; i++) {
            if (check(nhalf - i) && check(nhalf + i)) {
                printf("Case #%d: llu llu\n", t, nhalf - i, nhalf + i);
                break;
            }
        }
    }
    return 0;
}
