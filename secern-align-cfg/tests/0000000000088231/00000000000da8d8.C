#include <stdio.h>

int has4(int number)
{
    int retVal = 0, i;
    for (i = 0;; ++i, number /= 10)
    {
        if ((number % 10) == 4)
        {
            retVal = 1;
            break;
        }
        if (number < 10)
            break;
    }

    return retVal;
}

void main()
{
    int T, z, n, v1, v2;
    scanf("%d", &T);
    for (z = 1; z <= T; z++)
    {
        scanf("%d", &n);
        v1 = 1;
        v2 = n - 1;
        while (1)
        {
            if (has4(v1) == 1 || has4(v2) == 1)
            {
                v1++;
                v2--;
                continue;
            }
            break;
        }
        printf("Case #%d: %d %d\n", z, v1, v2);
    }
}