/**
 * CodeJam 2019 - Qualification Round - (Foregone Solution)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_N 1000

/** Process all input numbers. */
int main(int argc, char *argv[])
{
    long N = -1;
    int T = -1;
    int TC = 1;
    int i;

    char strL[SIZE_N];
    char strR[SIZE_N];

    long L = 0;
    long R = 0;

    scanf("%d", &T);

    while (scanf("%ld", &N) == 1 && (T > 0))
    {
        sprintf(strL, "%ld", N);

        for (i = 0; i < strlen(strL); i++)
        {
            strR[i] = '0';

            if (strL[i] == '4')
            {
                strL[i] = '2';
                strR[i] = '2';
            }
        }

        strL[i] = '\0';
        strR[i] = '\0';

        L = atol(strL);
        R = atol(strR);

        printf("Case #%d: %ld %ld\n", TC, L, R);
        fflush(stdout);

        TC++;
        T--;
    }
};
