#include <stdio.h>
#include <string.h>

#define MAX_N 50000

void solve(char* route) {
    for (int i = 0; route[i] != '\0'; i++) {
        if (route[i] == 'E') route[i] = 'S';
        else route[i] = 'E';
    }
}

int main(void) {
    int t;
    scanf("%d", &t);

    for (int i = 1; i < t + 1; i++) {
        int n;
        char route[(MAX_N * 2 - 2) + 1];

        scanf("%d", &n);
        scanf("%s", route);

        solve(route);

        printf("Case #%d: %s\n", i, route);
    }
}
