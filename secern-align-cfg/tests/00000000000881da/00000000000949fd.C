#include <stdio.h>
#include <stdlib.h>


char P[100000], M[100000];

int main()
{
    int T, t;
    int N, i;

    scanf( "%d\n", &T );
    for( t = 1 ; t <= T ; t++ )
    {
        scanf( "%d\n", &N );
        scanf( "%s\n", P );
        for( i = 0 ; i < N*2-2 ; i++ )
        {
            switch( P[i] )
            {
                case 'E' :
                    M[i] = 'S';
                    break;

                case 'S' :
                    M[i] = 'E';
                    break;
            }
        }
        M[i] = 0;
        printf( "Case #%d: %s\n", t, M );

    }

    return 0;
}
