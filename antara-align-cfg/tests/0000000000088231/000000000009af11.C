#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

void findsum(int n);
int get4(long x);

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
    long a, ai, b, bi;

    a = n;
    b = 0;

    while ((ai = get4(a)) != -1 || (bi = get4(b)) != -1) {
        a = a - pow(10, ai);
        b = b + pow(10, ai);
    }
    printf("%ld %ld\n", a, b);
}

int get4(long x) {
    int i, length;
    char str[100];

    sprintf(str, "%ld\n", x);

    length = strlen(str) - 1;

    i = 0;
    while (str[i] != '\n') {
        if (str[i] == '4') {
            if (length == 1) {
                return 0;
            } else {
                return (length - (i + 1));
            }
        }
        i++;
    }

    return -1;
}