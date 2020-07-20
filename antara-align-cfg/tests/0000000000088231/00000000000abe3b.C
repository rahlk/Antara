#include <stdio.h>

unsigned long long getMask(unsigned long long);

int main(void)
{
    unsigned char T = 0;
    unsigned long long N = 0;
    unsigned long long mask = 0;
    scanf("%u", &T);
    for (unsigned char i = 0; i < T; i++) {
        scanf("%llu", &N);
        mask = getMask(N);
        printf("Case #%d: %llu %llu\n", (i+1), mask, N-mask);
    }
    return 0;
}

unsigned long long getMask(unsigned long long number) {
    unsigned long long mask = 0;
    unsigned long long digitvalue = 1;
    while (number != 0) {
        if (number % 10 == 4)
            mask = mask + digitvalue;
        digitvalue *= 10;
        number /= 10;
    } 
    return mask;
}

