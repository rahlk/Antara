#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int checkFourDigit(int number) {
    char str[12];
    int i;
    sprintf(str, "%d", number);
    
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == '4')
            return false;
    }
    return true;
}

int main() {
    
    int T, N, A, B;
    int i,j;
    
    scanf("%d", &T);
    
    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        
        A = 1;
        while (checkFourDigit(A)) {
            B = N - A;
            if (checkFourDigit(B))
                break;
            A++;
        }
        
        printf("Case #%d: %d %d\n", i+1, A, B)
    }
    
    return 0;
}