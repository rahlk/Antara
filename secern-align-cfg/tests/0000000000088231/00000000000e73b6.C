#include <stdio.h>

void splitChecks(int N, int *checkArr)
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
    checkArr[0] = oneSide;
    checkArr[1] = N - oneSide;
}

void main()
{
    int checks[2];

    // Get number of tests
    int numTests;
    scanf("%d", &numTests);

    for (int i = 1; i <= numTests; ++i)
    {
        int N;
        scanf("%d", &N);
        splitChecks(N, checks);
        printf("Case #%d: %d %d\n", i, checks[0], checks[1]);
    }
}