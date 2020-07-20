#include <stdio.h>                                                                                                                                                           [0/33]
#include <string.h>

int main() {
    int t, i, j, n;
    char p[100000];
    char p2[100000];
    while (scanf("%d", &t) != EOF) {
        for (i = 0; i < t; i++) {
            scanf("%d", &n);
            scanf("%s", p);
            j = 0;
            while (p[j] == 'S' || p[j] == 'E') {
                if (p[j] == 'S') {
                    p2[j] = 'E';
                } else {
                    p2[j] = 'S';
                }
                j++;
            }
            p2[j] = '\0';
            printf("Case #%d: %s\n", i+1, p2);
        }
    }
    return 0;
}