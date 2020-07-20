#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// #include <math.h>

#define MAX_LINE            1024

// Globals
char inLine[MAX_LINE];
char *cPtr;
long numTests;
long grid[100001][100001];

void showGrid(long x, long y)
{
    long j,k;

    for(k=y;k>=0;k--)
    {
        for(j=0;j<=x;j++)
        {
            printf("%ld ", grid[j][k]);
        }
        printf("\n");
    }
}

int main( )
{
    long t, i;
    long numPeople, numStreets;
    char dir;
    long x, y;
    long j,k;
    long max, maxCount, maxX, maxY;

    // Get number of tests
    //
    fgets(inLine, MAX_LINE, stdin);
    numTests = strtol(inLine, NULL, 10);
    // printf("DEBUG: numTests=%ld\n", numTests);

    for( t = 1; t <= numTests; t++ )
    {
        fgets(inLine, MAX_LINE, stdin);

        cPtr = &inLine[ 0 ];
        numPeople = strtol(cPtr, &cPtr, 10);
        numStreets = strtol(cPtr, &cPtr, 10);
        // printf("DEBUG: numPeople=%ld, numStreets=%ld\n", numPeople, numStreets);

        //clear intersection array
        for(j=0;j<=numStreets;j++)
        {
            for(k=0;k<=numStreets;k++)
            {
                grid[j][k] = 0;
            }
        }

        for( i = 0; i < numPeople; i++ )
        {
            fgets(inLine, MAX_LINE, stdin);

            cPtr = &inLine[ 0 ];
            x = strtol(cPtr, &cPtr, 10);
            y = strtol(cPtr, &cPtr, 10);
            dir = *(cPtr + 1);
            // printf("DEBUG: x=%ld, y=%ld, dir=%c\n", x, y, dir);

            if( dir == 'N' )
            {
                for(j=0;j<=numStreets;j++)
                {
                    for(k=y+1;k<=numStreets;k++)
                    {
                        grid[j][k] += 1;
                    }
                }
                // showGrid(numStreets,numStreets);
            }
            else if( dir == 'S' )
            {
                for(j=0;j<=numStreets;j++)
                {
                    for(k=y-1;k>=0;k--)
                    {
                        grid[j][k] += 1;
                    }
                }
            }
            else if( dir == 'E' )
            {
                for(k=0;k<=numStreets;k++)
                {
                    for(j=x+1;j<=numStreets;j++)
                    {
                        grid[j][k] += 1;
                    }
                }
            }
            else //West
            {
                for(k=0;k<=numStreets;k++)
                {
                    for(j=x-1;j>=0;j--)
                    {
                        grid[j][k] += 1;
                    }
                }
            }

            // Grid is set, find the target point
            max = 0;
            maxCount = 0;
            maxX = 0;
            maxY = 0;
            for( k =0; k <= numStreets; k++ )
            {
                for( j=0; j <= numStreets; j++ )
                {
                    if( grid[j][k] > maxCount )
                    {
                        maxX = j;
                        maxY = k;
                        maxCount = grid[j][k];
                    }
                }
            }
        }

        printf( "Case #%ld: %ld %ld\n", t, maxX, maxY );
        fflush(stdout);
    }
}

