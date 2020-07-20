
#include <stdio.h>

int pow(int base, int exp) {
    if (exp == 0) return 1;
    return base * pow(base, exp-1);
}

int hasFour(int n) {
    int dgt = 0;
    while (n > 0) {
        if (n%10 == 4) return dgt;
        n /= 10;
        dgt++;
    }
    return -1;
}

int main(void) {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int lo = 0;
        int hi = N;

        while (hasFour(hi) != -1) {
            lo += pow(10, hasFour(hi));
            hi -= pow(10, hasFour(hi));
        }

        printf("Case #%d: %d %d\n", t, lo, hi);
    }
    
    return 0;
}
