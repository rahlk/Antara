#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f = fopen("in.txt", "r");

    int t;
    fscanf(f, "%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, l;
        fscanf(f, "%d", &n);
        fscanf(f, "%d", &l);

        int* dp = (int*) calloc (n + 1, sizeof(int));
        for(int m = 2; m <= n; m++)
        {
            if (dp[m]==0)
                dp[m] = 1;

            for(int p=2; p<=m && p*m<=n; p++)
            {
                if (dp[p] == 1 && dp[p*m] == 0)
                {
                    dp[p*m] = 2;
                }
            }
        }


        int* alf = (int*) calloc (n + 1, sizeof(int));
        int lit = 90;
        int nr = n;

        while (nr >= 2)
        {
            if (dp[nr] == 1)
            {
                alf[nr] = lit;
                lit--;
                if (lit == 64)
                    lit = 90;
            }
            nr--;
        }

        int a;
        fscanf(f, "%d", &a);

        int d = 2;
        int ok = 1;
        while (ok)
        {
            if (a % d == 0)
                ok = 0;
            else
                d++;
        }
        int b = a / d;

        for (int j = 1; j < l; j++)
        {
            fscanf(f, "%d", &a);

            if (a % b == 0)
            {
                printf("%c", alf[d]);
                d = b;
                b = a / d;
            }
            else
            {
                printf("%c", alf[b]);
                b = a / d;
            }
        }

        fscanf(f, "%d", &a);

        if (a % b == 0)
        {
            printf("%c", alf[d]);
            printf("%c", alf[b]);

        }
        else
        {
            printf("%c", alf[b]);
            printf("%c", alf[d]);
        }
        printf("\n");

        free(dp);
        free(alf);
    }

    return 0;
}
