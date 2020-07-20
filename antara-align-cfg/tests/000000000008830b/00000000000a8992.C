#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int known_primes;
int primes[26];

int factor( int a, int b ) {
    while( a != 0 && b != 0 ) {
        if( a > b )
            a %= b;
        else
            b %= a;
    }
    return (a==0)?b:a;
}
void add( int a ) {
    for( int i = 0; i < known_primes; i++ ) {
        if( primes[i] > a ) {
            known_primes++;
            int tmp = a;
            for( int j = i; j < known_primes; j++ ) {
                primes[j] ^= tmp;
                tmp ^= primes[j];
                primes[j] ^= tmp;
            }
            return ;
        } else if ( primes[i] == a ) {
            return ;
        }
    }
    primes[known_primes] = a;
    known_primes++;
}
char find( int a ) {
    for( int i = 0; i < known_primes; i++ ) {
        if( primes[i] == a ) {
            return 'A' + i;
        } 
    }
    return '0';
}

int main() {
    int T;
    scanf("%d\n", &T);
    
    for( int i = 0; i < T; i++ ) {
        known_primes = 0;
        int N, L;
        int input[104] = {0};
        int outputtmp[104] = {0};
        char output[104] = {0};
        scanf("%d %d ", &N, &L);
        
        for( int j = 0; j < L; j++ ) {
            scanf("%d", &input[j]);
        }
        {   // Skip aba case
            int j = 0;
            while( input[j] == input[j+1] ) {
                j++;
            }
            int finalj = j;
        
            // factor 1 and easy count others
            int tmp = factor(input[j], input[j+1]);
            outputtmp[j+1] = tmp;
            add( tmp );
            for( j++; j < L; j++ ) {
                outputtmp[j+1] = input[j] / outputtmp[j];
                add( outputtmp[j+1] );
            }
            
            for( int j = finalj; j >=0; j-- ) {
                outputtmp[j] = input[j] / outputtmp[j+1];
                add( outputtmp[j] );
            }
        }
        
        for( int j = 0; j < L+1; j++ ) {
            output[j] = find( outputtmp[j] );
        }
        output[L+1] = '\0';
        
        printf("Case #%d: %s\n", i+1, output);
    }
    
    return 0;
}
