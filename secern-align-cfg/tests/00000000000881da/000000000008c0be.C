#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h>

#define MAX_LINE            1024

// Globals
char inLine[MAX_LINE];
char *cPtr;
long numTests;

int main( )
{
    long t, i, j;

    // Get number of tests
    //
    fgets(inLine, MAX_LINE, stdin);
    numTests = strtol(inLine, NULL, 10);
    // printf("DEBUG: numTests=%ld\n", numTests);

    for( t = 1; t <= numTests; t++ )
    {
        fgets(inLine, MAX_LINE, stdin);
        fgets(inLine, MAX_LINE, stdin);
        i = 0;
        printf( "Case #%ld: ", t);
        while(inLine[i] > 'A')
        {
            if(inLine[i] == 'E' )
            {
                printf("S");
            }
            else
            {
                printf("E");
            }
            i++;
        }
        printf("\n");
        fflush(stdout);
    }
}
