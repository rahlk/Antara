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
        scanf("%s", s);

        char* x = (char*) malloc (2 * n * sizeof(char));

        int j;
        for (j = 0; j < 2 * n - 2; j++)
        {
            if (s[j] == 'S')
                x[j] = 'E';
            else
                x[j] = 'S';
        }

        x[j] = '\0';
        printf("Case #%d: %s\n", i + 1, x);
        free(x);
        free(s);
    }

    return 0;
}
