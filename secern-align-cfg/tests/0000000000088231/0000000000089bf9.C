#include <stdbool.h>
#include <stdio.h>

bool is_odd (unsigned x)
{
    return x & 0x1;
}

bool is_even (unsigned x)
{
    return !is_odd(x);
}

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
    unsigned A = N >> 1;
    unsigned B = N >> 1;

    if (is_odd(N))
        A++;

    bool A4 = false;
    bool B4 = false;

    while ((A4 = has_dig4(A)) || (B4 = has_dig4(B))) {
        printf("== %u %u %u\n", i, A, B);

        switch (A % 10) {
            case 0:
                B += A >> 1;
                A = A >> 1;
                break;

            case 4:
                A--;
                B++;
                break;

            case 8:
                B += A >> 1;
                A = A >> 1;
                A--;
                B++;
                break;

            case 9:
                A -= 2;
                B += 2;
                break;

            default:
                A--;
                B++;
                break;
        }
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
