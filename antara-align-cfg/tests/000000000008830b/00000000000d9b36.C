#include <stdio.h>
#include <stdlib.h>

unsigned T, L;
unsigned long N;
unsigned long primes[26];
unsigned long given[200];
unsigned long result[200];

unsigned long gcd(unsigned long a, unsigned long b)
{
    unsigned long tmp;

    if (b > a) {
        tmp = b;
        b = a;
        a = tmp;
    }
    while (b!=0) {
        tmp = b;
        b = a%b;
        a = tmp;
    }
    return a;
}

int compare(const void *a, const void *b)
{
    return int(*(unsigned long*)a - *(unsigned long *)b);
}

int main()
{
    unsigned i, j, k;
    unsigned long c, last_prime;
    scanf ("%u", &T);
    for (i = 0; i < T; i++) {
        scanf ("%lu", &N);
        scanf ("%u", &L);

        for (j = 0; j < L; j++)
            scanf("%lu", &given[j]);

        c = gcd(given[0], given[1]);
        result[1]  = c;
        result[0]  = given[0]/c;
        result[2]  = given[1]/c;

        last_prime = result[2];

        for (j = 2; j < L; j++) {
            result[j+1] = given[j]/last_prime;
            last_prime = result[j+1];
        }

//        for (j = 0; j < L+1; j++)
//            printf("%lu ", result[j]);

        
        c = 0;
        for (j = 0; j < L+1; j++) {
            for (k = 0; k < c; k++) {
                    if (primes[k] == result[j])
                        goto there;
            }

             primes[c++] = result[j];
there:
            j = j;
                
        }
        
       qsort (primes, 26, sizeof (unsigned long), compare);

//        printf ("\n");
        printf ("Case #%u: ", i+1);
        for (j = 0; j < L+1; j++) {
            for (k = 0; k < 26; k++) {
                    if (result[j] == primes[k])
                            break;
            }
            printf ("%c", 'A' + k);
        }
        printf ("\n");

    }
    return 0;
}
