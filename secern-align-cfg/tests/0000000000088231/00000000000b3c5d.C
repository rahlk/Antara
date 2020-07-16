#include <stdbool.h>
#include <stdio.h>

bool has_dig4 (unsigned x)
{
    bool ret = false;
    for (; !ret && x > 10; x /= 10)
        ret = x % 10 == 4;
    return ret || x == 4;
}

bool first_dig4 (unsigned x)
{
    return x % 10 == 4;
}

void solve (unsigned i, unsigned N)
{
    unsigned A = N;
    unsigned B = 0;

    unsigned place = 1;
    for (; N > 10; N /= 10) {
        if (first_dig4(N)) {
            A -= place;
            B += place;
        }

        place *= 10;
    }

    if (first_dig4(N)) {
        A -= place;
        B += place;
    }

    printf("Case #%u: %u %u\n", i, A, B);
}

int main (void)
{
    unsigned T = 0;
    scanf("%u\n", &T);

    for (unsigned i = 1; i <= T; i++) {
        unsigned N = 0;
        scanf("%u\n", &N);
        solve(i, N);
    }

    return 0;
}
