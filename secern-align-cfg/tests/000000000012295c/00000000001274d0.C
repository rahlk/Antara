#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main()
{
    int T, t;
    int Qx[100001], Qy[100001];
    int P, Q, x, y;
    char    D;
    int max, maxx, maxy, i, j;

    scanf( "%d\n", &T );
    for( t = 1 ; t <= T ; t++ )
    {
        scanf( "%d %d\n", &P, &Q );
        memset( Qx, (int)0, sizeof(int)*100001 );
        memset( Qy, (int)0, sizeof(int)*100001 );
        for( i = 0 ; i < P ; i++ )
        {
            scanf( "%d %d %c\n", &x, &y, &D );

            switch( D )
            {
                case    'N' :
                    for( j = y+1 ; j <= Q ; j++ )
                        Qy[j]++;
                    break;

                case    'S' :
                    for( j = 0 ; j < y ; j++ )
                        Qy[j]++;
                    break;

                case    'W' :
                    for( j = 0 ; j < x ; j++ )
                        Qx[j]++;
                    break;

                case    'E' :
                    for( j = x+1 ; j <= Q ; j++ )
                        Qx[j]++;
                    break;
            }
        }

        max = maxx = 0;
        for( i = 0 ; i <= Q ; i++ )
        {
            if( Qx[i] > max )
            {
                max = Qx[i];
                maxx = i;
            }
        }

        max = maxy = 0;
        for( i = 0 ; i <= Q ; i++ )
        {
            if( Qy[i] > max )
            {
                max = Qy[i];
                maxy = i;
            }
        }

        printf( "Case #%d: %d %d\n", t, maxx, maxy );
    }

    return 0;
}
