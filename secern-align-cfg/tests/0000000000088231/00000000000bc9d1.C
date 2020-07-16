#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int findFours(long int N);

int main(int argc, char *argv[]) {
    int T;
    long int* N, A;
    scanf("%d", &T);
    N = (int*) malloc(T * sizeof(long int));
    for (int i=0; i<T; i++) {
        scanf("%d", N+i);
        A = findFours(N[i]);
        printf("Case #%d: %ld %ld\n", i+1, A, N[i]-A);
    }
    return 0;
}

long int findFours(long int N) {
    long int N2 = 0, D;
    int p;
    for (int i = 8; i>=0; i--) {
        D = pow(10, i);
        p = N / D;
        if (p == 4) {
            N2 += D;
        }
        N -= p * D;
    }
    return N2;
}