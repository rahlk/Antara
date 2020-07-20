#include <stdio.h>

int main()
{
    int i, t, n, a, b;
    scanf("%d", &t);
    for (i = 1; i <= t; i++) {
        scanf("%d", &n);
        a = n - 1;
        b = 1;
        if (a == 4) {
            a--;
            b++;
        }
        printf("Case #%d: %d %d\n", i, a, b);
    }
    
    return 0;
}
