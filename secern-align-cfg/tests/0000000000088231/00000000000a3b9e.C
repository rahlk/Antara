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
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            if (is_not_four(j))
                if (is_not_four(n - j))
                {
                    printf("Case #%d: %d %d\n", i + 1, j, n - j);
                    break;
                }
        }
    }


    return 0;
}
