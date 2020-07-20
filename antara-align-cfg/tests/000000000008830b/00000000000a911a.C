#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>

int main() {
    int T;
    
    scanf(" %d", &T);
    
    int Q;
    
    // Just solving the easy case as I don't have a
    // language with a big integer library handy.
    // So first cache all the primes you will need.

    int *primes = malloc(sizeof(int[1500]));
    
    {
        int i;
        
        primes[0] = 2;
        
        int prime_count = 1;
        
        for (i = 3; i <= 12000; i += 2) {
            int j;
            
            bool is_prime = true;
            
            for (j = 0; primes[j] * primes[j] <= i; j++) {
                if (i % primes[j] == 0) {
                    is_prime = false;
                    break;
                }
            }
            
            if (is_prime) {
                primes[prime_count++] = i;
            }
        }
    }
    
    int alphabet[27];
    int smaller_factor[200];
    int larger_factor[200];
    int true_factor[200];
    
    for (Q = 1; Q <= T; Q++) {
        int N;
        int L;
        
        scanf(" %d %d", &N, &L);
        
        int i;
        
        memset(true_factor, 0, 200);
        
        for (i = 0; i < L; i++) {
            int D;
            
            scanf(" %d", &D);
            
            int j;
            
            for (j = 0; D % primes[j]; j++);
            
            smaller_factor[i] = primes[j];
            larger_factor[i] = D / primes[j];
        }
        
        // We have to work backwards from the first factor
        // that doesn't appear in the first product.
        
        int first_new_factor_index = -1;
        
        for (i = 1; i < L; i++) {
            if (   smaller_factor[i] != smaller_factor[0]
                || larger_factor[i] != larger_factor[0]) {
                if (smaller_factor[i] != smaller_factor[0] && smaller_factor[i] != larger_factor[0]) {
                    true_factor[i + 1] = smaller_factor[i];
                } else {
                    true_factor[i + 1] = larger_factor[i];
                }
                
                first_new_factor_index = i + 1;
                break;
            }
        }
        
        assert(first_new_factor_index != -1);
        
        for (i = first_new_factor_index - 1; i >= 0; i--) {
            if (smaller_factor[i] == true_factor[i + 1]) {
                true_factor[i] = larger_factor[i];
            } else {
                true_factor[i] = smaller_factor[i];
            }
        }
        
        for (i = first_new_factor_index + 1; i <= L; i++) {
            if (true_factor[i - 1] == smaller_factor[i - 1]) {
                true_factor[i] = larger_factor[i - 1];
            } else {
                true_factor[i] = smaller_factor[i - 1];
            }
        }
        
        // We now just need to unique and sort these puppies.
        
        int alphabet_length = 0;
        
        for (i = 0; i <= L; i++) {
            int j;
            
            bool is_new = true;
            
            for (j = 0; j < alphabet_length; j++) {
                if (alphabet[j] > true_factor[i]) {
                    memmove(&alphabet[j + 1], &alphabet[j], sizeof(int[alphabet_length - j]));
                    break;
                } else if (alphabet[j] == true_factor[i]) {
                    is_new = false;
                    break;
                }
            }
            
            if (is_new) {
                alphabet[j] = true_factor[i];
                alphabet_length++;
            }
        }
        
        assert(alphabet_length == 26);
        
        printf("Case #%d: ", Q);
        
        for (i = 0; i <= L; i++) {
            int j;
            
            for (j = 0; j < alphabet_length; j++) {
                if (true_factor[i] == alphabet[j]) {
                    putchar((char)('A' + j));
                    break;
                }
            }
        }
        
        putchar('\n');
    }
}