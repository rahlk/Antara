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

        int p = 1;
        int a = 0;
        while (n / p)
        {
            if ((n / p) % 10 == 4)
                a += p;
            p *= 10;
        }
        printf("Case #%d: %d %d\n", i + 1, a, n - a);
    }


    return 0;
}
