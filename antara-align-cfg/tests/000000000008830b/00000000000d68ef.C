#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int gcd( int a, int b );


int main()
{
    int T, t;
    int C[100], P[101], table[26];
    char  text[102];
    int L, N, i, j, k, min, max;

    scanf( "%d\n", &T );
    for( t = 1 ; t <= T ; t++ )
    {
        scanf( "%d %d\n", &N, &L );
        for( i = 0 ; i < L ; i++ )
            scanf( "%d ", &C[i] );

        if( N > 65536 )
        {
            printf( "Case #%d: ERROR\n", t );
            continue;
        }
        P[1] = gcd( C[0], C[1] );
        P[0] = C[0]/P[1];
        for( i = 2 ; i <= L ; i++ )
        {
            P[i] = C[i-1]/P[i-1];
        }

        memset( table, 0, sizeof(int)*26 );
        min = max = 0;
        for( i = 0 ; i <= L ; i++ )
        {
            if( P[i] > table[max] )
            {
                if( table[max] )
                    max++;
                table[max] = P[i];
            }
            else
            {
                for( j = min ; j <= max ; j++ )
                {
                    if( P[i] == table[j] )
                        break;
                    if( P[i] < table[j] )
                    {
                        for( k = max ; k >= j ; k-- )
                            table[k+1] = table[k];
                        max++;
                        table[j] = P[i];
                        break;
                    }
                }
            }
        }

        memset( text, 0, sizeof(char)*102 );
        for( i = 0 ; i <= L ; i++ )
        {
            for( j = min ; j <= max ; j++ )
            {
                if( P[i] == table[j] )
                    break;
            }
            text[i] = 'A' + j;
        }

        printf( "Case #%d: %s\n", t, text );
    }

    return 0;
}



int gcd( int a, int b )
{
    int r;

    while( b )
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}
