#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for( int i = 0; i < T; i++ ) {
        char N[102], A[102] = {0}, B[102] = {0};
        int j = 0, offset = 0;
        scanf("%s", &N);
        while( N[j] == '1' ) {
            A[j] = '1';
            offset++;
            j++;
        }
        for( ; N[j] != '\0'; j++ ) {
            if( N[j] != '4' ) {
                if( N[j] == '5' ) {
                    A[j] = '3';
                    B[j-offset] = '2';
                } else if( N[j] == '0' ) {
                    A[j] = '0';
                    if( j == offset ) {
                        offset++;
                    } else {
                        B[j-offset] = '0';
                    }
                } else {
                    A[j] = N[j]-1;
                    B[j-offset] = '1';
                }
            } else {
                A[j] = '3';
                B[j-offset] = '1';
            }
        }
        A[j] = '\0';
        B[j-offset] = '\0';
        printf("Case #%d: %s %s\n", i+1, A, B);
    }
    
    return 0;
}