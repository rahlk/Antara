#include <stdio.h>
#include <string.h>

#define D 11

void convert_num_to_digits(int digits[D], unsigned int n) {
    memset(digits, 0, sizeof(int) * D);

    int i;
    for(i=0; i<D && n>0; ++i) {
        digits[i] = n % 10;
        n /= 10;
    }
}

int convert_digits_to_num(int digits[D]) {
    int i, ret;

    for(i=D, ret=0; i>=0; --i)
        ret = ret * 10 + digits[i];

    return ret;
}

void solve(int n, int *a, int *b) {
    int i;
    int digits[D], tmp[D];

    convert_num_to_digits(digits, n);
    for(i=0; i<D; ++i)
        tmp[i] = (digits[i] == 4) ? 2: digits[i];

    *a = convert_digits_to_num(tmp);
    *b = n - (*a);
}

int main() {
    int t, T, N, A, B;

    scanf("%d", &T);
    for(t=1; t<=T; ++t) {
        scanf("%d", &N);
        solve(N, &A, &B);
        printf("Case #%d: %d %d\n", t, A, B);
    }
    return 0;
}
