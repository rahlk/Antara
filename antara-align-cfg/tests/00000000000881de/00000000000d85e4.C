#include <stdio.h>
#include <string.h>

void fill(int p, int n, char* buf) {
    int i;
    for (i = 0; i < n; ++i) {
        buf[i] = ((i >> p) & 1) ? '1' : '0';
    }
    buf[i++] = 0;
}

void mt(int p, int n, const char* buf, int* rs) {
    int i;
    for (i = 0; i < n; ++i) {
        rs[i] |= (buf[i] == '1') << p;
    }
}

int main(void) {
    int T, N, B, F, t, p, n, i, first;
    int rs[1024];
    char buf[1026];
    scanf("%d", &T);
    for (t = 1; t <= T; ++t) {
        scanf("%d %d %d", &N, &B, &F);
        memset(rs, 0, sizeof(rs));
        for (p = 0; (1 << p) < N; ++p) {
            fill(p, N, buf);
            printf("%s\n", buf);
            scanf("%s", buf);
            mt(p, N - B, buf, rs);
        }
        for (n = 0, i = 0, first = 1; n < N; ++n) {
            if (rs[i] == n) {
                ++i;
            } else {
                if (!first) {
                    printf(" ");
                }
                first = 0;
                printf("%d", n);
            }
        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}