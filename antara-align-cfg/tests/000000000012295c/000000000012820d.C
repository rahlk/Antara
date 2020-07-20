#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res_x = 0, res_y = 0;
    int max_res = 0;
    int t, q, p;
    int init_x, init_y;
    int x, y;
    int T, P, Q;
    char direction;
    int **streets;

    scanf("%d", &T);

    for (t = 0; t < T; t++)
    {
        scanf("%d %d", &P, &Q);
        streets = (int **)malloc(sizeof(int *) * Q);

        for (q = 0; q < Q; q++)
        {
            streets[q] = (int *)malloc(sizeof(int) * Q);
        }

        for (x = 0; x < Q; x++)
        {
            for (y = 0; y < Q; y++)
            {
                streets[x][y] = 0;
            }
        }

        for (p = 0; p < P; p++)
        {
            scanf("%d %d %c", &x, &y, &direction);
            init_x = x;
            init_y = y;

            if (direction == 'N')
            {
                for (x = 0; x < Q; x++)
                {
                    y = init_y + 1;

                    while (y < Q)
                    {
                        streets[x][y] += 1;
                        y++;
                    }
                }
            }
            else if (direction == 'S')
            {
                for (x = 0; x < Q; x++)
                {
                    y = init_y - 1;

                    while (y >= 0)
                    {
                        streets[x][y] += 1;
                        y--;
                    }
                }
            }
            else if (direction == 'E')
            {
                for (y = 0; y < Q; y++)
                {
                    x = init_x + 1;

                    while (x < Q)
                    {
                        streets[x][y] += 1;
                        x++;
                    }
                }
            }
            else if (direction == 'W')
            {
                for (y = 0; y < Q; y++)
                {
                    x = init_x - 1;

                    while (x >= 0)
                    {
                        streets[x][y] += 1;
                        x--;
                    }
                }
            }
        }

        max_res = streets[0][0];
        res_x = 0;
        res_y = 0;

        for (x = 0; x < Q; x++)
        {
            for (y = 0; y < Q; y++)
            {
                if (streets[x][y] > max_res)
                {
                    max_res = streets[x][y];
                    res_x = x;
                    res_y = y;
                }
            }
        }

        printf("Case #%d: %d %d\n", t + 1, res_x, res_y);
    }

    return 0;
}