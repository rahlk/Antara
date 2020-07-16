#include "stdio.h"

int check(int num)
{
    int temp = 0;
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
    int testcases, t, n, i;
    scanf("%d", &testcases);

    for(t = 1; t <= testcases; t++) {
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
            if (check(n - i) && check(i)) {
                printf("Case #%d: %d %d\n", t, n - i, i);
                break;
            }
        }
    }
    return 0;
}
