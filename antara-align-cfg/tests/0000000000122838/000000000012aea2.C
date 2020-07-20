#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n;
    int T, N, K;
    int i, j;
    int bigC, bigD;
    int *C;
    int *D;
    int counter = 0;

    scanf("%d", &T);

    for (t = 0; t < T; t++)
    {
        scanf("%d %d", &N, &K);
        C = (int *)malloc(sizeof(int) * N);
        D = (int *)malloc(sizeof(int) * N);
        counter = 0;

        for (n = 0; n < N; n++)
        {
            scanf("%d", &C[n]);
        }

        for (n = 0; n < N; n++)
        {
            scanf("%d", &D[n]);
        }

        for (i = 0; i < N; i++)
        {
            bigC = 0;
            bigD = 0;

            for (j = i; j < N; j++)
            {
                if (C[j] > bigC)
                {
                    bigC = C[j];
                }

                if (D[j] > bigD)
                {
                    bigD = D[j];
                }

                if (abs(bigD - bigC) <= K)
                {
                    counter++;
                }
            }
        }

        printf("Case #%d: %d\n", t + 1, counter);
    }

    return 0;
}