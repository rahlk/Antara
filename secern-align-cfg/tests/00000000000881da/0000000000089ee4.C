#include <stdio.h>
#include <string.h>

int main (int argc, char** argv)
{
    int t, tests;
    scanf("%d\n", &tests);
    for (t = 1; t <= tests; t++)
    {
        int N;
        scanf("%d\n", &N);
        char other[55555];
        scanf("%s\n", other);
        size_t len = strlen(other);
        int i;
        printf("Case #%d: ", t);
        for (i = 0; i < len; i++)
        {
            if (other[i] == 'E')
                putchar('S');
            else
                putchar('E');
        }
        printf("\n");
    }
    return 0;
}
