#include <stdio.h>

long X[100005], Y[100005], Q;

void plus(long *D, long d) {
    long i;
    for (i = d + 1; i < Q; i++)
        D[i]++;
}

void minus(long *D, long d) {
    long i;
    for (i = 0; i < d; i++)
        D[i]++;
}

long best(long *D)
{
    long i, j, m;
    m = -1;
    for (i = 0; i < Q; i++) {
        if (D[i] > m) {
            m = D[i];
            j = i;
        }
    }
    return j;
}

void solve(long *px, long *py)
{
    long P, i, x, y;
    char d;
    scanf("%ld %ld", &P, &Q);
    Q++;
    for (i = 0; i < Q; i++)
        X[i] = Y[i] = 0;

    for (i = 0; i < P; i++) {
        scanf("%ld %ld %c", &x, &y, &d);
        if (d == 'E')
            plus(X, x);
        else if (d == 'W')
            minus(X, x);
        else if (d == 'N')
            plus(Y, y);
        else
            minus(Y, y);
    }
    *px = best(X);
    *py = best(Y);
}

int main()
{
    long T, i, x, y;
    scanf("%ld", &T);
    for (i = 0; i < T; i++) {
        solve(&x, &y);
        printf("Case #%ld: %ld %ld\n", i + 1, x, y);
    }
}
