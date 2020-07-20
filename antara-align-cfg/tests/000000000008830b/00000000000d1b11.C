#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned long long hcf(unsigned long long x, unsigned long long y) {
    long t;
    while (x != 0) {
        t = x;
        x = y % x;
        y = t;
    }
    return y;
}

int main(int argc, char ** argv) {

    int t, i, l, j, k;
    unsigned long long n, last, currentmin=0;
    unsigned long long *cipher, *primes, order[26];
    char *decoded;

    if(!scanf("%d\n", &t)){
        printf("Error: no input");
        return(1);
    }

    for (i=1; i<=t; i++) {
        scanf("%llu %d", &n, &l);
        if((cipher = (unsigned long long *)malloc(sizeof(unsigned long long)
            *l))==NULL){
            printf("Error: couldn't allocate memory\n");
            return(1);
        }
        if((primes = (unsigned long long *)malloc(sizeof(unsigned long long)
            *(l+1)))==NULL){
            printf("Error: couldn't allocate memory\n");
            return(1);
        }
        
        
        for (j=0; j<l; j++){
            scanf("%llu ", &cipher[j]);
        }
        
        for (j=1; j<l; j++){
            primes[j]=hcf(cipher[j-1], cipher[j]);
        }
        primes[0]=cipher[0]/primes[1];
        primes[j]=cipher[j-1]/primes[j-1];
        
        last = 0;
        for (j=0; j<26; j++){
            currentmin = ULLONG_MAX;
            for(k=0; k<l+1; k++){
                if (primes[k]>last && primes[k]<currentmin) {
                    currentmin = primes[k];
                }
            }
            order[j]=currentmin;
            last = currentmin;
        }
        
        if((decoded = (char *)malloc(sizeof(char)*(l+2)))==NULL){
            printf("Error: couldn't allocate memory\n");
            return(1);
        }
        
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
        
        free(cipher);
        free(primes);
    }
    
}