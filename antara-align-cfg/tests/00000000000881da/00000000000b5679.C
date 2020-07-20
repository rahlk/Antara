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
        char* s = (char*) malloc((n + 1) * sizeof(char));
        gets(s);
        printf("Case #%d: ", i + 1);
        int j;
        for (j = 0; j < 2 * n - 2; j++)
        {
            if (s[j] == 'S')
                printf("E");
            else
                printf("S");
        }
        free(s);
        printf("\n");
    }

    return 0;
}
