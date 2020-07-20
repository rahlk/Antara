#include "stdio.h"

typedef unsigned long long U64;

int check(int num)
{
    int temp = 0;
    while (num > 0) {
        temp = num % 10;
        num = num / 10;
        if (temp == 4) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    U64 testcases, t, i, n, nhalf, left;
    scanf("%d", &testcases);

    for(t = 1; t <= testcases; t++) {
        scanf("%d", &n);
        nhalf = n / 2;
        left = n - nhalf;
        while(check(nhalf) || check(left)){
            nhalf /= 2;
            left = n - nhalf;
        }
        printf("Case #%d: %d %d\n", t, nhalf - i, nhalf + i);
    }
    return 0;
}
