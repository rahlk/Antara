#include <stdio.h>

int main()
{
    int T, N, i;
    char c;
    scanf("%d", &T);
    for (i=1; i<=T; i++)
    {
        scanf(" %d", &N);
        getchar();
        printf("Case #%d: ", i);
        do
        {
			c = getchar();
            if (c == 'E')
                putchar('S');
            if (c == 'S')
                putchar('E');
        } while (c != '\n');
        putchar('\n');
    }
    return 0;
}