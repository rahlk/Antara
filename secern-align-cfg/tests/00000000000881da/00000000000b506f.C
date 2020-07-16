#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s;

        printf("Case #%d: ", i + 1);
        int j;
        fflush(stdin);
        for (j = 0; j < 2 * n - 2; j++)
        {
            scanf("%c", &s);
            if (s == 'S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");
    }

    return 0;
}
