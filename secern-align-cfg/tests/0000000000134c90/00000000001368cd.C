#include <stdio.h>
#include <string.h>
#include <math.h>


char getMove(char *prg, int k) {
    int len = strlen(prg);
    return prg[k%len];
}

char calculateWinningMove(char *moves) {
    int r=0, s=0, p=0;
    while(*moves != '\0') {
        if(*moves == 'R') {
            r=1;
        }
        if(*moves == 'P') {
            p=1;
        }
        if(*moves == 'S') {
            s=1;
        }
        moves++;
    }

    if(!r) return 'R';
    if(!s) return 'S';
    if(!p) return 'P';
    return '\0';
}

int main() {
    int T;
    scanf("%d", &T);

    for(int t=0; t<T; t++) {
        int A; // =2^K-1
        scanf("%d", &A);

        int K = log2(A+1);
        //printf("%d\n", K);

        char prg[A][500];
        for(int i=0; i<A; i++) {
            scanf("%s", prg[i]);
        }

        char result[K+1];
        result[K] = '\0';
        for(int k=0; k<K; k++) {
            char moves[A+1];
            moves[A] = '\0';
            for(int i=0; i<A; i++) {
                moves[i] = getMove(prg[i], k);
            }

            char next = calculateWinningMove(moves);
            //printf("DEBUG: %s, %c\n", moves, next);

            if(next == '\0') {
                strcpy(result, "IMPOSSIBLE");
                break;
            }
            result[k] = next;
        }

        printf("Case #%d: %s\n", t+1, result);
    }

    return 0;
}
