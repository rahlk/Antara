#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define limit 86028121

int compare( const void* a, const void* b)
{
     int int_a = * ( (int*) a );
     int int_b = * ( (int*) b );

     if ( int_a == int_b ) return 0;
     else if ( int_a < int_b ) return -1;
     else return 1;
}

int main() {
    int t, i, j, k, n, l, x, y;
    while (scanf("%d", &t) != EOF) {
        for (i = 0; i < t; i++) {
            int c[100] = {0};
            int c2[100] = {0};
            int c3[100] = {0};
            scanf("%d %d", &n, &l);
            for (j = 0; j < l; j++) {
                scanf("%d", &c[j]);
                c2[j] = c[j];
            }

            // qsort( c2, l, sizeof(int), compare );

            unsigned long long int ii,jj;
            int *primes;
            int *primes2;

            primes = malloc(sizeof(int) * n);
            primes2 = malloc(sizeof(int) * n);
            memset(primes, 0, sizeof(int) * n);
            memset(primes2, 0, sizeof(int) * n);

            for (ii = 2;ii <= n; ii++)
                primes[ii] = 1;

            for (ii = 2;ii <= n; ii++)
                if (primes[ii])
                    for (jj = ii;ii * jj <= n; jj++)
                        primes[ii * jj] = 0;

            int z = 0;
            for (ii = 2; ii <= n; ii++) {
                if (primes[ii]) {
                    primes2[z] = ii;
                    // printf("%lld\n", ii);
                    z++;
                }
            }

            int u = 0;
            int arr[26] = {0};
            int arrIdx = 0;
            int v = 0;
            for (u = 0; u < l; u++) {

                int found = 0;
                for (x = 0; x < z; x++) {
                    for (y = x + 1; y < z; y++) {
                        if (primes2[x] * primes2[y] == c2[u]) {
                            if (u == 0) {
                                c3[u] = x;
                            }
                            if (c3[u] == x) c3[u+1] = y;
                            else c3[u+1] = x;

                            int fooX = 0;
                            int fooY = 0;
                            for (v = 0; v < 26; v++) {
                                if (arr[v] == x) fooX = 1;
                                if (arr[v] == y) fooY = 1;
                            }
                            if (!fooX) arr[arrIdx++] = x;
                            if (!fooY) arr[arrIdx++] = y;
                            // printf("%d %d %d %d\n", primes2[x], primes2[y], x, y);
                            found = 1;
                            break;
                        }
                    }
                    if (found) break;
                }

            }

            qsort( arr, 26, sizeof(int), compare );


            printf("Case #%d: ", i+1);
            int w;
            for (w = 0; w <= l; w++) {
                int *p  = ( int * )bsearch( &c3[w], arr, 26, sizeof( int ), compare );
                if ( p != NULL ) printf( "%c", 65+(int)(p - arr) );
            }

            printf("\n");
            // printf("Case #%d: %d %d %d %d %d %d\n", i+1, c[0], z1, z2, l1, l2, found);
        }
    }
    return 0;
}
