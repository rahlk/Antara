#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long gcd(long a, long b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}

int T, LOOP;
long N, tmp;
int L, i, j, k;
long A[200], p[200], B[200];

int main () {
    scanf("%d\n", &T);

    for (LOOP = 0; LOOP < T; LOOP ++) {

        scanf("%ld%d", &N, &L);
        for (i = 0; i < L; i++) {
            scanf("%ld", &A[i]);
        }
        p[1] = gcd(A[0], A[1]);
        p[0] = A[0] / p[1];
        p[2] = A[1] / p[1];

        for (i = 2; i < L; i++) {
            p[i+1] = A[i] / p[i];
        }

        for (i = 0; i < L + 1; i++) {
            B[i] = p[i];
        }

        for (i = 0; i < L + 1; i++)
            for (j = i+1; j < L + 1; j++) {
                if (B[i] > B[j]) {
                    tmp = B[i];
                    B[i] = B[j];
                    B[j] = tmp;
                }
            }

        printf("Case #%d: ", LOOP+1);
        for (i = 0; i < L + 1; i++) {
            tmp = p[i];
            k = 0;
            j = 0;
            while (B[j] != tmp) {
                j ++;
                if (B[j] > B[j-1]) {
                    k++;
                }
            }
            printf("%c", 'A'+k);
        }
        printf("\n");
    }

    return 0;
}
