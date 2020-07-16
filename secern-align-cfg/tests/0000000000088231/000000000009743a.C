#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

void findsum(int n);
int contains4(int x);

int main(int argc, char* argv[]) {
    int t, i, n;

    scanf("%d", &t);
    /* Execute each test case */
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("Case #%d: ", i + 1);
        findsum(n);
    }
}

void findsum(int n) {
    int a, b;

    a = n;
    b = 0;

    /* Bad solution */
    while (contains4(a) || contains4(b)) {
        a--;
        b++;
    }
    printf("%d %d\n", a, b);
}

int contains4(int x) {
    int i;
    char str[100];

    sprintf(str, "%d\n", x);

    i = 0;
    while (str[i] != '\n') {
        if (str[i] == '4') return TRUE;
        i++;
    }

    return FALSE;
}