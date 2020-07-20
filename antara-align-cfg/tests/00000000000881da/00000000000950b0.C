#include <stdio.h>
#include <stdlib.h>

void main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        char path[50001] = {0};
        scanf("%d", &N);
        scanf("%s", path);
        int step = 2 * N - 2;
        for (int s = 0; s < step; s++) {
            if (path[s] == 'S') path[s] = 'E';
            else path[s] = 'S';
        }
        
        printf("Case #%d: %s\n", t, path);
    }
}