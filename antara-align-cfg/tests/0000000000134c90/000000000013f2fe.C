#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h>

#define MAX_LINE            1024


// Globals
char inLine[MAX_LINE];
char *cPtr;
long numTests;
long numProgs;
char progs[256][502];
long progLens[256];
char winner[501];
unsigned long isPossible;
long maxProgLen;
long haveWinner;

int main( )
{
    long t, i, j;
    long pLen;

    // Get number of tests
    //
    fgets(inLine, MAX_LINE, stdin);
    numTests = strtol(inLine, NULL, 10);
    // printf("DEBUG: numTests=%ld\n", numTests);

    for( t = 1; t <= numTests; t++ )
    {
        fgets(inLine, MAX_LINE, stdin);
        numProgs = strtol(inLine, NULL, 10);
        // printf("DEBUG: numProgs=%ld\n", numProgs);

        maxProgLen = 0;
        haveWinner = 0;
        for( i = 0; i < numProgs; i++ )
        {
            fgets(progs[i], MAX_LINE, stdin);
            progLens[i] = strlen(progs[i]) - 1;
            if( progLens[i] > maxProgLen )
            {
                maxProgLen = progLens[i];
            }
            // printf("DEBUG: prog=%s\n", progs[i]);
            // printf("DEBUG: progLen=%ld\n", progLens[i]);
        }

        for( pLen = 0; pLen < 500; pLen++ )
        {
            isPossible = 7;
            // printf("DEBUG: pLen=%ld\n", pLen);
            for( i = 0; i < numProgs; i++ )
            {
            // printf("DEBUG: i=%ld\n", i);
                j = pLen % progLens[i];
                // if( progLens[i] >= pLen )
                // {
                    if( progs[i][j] == 'R' )
                    {
                        isPossible &= 6;
                    }
                    else if( progs[i][j] == 'S' )
                    {
                        isPossible &= 5;
                    }
                    else
                    {
                        isPossible &= 3;
                    }
                // }
                // if( haveWinner == 1 )
                // {
                //     pLen = maxProgLen;
                //     i = numProgs;
                //     isPossible = 0;
                // }

                if( isPossible == 0 )
                {
                    pLen = 1000;
                    i = numProgs;
                }
            }
            if( isPossible )
            {
                if( isPossible == 7 ) // pick any one - this should be impossible
                {
                    winner[pLen] = 'R';
                }
                else if( isPossible == 6 ) // has to be paper
                {
                    winner[pLen] = 'P';
                    winner[pLen+1] = '\0';
                    haveWinner = 1;
                    pLen = 1000;
                }
                else if( isPossible == 5 ) // has to be rock
                {
                    winner[pLen] = 'R';
                    winner[pLen+1] = '\0';
                    haveWinner = 1;
                    pLen = 1000;
                }
                else if( isPossible == 3 ) // has to be scissors
                {
                    winner[pLen] = 'S';
                    winner[pLen+1] = '\0';
                    haveWinner = 1;
                    pLen = 1000;
                }
                else if( isPossible == 4 ) // extend with rock
                {
                    winner[pLen] = 'R';
                }
                else if( isPossible == 2 ) // extend with paper
                {
                    winner[pLen] = 'P';
                }
                else  // == 1 extend with paper
                {
                    winner[pLen] = 'S';
                }
                // winner[pLen] = '0' + isPossible;
                isPossible = 7;
            }
        }
        if( haveWinner )
        {
            winner[pLen+1] = '\0';
            printf( "Case #%ld: %s\n", t, winner );
        }
        else
        {
            printf( "Case #%ld: IMPOSSIBLE\n", t );
        }

        fflush(stdout);
    }
}

