#include <stdio.h>
#include <string.h>

void solve(char* n1, char* n2) {
    int i;
    for (i = 0; i < strlen(n1); i++) {
        if (n1[i] == '4') {
            n1[i] = '3';
            n2[i] = '1';
        } else {
            n2[i] = '0';
        }
    }
    n2[i] = '\0';
}

int main(void) {
    int t;
    scanf("%d", &t);

    for (int i = 1; i < t + 1; i++) {
        char n1[100];
        char n2[100];
        scanf("%s", n1);

        solve(n1, n2);

        printf("Case #%d: %s %s\n", i, n1, n2);
    }
}
