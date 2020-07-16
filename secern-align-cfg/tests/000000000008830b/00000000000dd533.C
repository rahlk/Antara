#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int findDivisor(int n) {
    int d = 2;
    while(n%d != 0) d++;
    return d;
}


int cmpnum(const void *n1, const void *n2) {
    return *(int*)n1 - *(int*)n2;
}

void order(int *primes, int size, int *orderedPrimes) {
    memset(orderedPrimes, 0, 26*sizeof(int));

    // First extract numbers, removing duplicates
    for(int i=0; i<size; i++) {
        for(int j=0; j < 26; j++) {
            if(orderedPrimes[j] == 0) {
                // New prime number found
                orderedPrimes[j] = primes[i];
                if(j == 25) {
                    // all 26 prime numbers found - Cans top now
                    i = size;
                }
                break;
            }
            else if(primes[i] == orderedPrimes[j]) {
                // Prime number already found
                break;
            }
        }
    }

    // And now order numbers
    qsort(orderedPrimes, 26, sizeof(int), cmpnum);
}

int indexOf(int n, int *num) {
    for(int i=0; i<26; i++) {
        if(num[i] == n) {
            return i;
        }
    }
    printf("Oooops...: %d not found\n", n);
    return -1;
}

int main() {
    int T;
    scanf("%d", &T);

    for(int t=0; t<T; t++) {
        int N, L;
        scanf("%d %d", &N, &L);

        int cipher[100];
        for(int l=0; l<L; l++) {
            scanf("%d", &cipher[l]);
        }

        int primes[L+1]; // Deciphered prime numbers

        int i;
        int d1, d2, d3 = 0, d4 = 0;
        for(i=0; i<L; i++) {
            if(i > 0 && cipher[i] == cipher[i-1]) {
                // Same cipher number => cannot guess nothing
                continue;
            }

            d1 = findDivisor(cipher[i]);
            d2 = cipher[i] / d1;
            if(d1*d2 != cipher[i]) {
                printf("Oops...\n");
            }

            if(d1 == d2) {
                primes[i] = d1;
                break;
            }

            if(d1 == d3  || d1 == d4) {
                // d1 is the only common divisor to cipher[i] and cipher[i-1]
                primes[i-1] = d2; // i must be > 0 at that point
                primes[i] = d1;
                break;
            }
            else if(d2 == d3 || d2 == d4) {
                primes[i-1] = d1;
                primes[i] = d2;
                break;
            }

            // Should go there only once: at first iteration (i==0)
            d3 = d1;
            d4 = d2;
        }

        if(i >= L) {
            // This may happen if all same cipher numbers are identical, meaning we have 2 characters repeated alternatively.
            // But this should not be possible, as all 26 characters must be present.
            printf("Ooops...\n");
            continue;
        }

        for(int j = i-1; j >= 0; j--) {
            primes[j] = cipher[j] / primes[j+1];
        }

        for(; i < L; i++) {
            primes[i+1] = cipher[i] / primes[i];
        }

        int orderedPrimes[26];
        order(primes, L+1, orderedPrimes);

        char result[L+2];
        for(i = 0; i<=L; i++) {
            result[i] = 'A' + indexOf(primes[i], orderedPrimes);
        }
        result[L+1] = '\0';

        printf("Case #%d: %s\n", t+1, result);
    }

    return 0;
}

