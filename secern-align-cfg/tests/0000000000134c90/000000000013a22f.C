#include <stdio.h>
#include <string.h>
#include <math.h>


char getMove(char *prg, int k) {
    int len = strlen(prg);
    return prg[k%len];
}

char calculateWinningOrDrawMove(char *moves) {
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

    if(!r && !p) return 'R';
    if(!s && !r) return 'S';
    if(!p && !s) return 'P';
    if(r && p && !s) return 'P';
    if(p && s && !r) return 'S';
    if(s && r && !p) return 'R';
    return '\0'; // lost
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

        char result[501] = "";
        int a = A;
        int m = 0;
        for(; a > 0; m++) {
            char moves[a+1];
            moves[a] = '\0';
            for(int i=0; i<a; i++) {
                moves[i] = getMove(prg[i], m);
            }

            char next = calculateWinningOrDrawMove(moves);
            //printf("DEBUG: %s, %c\n", moves, next);

            if(next == '\0') {
                strcpy(result, "IMPOSSIBLE");
                break;
            }
            result[m] = next;
            result[m+1] = '\0';

            // Remove losers
            int newa = 0;
            for(int i=0; i<a; i++) {
                char move = getMove(prg[i], m);
                if(move == next) {
                    // Copy prg[i] to prg[newa]
                    if(i != newa) {
                        strcpy(prg[newa], prg[i]);
                    }
                    newa++;
                }
            }
            a = newa;
        }

        printf("Case #%d: %s\n", t+1, result);
    }

    return 0;
}
