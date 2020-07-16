#include <stdio.h>
#include <stdlib.h>

int is_not_four(int x)
{
    while (x > 0)
    {
        if (x % 10 == 4)
            return 0;
        x /= 10;
    }
    return 1;
}

int main()
{
    FILE* f = fopen("input.txt", "r");
    int t;
    fscanf(f, "%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        fscanf(f, "%d", &n);

        int ok = 1;
        for (int j = 0; ok && j < n; j++)
        {
            if (is_not_four(j) && is_not_four(n - j))
            {
                printf("Case #%d: %d %d\n", i + 1, j, n - j);
                ok = 0;
            }
        }
    }


    return 0;
}
