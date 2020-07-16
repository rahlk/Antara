#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int hcf(int x, int y) {
    int t;
    while (x != 0) {
        t = x;
        x = y % x;
        y = t;
    }
    return y;
}

int main(int argc, char ** argv) {

    int t, i, l, j, k;
    int n, last, currentmin=0;
    int *cipher, *primes, order[26];
    char *decoded;

    scanf("%d\n", &t)
    

    for (i=1; i<=t; i++) {
        scanf("%d %d", &n, &l);
        int cipher[l];
        int primes[l+1]
        
        
        for (j=0; j<l; j++){
            scanf("%d ", &cipher[j]);
        }
        
        for (j=1; j<l; j++){
            primes[j]=hcf(cipher[j-1], cipher[j]);
        }
        primes[0]=cipher[0]/primes[1];
        primes[j]=cipher[j-1]/primes[j-1];
        
        last = 0;
        for (j=0; j<26; j++){
            currentmin = INT_MAX;
            for(k=0; k<l+1; k++){
                if (primes[k]>last && primes[k]<currentmin) {
                    currentmin = primes[k];
                }
            }
            order[j]=currentmin;
            last = currentmin;
        }
        
        char decoded[l+2];
        
        for (j=0; j<=l; j++){
            for (k=0; k<26; k++){
                if (primes[j]==order[k]){
                    decoded[j]=65+k;
                    break;
                }
            }
        }
        decoded[j]='\0';
        
        printf("Case #%d: %s\n", i, decoded);

    }
    
}