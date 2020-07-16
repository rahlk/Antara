#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T;
    char n[102];
    //char *n;
    char A[102], B[102];
    int i, j;
    
    scanf("%d", &T);
    
    for (i = 0; i < T; i++) {
        //n = N[i];
        memset(n, 0, 102);
        memset(A, 0, 102);
        memset(B, 0, 102);
        scanf("%s", n);
        if ((n[0] - '0') == 4) {
            A[0] = '2';
            B[0] = '2';
        }
        else {
            if((n[0] - '0') == 5) {
                A[0] = '2';
                B[0] = '3';
            }
            else {
                A[0] = n[0] - 1;
                B[0] = '1';
            }
        }
        
        for (j = 1; n[j] != '\0'; j++) {
            if((n[j] - '0') == 4) {
                B[j] = A[j] = '2';
            }
            else {
                A[j] = n[j];
                B[j] = '0';
            }
        }
        printf("Case #%d: %s %s\n", i + 1, A, B);
    }
    
    return 0;
}