#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main()
{
    int T, t;
    int A;
    char    a[255][501], p[501];
    int     w[255][500], P[500];
    int     i, j, k, maxlen;
    int     impossible;

    scanf( "%d", &T );
    for( t = 1 ; t <= T ; t++ )
    {
        scanf( "%d", &A );
        memset( a, 0, sizeof(char)*255*501 );
        memset( p, 0, sizeof(char)*501 );

        maxlen = 0;
        for( i = 0 ; i < A ; i++ )
        {
            scanf( "%s", a[i] );
            if( strlen(a[i]) > maxlen )
                maxlen = strlen( a[i] );
        }

        for( i = 0 ; i < A ; i++ )
        {
            for( j = 0 ; j < maxlen ; j++ )
            {
                switch( a[i][j] )
                {
                    case 'R' :
                        w[i][j] = 1 | 4;
                        break;
                    case 'S' :
                        w[i][j] = 1 | 2;
                        break;
                    case 'P' :
                        w[i][j] = 2 | 4;
                        break;
                    case 0 :
                        break;
                }
                if( !a[i][j] )
                    break;
            }
            if( j < maxlen )
            {
                for( k = j ; k < maxlen ; k++ )
                    w[i][k] = w[i][k%j];
            }
        }

        impossible = 0;
        memset( P, 0, sizeof(int)*500 );
        memset( p, 0, sizeof(char)*501 );
        for( j = 0 ; j < maxlen ; j++ )
        {
            P[j] = 1 | 2 | 4;
            for( i = 0 ; i < A ; i++ )
            {
                P[j] &= w[i][j];
            }
            if( P[j] == 0 )
            {
                impossible = 1;
                break;
            }
            switch( P[j] )
            {
                case 0 :
                    impossible = 1;
                    break;

                case 1 :
                case 3 :
                case 5 :
                case 7 :
                    p[j] = 'R';
                    break;

                case 2 :
                case 6 :
                    p[j] = 'S';
                    break;

                case 4 :
                    p[j] = 'P';
                    break;
            }

            if( impossible )
                break;
        }

        if( impossible )
            printf( "Case #%d: IMPOSSIBLE\n", t );
        else
            printf( "Case #%d: %s\n", t, p );
    }

    return 0;
}
