#include <stdio.h>

int isDigitPresent(int x, int d) {
    while (x > 0) {
        if (x % 10 == d)
            break;

        x = x / 10;
    }

    return (x > 0);
}

int main() {
    int t, i, n, a, b;
    while (scanf("%d", &t) != EOF) {
        for (i = 0; i < t; i++) {
            scanf("%d", &n);
            
            for (a = 1; a < n; a++) {
                b = n - a;
                if (!isDigitPresent(a, 4) && !isDigitPresent(b, 4)) {
                    break;
                }
                
            }
            
            printf("Case #%d: %d %d\n", i+1, a, b);
        }
    }
    return 0;
}
