#include <stdio.h>

int main() {
    int T;
    unsigned int N;
    unsigned char c;
    
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("Case #%d: ", i+1);
        for (int j = 0; j < 2*N-2; j++) {
            scanf(" %c", &c);
            if (c == 'E') printf("S");
            if (c == 'S') printf("E");
        }
        printf("\n");
    }
}
