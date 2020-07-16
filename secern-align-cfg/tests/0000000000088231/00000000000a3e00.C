#include <stdio.h>

int main() {
    int T;
    
    scanf(" %d", &T);
    
    int Q;
    
    for (Q = 1; Q <= T; Q++) {
        char N[200];
        
        scanf(" %s", N);
        
        char M[200];
        
        int i;
        
        for (i = 0; N[i] != '4'; i++);
        
        int j;
        
        for (j = 0; N[i]; i++, j++) {
            if (N[i] == '4') {
                N[i] = '2';
                M[j] = '2';
            } else {
                M[j] = '0';
            }
        }
        
        M[j] = '\0';
        
        printf("Case #%d: %s %s\n", Q, N, M);
    }
    
    return 0;
}