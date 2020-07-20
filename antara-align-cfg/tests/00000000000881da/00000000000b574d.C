#include <stdio.h>
#include <string.h>

int main() {
    int t, n, i, size;
    scanf("%d", &t);
    for(int ti = 1; ti <= t; ++ti) {
        scanf("%d", &n);
        size = 2*n - 2;
        char lydia[size+1], me[size+1];
        scanf("%s", lydia);
        for(i = 0; i < size; ++i)
            me[i] = lydia[i] == 'E'? 'S' : 'E';
        me[size] = '\n';
        printf("Case #%d: %s", ti, me);
    }
    return 0;
}