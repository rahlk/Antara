#include <stdio.h>
#include <stdlib.h>

char *thePath;

void findPath(int N, char *lPath, int num)
{
    int i, j;
    // Create grid and place Lydia on it
    char grid[N][N];
    for (i = 0; i < N; ++i)
        for (j = 0; j < N; ++j)
            grid[i][j] = 'O';

    i = j = 0;
    int step = 0;
    while (lPath[step] != '\0')
    {
        grid[i][j] = lPath[step];
        if (lPath[step] == 'E')
            ++j;
        else if (lPath[step] == 'S')
            ++i;
        ++step;
    }

    int easts = N - 1;
    int souths = N - 1;
    i = j = 0;
    char path[step + 1];
    step = 0;
    while (easts != 0 || souths != 0)
    {
        // If Lydia was here
        if (grid[i][j] != 'O')
        {
            if (grid[i][j] == 'E')
            {
                ++i;
                --souths;
                path[step] = 'S';
            }
            else
            {
                ++j;
                --easts;
                path[step] = 'E';
            }
        }
        // Lydia is not here
        else
        {
            if (easts >= souths)
            {
                ++j;
                --easts;
                path[step] = 'E';
            }
            else
            {
                ++i;
                --souths;
                path[step] = 'S';
            }
        }
        ++step;
    }
    path[step] = '\0';
    printf("Case #%d: %s\n", num, path);
}

int main()
{
    int cases, i;
    scanf("%d", &cases);

    int N[cases];
    char *path[cases];
    for (i = 0; i < cases; ++i)
    {
        scanf("%d", &N[i]);
        path[i] = malloc(N[i] * sizeof(char *));
        scanf("%s", path[i]);
    }

    for (i = 0; i < cases; ++i)
    {
        findPath(N[i], path[i], i + 1);
    }

    return 0;
}