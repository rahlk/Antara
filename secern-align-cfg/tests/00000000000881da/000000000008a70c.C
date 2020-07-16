
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        
        char *P = malloc((2*N-1)*sizeof(*P));
        fgets(P, stdin, 2*N-1);
        
        printf("Case #%d: ", t);
        
        int px, py, lx, ly;
        px = py = lx = ly = 0;
        
        for (int i = 0; i < 2*N-1; i++) {
            if (px == lx && py == ly) {
                if (P[i] == 'S') {
                    px++;
                    putchar('E');
                } else {
                    py++;
                    putchar('S');
                }
            } else {
                if (px > py) {
                    py++;
                    putchar('E');
                } else {
                    px++;
                    putchar('S');
                }
            }
            
            if (P[i] == 'S') {
                ly++;
            } else {
                lx++;
            }
        }
        putchar('\n');
        
        free(P);
    }
    
    return 0;
}
