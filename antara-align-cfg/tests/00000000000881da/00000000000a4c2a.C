#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T;
    scanf("%d ", &T);
    
    for( int i = 0; i < T; i++ ) {
        int N;
        scanf("%d ", &N);
        N *= 2;
        N -= 2;
        printf("Case #%d: ", i+1);
        for( int j = 0; j < N; j++ ) {
            char tmp;
            scanf("%c", &tmp);
            printf("%c", (tmp=='S')?'E':'S');
        }
        puts("");
    }
    
    return 0;
}