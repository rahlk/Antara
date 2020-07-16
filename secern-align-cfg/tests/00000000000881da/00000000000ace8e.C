#include <stdio.h>

int main(void) {
    unsigned char T = 0;
    unsigned int N = 0;
    unsigned char p = 0;
    scanf("%u", &T);
    for (unsigned char i = 0; i < T; i++) {
        scanf("%u", &N);
        printf("Case #%u: ", i+1);
        for (unsigned int j = 0; j < 2*N-2; j++) {
            scanf("%c", &p);
            if (p == 'E')
                printf("S");
            else if (p == 'S')
                printf("E");
        }
        printf("\n");
    }
    return 0;
}