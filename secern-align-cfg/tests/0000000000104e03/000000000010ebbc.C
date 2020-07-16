#include <stdio.h>
#include <stdlib.h>

int x[21][21];
int r, c;

int     find_next_location(int *row, int *col)
{
    int     i;
    int     j;

    i = 1;
    while (i <= r)
    {
        j = 1;
        while (j <= c)
        {
            if (x[i][j] == 0)
            {
                *row = i;
                *col = j;
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;
}

int is_used(int nr)
{
    for (int i = 1; i <= r; i++)
        for (int j = 1; j <= c; j++)
            if (x[i][j] == nr)
                return 1;
    return 0;
}

int f_abs(int n)
{
    if (n < 0)
        return -n;
    return n;
}

int is_ok(int row, int col, int nr)
{
    int i, j;

    if (nr == 1)
        return 1;
    for (i = 1; i <= r; i++)
        for (j = 1; j <= c; j++)
            if (x[i][j] == nr - 1)
            {
                if (i == row)
                    return 0;
                if (j == col)
                    return 0;
                if (f_abs(i - j) == f_abs(row - col))
                        return 0;
                if (i + j == row + col)
                    return 0;

                return 1;
            }

    return 1;
}

int    solve()
{
    int     row;
    int     col;
    int     i;

    if (find_next_location(&row, &col) == 1)
        return 1;
    i = 1;
    while (i <= r * c)
    {
        if (is_used(i) == 0)
            if (is_ok(row, col, i) == 1)
            {
                x[row][col] = i;
                if (solve() == 1)
                    return 1;
                x[row][col] = 0;
            }
        i++;
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &r, &c);

        int ok = 1;
        if (c == r)
            ok = 0;

        for (int j = 1; ok && j <= r; j++)
            for (int k = 1; ok && k <= c; k++)
                x[j][k] = 0;


        if (ok && solve())
        {

            printf("Case #%d: POSSIBLE", i + 1);
            int cont = 1;
            int m = r*c;

            for (int j = 1; cont <= m && j <= r; j++)
            {
                for (int k = 1; cont <= m && k <= c; k++)
                     if (x[j][k] == cont)
                     {
                         printf("\n%d %d", j, k);
                         cont++;
                         j = 1;
                         k = 1;
                     }
            }

        }
        else
            printf("Case %d: IMPOSSIBLE", i + 1);
    }

    return 0;
}
