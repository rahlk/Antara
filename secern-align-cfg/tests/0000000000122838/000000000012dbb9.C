#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// #include <math.h>

#define MAX_LINE            2147483647


// Globals
char inLine[MAX_LINE];
char *cPtr;
long numTests;
long charles[100000];
long delila[100000];
long numSwords;
long fairDiff;
long answer;

long dSword(long l, long r)
{
    long i;
    long sword = -1;
    long maxSkill = -1;

    for( i=l;i<=r;i++)
    {
        // printf("D[%ld] = %ld\n", i, delila[i]);
        if( delila[i] > maxSkill )
        {
            maxSkill = delila[i];
            sword = i;
        }
    }
    return maxSkill;
}
long cSword(long l, long r)
{
    long i;
    long sword = -1;
    long maxSkill = -1;

    for( i=l;i<=r;i++)
    {
        // printf("C[%ld] = %ld\n", i, charles[i]);
        if( charles[i] > maxSkill )
        {
            maxSkill = charles[i];
            sword = i;
        }
    }
    return maxSkill;
}

int main( )
{
    long t, i, j;
    long cS, dS;
    long l, r;

    // Get number of tests
    //
    fgets(inLine, MAX_LINE, stdin);
    numTests = strtol(inLine, NULL, 10);
    // printf("DEBUG: numTests=%ld\n", numTests);

    for( t = 1; t <= numTests; t++ )
    {
        answer = 0;
        fgets(inLine, MAX_LINE, stdin);

        cPtr = &inLine[ 0 ];
        numSwords = strtol(cPtr, &cPtr, 10);
        fairDiff = strtol(cPtr, &cPtr, 10);
        // printf("DEBUG: N=%ld, K=%ld\n", numSwords, fairDiff);

        // read charles
        fgets(inLine, MAX_LINE, stdin);
        cPtr = &inLine[ 0 ];
        // printf("DEBUG Charles = ");
        for(i=0;i<numSwords;i++)
        {
            charles[i] = strtol(cPtr, &cPtr, 10);
            // printf("%ld ", charles[i]);
        }
        // printf("\n");
        // read delila
        fgets(inLine, MAX_LINE, stdin);
        cPtr = &inLine[ 0 ];
        // printf("DEBUG Delila = ");
        for(i=0;i<numSwords;i++)
        {
            delila[i] = strtol(cPtr, &cPtr, 10);
            // printf("%ld ", delila[i]);
        }
        // printf("\n");

        // Loop through all possible L and R and count fair fights
        for( l = 0; l < numSwords; l++ )
        {
            for( r = l; r < numSwords; r++ )
            {
                cS = cSword(l,r);
                dS = dSword(l,r);
                // printf("DEBUG: cS=%ld, dS=%ld\n", cS, dS);

                if( cS < dS )
                {
                    if((dS-cS) <= fairDiff )
                    {
                        answer++;
                    }
                }
                else
                {
                    if((cS-dS) <= fairDiff)
                    {
                        answer++;
                    }
                }
                
            }
        }


        printf( "Case #%ld: %ld\n", t, answer );
        fflush(stdout);
    }
}

