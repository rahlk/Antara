#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main()
{
    int T, t;
    char N[101], A[101], B[101];
    int l, a, b, n, i;

    scanf( "%d\n", &T );
    for( t = 1 ; t <= T ; t++ )
    {
        scanf( "%s\n", N );
        l = strlen(N);
        memset( A, 0, sizeof(char)*101 );
        memset( B, 0, sizeof(char)*101 );
        a = b = 0;
        for( i = 0 ; i < l ; i++ )
        {
            n = N[i] - '0';
            switch( n )
            {
                case 0 :
                    if( a )
                        A[a++] = '0';
                    if( b )
                        B[b++] = '0';
                    break;

                case 1 :
                    A[a++] = '1';
                    if( b )
                        B[b++] = '0';
                    break;

                case 2 :
                case 4 :
                case 6 :
                    A[a++] = B[b++] = '0'+ (n/2);
                    break;

                case 3 :
                case 7 :
                case 9 :
                    A[a++] = '1';
                    B[b++] = '0' + n - 1;
                    break;

                case 5 :
                case 8 :
                    A[a++] = '3';
                    B[b++] = '0' + n - 3;
                    break;
            }
        }
        printf( "Case #%d: %s %s\n", t, A, B );

    }

    return 0;
}
