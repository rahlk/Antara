#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// #include <math.h>

#define MAX_LINE            1024


// Globals
char inLine[MAX_LINE];
char *cPtr;
long numTests;
long numRows;
long numCols;
long grid[20][20];

int main( )
{
    long t, n, i, j, k;
    long r, c, numSpots;

    // Get number of tests
    //
    fgets(inLine, MAX_LINE, stdin);
    numTests = strtol(inLine, NULL, 10);
    // printf("DEBUG: numTests=%ld\n", numTests);

    for( t = 1; t <= numTests; t++ )
    {
        fgets(inLine, MAX_LINE, stdin);

        cPtr = &inLine[ 0 ];
        numRows = strtol(cPtr, &cPtr, 10);
        numCols = strtol(cPtr, &cPtr, 10);
        // printf("DEBUG: rows=%ld cols=%ld\n", numRows, numCols);

        if( numRows + numCols < 7 )
        {
            printf( "Case #%ld: IMPOSSIBLE\n", t );
        }
        else
        {
            printf( "Case #%ld: POSSIBLE\n", t );

            // Clear grid
            for(i=0;i<20;i++)
            {
                for(j=0;j<20;j++)
                {
                    grid[i][j] = 0;
                    // printf("i(%ld),j(%ld) = %ld\n", i, j, n);
                }
            }

            i = 1;
            j = 2;
            r = 0;
            c = 0;
            // If the grid is taller than wider, swap the adders
            if( numRows > numCols )
            {
                i = 2;
                j = 1;
            }

            numSpots = numRows * numCols;
            for( n=0; n < numSpots; n++ )
            {
                if( grid[r][c] == 0 )
                {
                    printf("%ld %ld\n", (r + 1), (c + 1) );
                    grid[r][c] = 1;
                    r += i;
                    // printf("DEBUG: r = %ld\n", r);
                    // printf("DEBUG: i = %ld\n", i);
                    if( r >= numRows )
                    {
                        r -= numRows;
                        // printf("DEBUG RESET ROWS: r = %ld\n", r);
                    }

                    c += j;
                    if( c >= numCols )
                    {
                        c -= numCols;
                    }
                }
                else
                {
                    if( j == 2 )
                    {
                        k = c;
                        while(grid[r][k] != 0)
                        {
                            k++;
                            if(k > numCols)
                            {
                                k -= numCols;
                            }
                        }
                    }
                    else
                    {
                        k = r;
                        while(grid[k][c] != 0)
                        {
                            k++;
                            if(k > numRows)
                            {
                                k -= numRows;
                            }
                        }
                    }

                    printf("%ld %ld\n", (r + 1), (c + 1) );
                    grid[r][c] = 1;
                    r += i;
                    // printf("DEBUG: r = %ld\n", r);
                    // printf("DEBUG: i = %ld\n", i);
                    if( r >= numRows )
                    {
                        r -= numRows;
                        // printf("DEBUG RESET ROWS: r = %ld\n", r);
                    }

                    c += j;
                    if( c >= numCols )
                    {
                        c -= numCols;
                    }

                    // printf("ERROR\n");
                }
                
            }

        }
        

        fflush(stdout);
    }
}

