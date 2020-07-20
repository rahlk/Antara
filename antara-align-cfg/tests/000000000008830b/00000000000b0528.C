#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, l;
        scanf("%d", &n);
        scanf("%d", &l);

        int* dp = (int*) calloc (n + 1, sizeof(int));
        for(int m=2; m<=n; m++)
        {
            if (dp[m]==0)
                dp[m] = 1;

            for(int p=2; p<=m && p*m<=n; p++)
            {
                if (dp[p] == 1 && dp[p*m] == 0)
                {
                    dp[p*m] = dp[p] + dp[m];
                }
            }
        }


        int* alf = (int*) calloc (n, sizeof(int));
        int lit = 90;
        int nr = n;

        while (lit >= 65)
        {
            if (dp[nr] == 1)
            {
                alf[nr] = lit;
                lit--;
            }
            nr--;
        }

        while (dp[nr] != 1)
            nr++;

        int a;
        scanf("%d", &a);

        int d = nr;
        int ok = 1;
        while (ok)
        {
            if (a % d == 0)
                ok = 0;
            else
                d++;
        }
        int b = a / d;
        printf("Case #%d: ", i + 1);
        for (int j = 1; j < l; j++)
        {
            scanf("%d", &a);

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

        scanf("%d", &a);

        if (a % b == 0)
            printf("%c", alf[d]);
        printf("%c\n", alf[b]);


        free(dp);
        free(alf);
    }

    return 0;
}
