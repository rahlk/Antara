#include <stdio.h>
#define D 100005

char buf[D];

int main() {
    int t, T, N, i;

    scanf("%d", &T);
    for(t=1; t<=T; ++t) {
        scanf("%d", &N);
        scanf("%s", buf);
        for(i=0; buf[i]; ++i)
            buf[i] = (buf[i] == 'S') ? 'E' : 'S';
        printf("Case #%d: %s\n", t, buf);
    }
    return 0;
}
