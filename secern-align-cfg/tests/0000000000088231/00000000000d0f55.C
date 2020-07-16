#include <stdio.h>

int main () {
    int case_count;
    scanf("%d", &case_count);
    for(int i = 1; i <= case_count; i++) {
        long long n = 0;
        scanf("%lld", &n);
        long long tmp = n;
        long long a = 0, b = 0;
        int power = 1;
        while(tmp > 0) {
            int digit = tmp % 10;
            tmp = tmp/10;
            if (digit == 4) {
                a += 1 * power;
                b += 3 * power;
            } else {
                a += digit * power;
            }
            power *= 10;
        }
        printf("Case #%d: %lld %lld \n", i, a, b);
    }
    return 0;
}
