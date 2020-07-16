#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getReverse(char* P, int N, int I);

int main(int argc, char *argv[]) {
    int T;
    int N;
    char* P;
    scanf("%d", &T);
    for (int i=0; i<T; i++) {
        scanf("%d", &N);
        P = (char*) malloc((2*N-1) * sizeof(char));
        scanf("%s", P);
        getReverse(P, N, i);
    }
    
    return 0;
}

void getReverse(char* P, int N, int I) {
    char P2[2*N-1];
    for (int i=0; i<2*N-2; i++) {
        if (P[i] == 'E') {
            P2[i] = 'S';
        } else {
            P2[i] = 'E';
        }
    }
    P2[2*N-2] = '\0';
    
    printf("Case #%d: %s\n", I+1, P2);
    return;
}