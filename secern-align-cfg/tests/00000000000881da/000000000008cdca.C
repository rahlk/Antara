#include <stdio.h>
#include <string.h>

int main() {
    int i, j, T;

    scanf("%d", &T);

    for (i = 1; i <= T; i++) {
        int n;
        char path[50001];
        
        scanf("%d", &n);
        scanf("%s", path);

        for (j = 0; j < strlen(path); j++) {
            if (path[j] == 'S') {
                path[j] = 'E';
            } else {
                path[j] = 'S';
            }
        }

        printf("Case #%d: %s\n", i, path);
    }

    return 0;
}