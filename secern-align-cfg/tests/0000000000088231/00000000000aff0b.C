#include <stdio.h>

int main() {
    int tc, n;
    scanf("%d", &tc);
    for(int i = 1; i <= tc;i++) {
        int tens = 1;
        scanf("%d", &n);
        int ans = 0;
        int m = n;
        while(m > 0) {
            int rem = m % 10;
            if( rem == 4)
                ans += tens;
            m /= 10;
            tens *= 10;
        }
        printf("Case #%d: %d %d\n", i, ans, n - ans);
    }
    return 0;
}