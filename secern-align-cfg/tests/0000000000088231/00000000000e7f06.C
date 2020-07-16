#include <stdio.h>

void splitChecks(int N, int i)
{
    int temp = N;
    int digitNum = 1;
    int oneSide = 0;

    // Find all 4's
    while (temp != 0)
    {
        float nextDigit = temp % 10;
        if (nextDigit == 4)
        {
            oneSide += digitNum;
        }

        // Lop off LSD
        temp /= 10;
        // Add a zero to digitNum counter
        digitNum *= 10;
    }

    // Modify array
    printf("Case #%d: %d %d\n", i, oneSide, N - oneSide);
}

int main()
{
    int i;
    // Get number of tests
    int numTests;
    scanf("%d", &numTests);
    int jamcoins[numTests];

    for (i = 0; i < numTests; ++i)
    {
        scanf("%d", jamcoins + i);
    }

    for (i = 0; i < numTests; ++i)
    {
        splitChecks(jamcoins[i], i + 1);
    }

    return 0;
}