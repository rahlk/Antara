#include <stdio.h>

unsigned T, N;

int main()
{
    unsigned i, m=1, a, tmp, q;

    scanf ("%u", &T);

    for (i = 0; i < T; i++) {
        scanf ("%u", &N);
        tmp = N;
        a = N;
        while (tmp) {
            q = tmp%10;
            tmp = tmp/10;
            if (q == 4) {
                a -= 2*m;
             }
             m *=10;
        }
        printf ("Case #%u: %u %u\n", i, a, N-a);
    }

    return 0;
}
