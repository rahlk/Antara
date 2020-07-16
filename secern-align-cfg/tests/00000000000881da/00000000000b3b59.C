#include <stdio.h>

int main() {
    int T, N, len;
    char P[100010], A[100010];
    
    scanf("%d ", &T);
    for(int c = 1; c <= T; ++c) {
        scanf("%d %s ", &N, P); len = 2*N - 2;
        for(int i = 0; i < len; ++i) {
            if(P[i] == 'E') A[i] = 'S';
            else A[i] = 'E';
        }
        A[len] = '\0';
        printf("Case #%d: %s\n", c, A);
    }
    
    return 0;
}