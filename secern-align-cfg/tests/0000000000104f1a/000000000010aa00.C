#include <stdio.h>
#include <stdlib.h>


int main() {
    int try[7] = {17, 13, 11, 7, 5, 3, 2};
    int T, N, M;
    scanf("%d %d %d", &T, &N, &M);
    
    int rec[18];
    int base = 0, mode = 0;
    for( int i = 0; i < T; i++ ) {
        for( int j = 0; j < N; j++ ) {
            
            for( int k = 0; k < 18; k++ ) {
                printf("%d ", try[j] );
            }
            puts("");
            fflush(stdout);
            
            int tmp = 0;
            for( int k = 0; k < 18; k++ ) {
               scanf("%d", &rec[k] );
               tmp += rec[k];
            }
            
            if( base == 0 ) {
                base = try[j];
                mode = tmp;
            } else {
                while( 1 ) {
                    while( mode < tmp ) {
                        mode += base;
                    }
                    while( mode > tmp ) {
                        tmp += try[j];
                    }
                    if( mode == tmp ) {
                        break;
                    }
                }
                base *= try[j];
            }
            
            if( mode + base > M ) {
                printf("%d\n", mode );
                break;
            } else if ( j == N-1 ) {
                while( mode + base < M ) {
                    mode += base;
                }
                printf("%d\n", mode );
                break;
            }
            //fprintf( stderr, "base = %d, mode = %d\n", base, mode );
        }
        fflush(stdout);
        int ret;
        scanf("%d", &ret);
    }
    
    return 0;
}