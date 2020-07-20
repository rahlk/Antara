#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


//#define DBG_ALEX


int T;
int N, L;

//#define NMAX 100
//#define NMAX 10^000


typedef int TYPE;
#define EXCHANGE(a, b) { TYPE tmp = a; a = b; b = tmp; }

#define LMAX 100
TYPE v[LMAX];
TYPE clear[LMAX + 1];



static int CmpTYPE(const void *p1, const void *p2) {
   //return strcmp(* (char * const *) p1, * (char * const *) p2);
   //return (* (TYPE * const *) p1) < (* (TYPE * const *) p2);
   return (* (TYPE *)p1) > (* (TYPE *)p2);
}



#define MIN(a, b) (a > b ? b : a)


// The 2 factors of val, s.t. factor1 < factor2
TYPE factor1;
TYPE factor2;
void Factor(TYPE val) {
    TYPE i;
    TYPE ub = MIN((int)sqrt(val), N);

    for (i = 2; i < ub; i++) {
        if ((val % i) == 0) {
            factor1 = val / i;
            factor2 = i;
            if (factor1 > factor2) {
                EXCHANGE(factor1, factor2);
            }
            return;
        }
    }
}


void Decode() {
    /*
    p1 * p2
    p2 * p3
    p3 * p4

    ...
    pk pk+1 // smallest value
    pk+1 pk+2
    */

    /*
ABCDEFGHIJKLMNOPQRSTUVWXYZ
CJQUIZKNOWBEVYOFDPFLUXALGORITHMS
    https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/000000000008830b

    We chose 26 different prime numbers, none of which is larger than some integer N.
      We sorted those primes in increasing order.
      Then, we assigned the smallest prime to the letter A, the second smallest prime to the letter B, and so on.

    Then we write down the product of the prime for the first letter of the plaintext and the prime for the second letter of the plaintext.
      Then we write down the product of the primes for the second and third plaintext letters, and so on, ending with the product of the primes for the next-to-last and last plaintext letters.
      This new list of values is our ciphertext.
      The number of values is one smaller than the number of characters in the plaintext message.

    For example, suppose that N = 103 and we chose to use the first 26 odd prime numbers, because we worry that it is too easy to factor even numbers.
      Then A = 3, B = 5, C = 7, D = 11, and so on, up to Z = 103.

    1 ≤ T ≤ 100.
    Time limit: 20 seconds per test set.
    Memory limit: 1 GB.
    25 ≤ L ≤ 100.

    IMPORTANT: The plaintext contains each English alphabet letter at least once.
    Test set 1 (Visible)
        101 ≤ N ≤ 10000
    Test set 2 (Hidden)
        101 ≤ N ≤ 10^(100)
    */
    int i;

    /*
TODO: for efficiency find min (or other good candidate) in v to Factor() quicker
    for (i = 0; i < L; i++) {
       #ifdef DBG_ALEX
        //printf("Round %d\n", idRound);
       #endif

        TYPE res = Factor(v[i]);
    }
    */

    Factor(v[0]);
  #ifdef DBG_ALEX
    printf("factor1 = %d\n", factor1);
    printf("factor2 = %d\n", factor2);
  #endif

    clear[0] = factor1;

    for (i = 1; i < L; i++) {
        clear[i] = factor2;
        factor2 = v[i] / factor2;
       #ifdef DBG_ALEX
        printf("i = %d: %d (factor1 = %d)\n", i, factor2, clear[i]);
       #endif
    }
    clear[L] = factor2;

  #ifdef DBG_ALEX
    for (i = 0; i < L + 1; i++) {
        printf("clear[%d] = %d\n", i, clear[i]);
    }
  #endif

    TYPE tmp[LMAX + 1];
    for (i = 0; i < L + 1; i++) {
        tmp[i] = clear[i];
    }

    qsort(tmp, L + 1, sizeof(TYPE), CmpTYPE);

    //TYPE factorsSortedUnique[LMAX];
    TYPE factorsSortedUnique[26];
    int numFactorsSortedUnique = 0;
    for (i = 0; i < L + 1; i++) {
        if (i > 0 && tmp[i] == tmp[i - 1])
            continue;
        factorsSortedUnique[numFactorsSortedUnique] = tmp[i];
        numFactorsSortedUnique++;
    }



  #ifdef DBG_ALEX
    printf("numFactorsSortedUnique = %d\n", numFactorsSortedUnique);
    fflush(stdout);
  #endif
    assert(numFactorsSortedUnique == 26);

  #ifdef DBG_ALEX
    for (i = 0; i < L; i++) {
        //printf("clear[%d] = %d\n", i, clear[i]);
        printf("tmp[%d] = %d\n", i, tmp[i]);
    }
    for (i = 0; i < numFactorsSortedUnique; i++) {
        printf("factorsSortedUnique[%d] = %d\n", i, factorsSortedUnique[i]);
    }
  #endif


    // Interesting: we could use a C++ std::map<TYPE, char>
    char strRes[LMAX + 10];
    int j;
    for (i = 0; i < L + 1; i++) {
        for (j = 0; j < numFactorsSortedUnique; j++) {
            if (clear[i] == factorsSortedUnique[j])
                strRes[i] = 'A' + j;
        }
    }
    strRes[L + 1] = 0;

    printf("%s\n", strRes);
    fflush(stdout);
}

void Read() {
    int i;
    int idTest;
    int res;

    //FILE *fin = fopen(fileName, "rt");
    //freopen("myfile.txt", "w", stdin);
    FILE *fin = stdin;

    assert(fin != NULL);
    res = fscanf(fin, "%d", &T);

  #ifdef DBG_ALEX
    printf("T = %d\n", T);
  #endif

    for (idTest = 0; idTest < T; idTest++) {
        res = fscanf(fin, "%d%d", &N, &L);

      #ifdef DBG_ALEX
        printf("N = %d\n", N);
        printf("L = %d\n", L);
      #endif

        assert(L <= LMAX);
        for (i = 0; i < L; i++) {
            res = fscanf(fin, "%d", &v[i]);
        }


      #ifdef DBG_ALEX
        for (i = 0; i < L; i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
      #endif



        printf("Case #%d: ", idTest + 1);
        Decode();
    }

    /*
        TroubleSort();
      #ifdef DBG_ALEX
        for (i = 0; i < N; i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
      #endif

        printf("Case #%d: ", idTest + 1);
        fflush(stdout);
        int sorted = 1;
        for (i = 0; i < N - 1; i++) {
            if (v[i] > v[i + 1]) {
      #ifdef DBG_ALEX
        printf("Found non-sorted at index %d\n", i);
      #endif
                sorted = 0;
                break;
            }
        }
        if (sorted == 0) {
            printf("%d\n", i);
        }
        else {
            printf("OK\n");
        }
        fflush(stdout);
    }
    */

    fflush(stdout);
    fclose(fin);
}

int main(int argc, char **argv) {
    //assert(argc == 2);

    //Read(argv[1]);
    Read();
    return 0;
}

