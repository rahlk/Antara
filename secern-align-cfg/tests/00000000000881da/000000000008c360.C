#include <stdio.h>

void solve (unsigned i)
{
    unsigned N = 0;
    scanf("%u\n", &N);

    N = 2 * N - 2;

    printf("Case #%u: ", i);
    for (unsigned i = 0; i < N; i++)
        fputc((fgetc(stdin) == 'E') ? 'S' : 'E', stdout);
    fputc('\n', stdout);
}

int main (void)
{
    unsigned T = 0;
    scanf("%u\n", &T);

    for (unsigned i = 1; i <= T; i++)
        solve(i);
    return 0;
}
