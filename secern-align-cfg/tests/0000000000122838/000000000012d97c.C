#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main()
{
    int T, t;
    int N, K;
    int C[100001], D[100001];
    int i, j, k;
    int maxc, maxd, count;

    scanf( "%d\n", &T );
    for( t = 1 ; t <= T ; t++ )
    {
        scanf( "%d %d\n", &N, &K );
        memset( C, (int)0, sizeof(int)*100001 );
        memset( D, (int)0, sizeof(int)*100001 );
        for( i = 0 ; i < N ; i++ )
            scanf( "%d ", &C[i] );
        scanf( "\n" );
        for( i = 0 ; i < N ; i++ )
            scanf( "%d ", &D[i] );
        scanf( "\n" );

        count = 0;
        for( i = 0 ; i < N ; i++ )
        {
            for( j = i ; j < N ; j++ )
            {
                if( j > i )
                {
                    if( C[j] > maxc )
                        maxc = C[j];
                    if( D[j] > maxd )
                        maxd = D[j];
                }
                else
                {
                    maxc = maxd = 0;
                    for( k = i ; k <= j ; k++ )
                    {
                        if( C[k] > maxc )
                            maxc = C[k];
                        if( D[k] > maxd )
                            maxd = D[k];
                    }
                }
                if( abs( maxc - maxd ) <= K )
                    count++;
            }
        }

        printf( "Case #%d: %d\n", t, count );
    }

    return 0;
}
