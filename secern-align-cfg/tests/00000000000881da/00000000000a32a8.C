#include <stdio.h>
#include <string.h>

char x[120000];

int main()
{
    int cases, N;
    scanf("%d", &cases);
    for (int cas = 1; cas <= cases; cas++)
    {
        scanf("%d %s", &N, &x);
        int len = strlen(x);
        printf("Case #%d: ", cas);
        for (int i = 0; i < len; i++)
        {
            if (x[i] == 'S')
            {
                printf("E");
            }
            else
            {
                printf("S");
            }
        }
        printf("\n");
    }
    return 0;
}