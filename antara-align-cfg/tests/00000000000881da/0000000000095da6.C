#include <stdio.h>

void solve(int n, char *c, char *out)
{
    char *p = &c[0];
    int i = (n - 1) * 2;
    i--;
    for(; i >= 0; i--) {
        out[i] = (c[i] == 'E')? 'S': 'E';
    }
}

int main()
{
    int t, n;
    char c[50000];
    
    scanf(" %d ", &t);
    for (int i = 1; i <= t; ++i) {
        char out1[50000];
        scanf(" %d ", &n);
        scanf(" %s ", &c);
        solve(n, c, out1);
        printf("Case #%d: %s\n", i, out1);
    }
    return 0;
}