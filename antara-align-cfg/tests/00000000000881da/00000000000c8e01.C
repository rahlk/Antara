#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, length;
    int grid, testSet;
    char path[50000], solution[100][50000];

    while (scanf("%d", &testSet) != EOF)
    {
        for (i = 0; i < testSet; i++)
        {
            scanf("%d %s", &grid, path);
            length = strlen(path);

            for (j = 0; j < length; j++)
            {
                if (path[j] == 'S')
                {
                    solution[i][j] = 'E';
                }
                else
                {
                    solution[i][j] = 'S';
                }
            }

            solution[i][j] = '\0';
        }

        // Mostra solução
        for (i = 0; i < testSet; i++)
        {
            printf("Case #%d: %s\n", i + 1, solution[i]);
        }
    }

    return 0;
}
