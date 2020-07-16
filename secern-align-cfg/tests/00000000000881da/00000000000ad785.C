#include <stdio.h>

int main(void) {
    unsigned char T = 0;
    unsigned int N = 0;
    scanf("%u", &T);

    for (unsigned char i = 0; i < T; i++) {
        scanf("%u", &N);
        char P[2*N-2];
        scanf("%s", &P);
        printf("Case #%u: ", i+1);
        for (unsigned int j = 0; j < 2*N-2; j++) {
            if (P[j] == 'E')
                printf("S");
            else if (P[j] == 'S')
                printf("E");
        }
        printf("\n");
    }
    return 0;
}