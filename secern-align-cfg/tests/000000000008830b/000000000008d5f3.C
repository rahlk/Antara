
#include <stdio.h>
#include <stdlib.h>

void insert(int num, int *arr, int arrLen) {
    if (arr[0] == 0 || num == arr[0]) {
        arr[0] = num;
        return;
    } else if (num < arr[0]) {
        int temp = arr[0];
        arr[0] = num;
        num = temp;
    }
    insert(num, arr+1, arrLen-1);
}

char primeToLetter(int prime, int arr[26]) {
    for (int i = 0; i < 26; i++) {
        if (prime == arr[i]) return i + 'A';
    }
    return 0;
}

int main(void) {
    int T;
    scanf("%d\n", &T);
    for (int t = 1; t <= T; t++) {
        int N, L;
        int i, *Li;
        scanf("%d %d\n", &N, &L);
        Li = malloc(L*sizeof(*Li));
        for (i = 0; i < L; i++) {
            scanf("%d", &(Li[i]));
        }
        
        int primes[26] = {0};
        int first, lo, hi;
        
        for (lo = 2; lo < N; lo++) {
            if (Li[0] % lo == 0) {
                hi = Li[0] / lo;
                break;
            }
        }
        first = lo;
        primes[0] = lo;
        primes[1] = hi;
        
        for (int i = 1; i < L; i++) {
            if (primes[25] != 0) break;
            
            lo = hi;
            hi = Li[i] / lo;
            insert(hi, primes, 26);
        }
        
        printf("Case #%d: ", t);
        putchar(primeToLetter(first, primes));
        hi = first;
        for (i = 0; i < L; i++) {
            lo = hi;
            hi = Li[i] / lo;
            putchar(primeToLetter(hi, primes));
        }
        putchar('\n');
        
        free(Li);
    }
    
    return 0;
}