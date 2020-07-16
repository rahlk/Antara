#include <stdio.h>

int main() {
    int NumCases = 0;
    scanf("%d", &NumCases);
    for (int I = 1; I <= NumCases; ++I) {
        char Input[256];
        scanf("%s", Input);
        char Output[256], *Q = Output;
        for (char *P = Input; *P; ++P, ++Q) {
            if (*P == '4') {
                *Q = '1';
                *P = '3';
            } else {
                *Q = '0';
            }
        }
        *Q = 0;
        Q = Output;
        while (*Q == '0') ++Q;
        printf("Case #%d: %s %s\n", I, Input, Q);
    }
}
