#include <stdio.h>

int main () {
    
    int T, x;
    char N[101], A[101], B[101];
    int i;
    
    scanf ("%d", &T);
    x = 0;
    
    while (T--) {
        x ++;
        
        scanf ("%s", N);
        for (i=0; N[i]!='\0'; i++) {
            if (N[i] == '4') {
                A[i] = '3';
                B[i] = '1';
            } else {
                A[i] = N[i];
                B[i] = '0';
            }
        }
        
        printf ("Case #%d: %s %s", x, A, B);
        
    }
    
    return 0;
}