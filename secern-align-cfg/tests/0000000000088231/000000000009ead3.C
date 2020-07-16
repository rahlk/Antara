#include <stdio.h>
#include <math.h>

int main (void) {
    int i, j, x, len;
    char a[101] = {0};
    char b[101] = {0};
    char n[101] = {0};
    scanf ("%d", &x);
    for (j=1; j<=x; j++) {
        scanf ("%s", n);
        for (len=0; n[len]!=0; len++) {}
        len--;
        for (i=0; i<= len; i++) {
            if (n[i] == '4') {
                a[i] = '3';
                b[i] = '1';
            }
            else {
                a[i] = n[i];
                b[i] = '0';
            }
        }
        printf ("Case #%d: %s %s\n", j, a, b);
    }
    return 0;
}