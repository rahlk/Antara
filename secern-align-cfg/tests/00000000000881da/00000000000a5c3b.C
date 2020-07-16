#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int T;
    
    scanf(" %d", &T);
    
    int Q;
    
    char *P = malloc(sizeof(char[100000]));
    char *M = malloc(sizeof(char[100000]));
    
    for (Q = 1; Q <= T; Q++) {
        int N;
        
        scanf(" %d %s", &N, P);
        
        char first = P[0];
        char last = P[2 * N - 3];
        
        if (first == last) {
            char same;
            char other;
            
            if (P[0] == 'S') {
                same = 'S';
                other = 'E';
            } else {
                same = 'E';
                other = 'S';
            }
            
            // Find two of the other move in a row.
            
            int i;
            int sames = 0;
            bool consecutive = false;
            
            for (i = 0; P[i]; i++) {
                if (P[i] == other) {
                    if (consecutive) {
                        break;
                    } else {
                        consecutive = true;
                    }
                } else {
                    sames++;
                    consecutive = false;
                }
            }

            // Draw a Z through that point.
                
            int others = i - sames;
            
            memset(M, other, others);
            memset(&M[others], same, N - 1);
            memset(&M[others + N - 1], other, N - 1 - others);
        } else {
            // This is the easy case.
            
            memset(M, last, N - 1);
            memset(&M[N - 1], first, N - 1);
        }
        
        M[2 * N - 2] = '\0';
        
        printf("Case #%d: %s\n", Q, M);
    }
    
    return 0;
}