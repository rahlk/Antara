#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T;
    char N[100][101];
    char *n;
    char A[101], B[101];
    int i, j;
    
    scanf("%d", &T);
    
    for (i = 0; i < T; i++) {
        n = N[i];
        memset(n, 0, 101);
        memset(A, 0, 101);
        memset(B, 0, 101);
        scanf("%s", n);
        if ((n[0] - '0') % 4 == 0) {
            A[0] = '2';
            B[0] = '2';
        }
        else {
            A[0] = n[0] - 1;
            B[0] = '1';
        }
        
        for (j = 1; n[j] == '\0'; j++) {
            if((n[j] - '0') % 4 == 0) {
                B[j] = A[j] = '2';
            }
            else {
                A[j] = n[j];
                B[j] = '0';
            }
        }
        printf("Case #%d: %s %s\n", i, A, B);
    }
    
    return 0;
}