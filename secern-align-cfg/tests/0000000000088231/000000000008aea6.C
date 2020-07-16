#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h>

#define MAX_LINE            1024

// Globals
char inLine[MAX_LINE];
char *cPtr;
long numTests;
char num1[MAX_LINE], num2[MAX_LINE];
unsigned long numLen;

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
        // printf("DEBUG: inLine=%s\n", inLine);
        numLen = strlen(inLine) - 1;
        // printf("DEBUG: numLen=%ld\n", numLen);

        for( i = 0; i < numLen; i++ )
        {
            if( inLine[i] == '4' )
            {
                num1[i] = '3';
                num2[i] = '1';
            }
            else
            {
                num1[i] = inLine[i];
                num2[i] = '0';
            }
        }
        num1[i] = '\0';
        num2[i] = '\0';

        i = 0;
        while(num2[i] == '0')
        {
            i++;
        }

        printf( "Case #%ld: %s %s\n", t, num1, &num2[i]);
        fflush(stdout);
    }
}

