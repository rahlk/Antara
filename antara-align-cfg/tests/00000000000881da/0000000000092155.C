/**
 * CodeJam 2019 - Qualification Round - (You Can Go Your Own Way)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    long N = -1;
    int T = -1;
    int TC = 1;
    char M = '0';

    scanf("%d", &T);

    while (T > 0)
    {
        scanf("%ld", &N);

        printf("Case #%d: ", TC);

        for (int i = 0; i < 2 * N - 2; i++)
        {
            scanf(" %c", &M);

            if (M == 'E') {
                printf("S");
            }
            else {
                printf("E");
            }
        }
        
        printf("\n");

        // Flush streams.
        fflush(stdout);

        // Control the number of test cases.
        TC++;
        T--;
    }
};
