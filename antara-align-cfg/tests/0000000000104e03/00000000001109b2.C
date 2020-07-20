#include <stdio.h>

int check(int pre_x, int pre_y, int x, int y)
{
    if (pre_x < 0)
    {
        return 1;
    }
    
    if (pre_x == x || pre_y == y || (pre_x + pre_y == x + y) || pre_x - pre_y == x - y)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int cases, R, C;
    scanf("%d", &cases);
    
    for (int cas = 1; cas <= cases; cas++)
    {
        scanf("%d %d", &R, &C);
        if (R * C <= 9) // 2x2, 2x3, 2x4, 3x2, 3x3, 4x2
        {
            printf("Case #%d: IMPOSSIBLE\n", cas);
        }
        else if (R == 3 && C == 4)
        {
            printf("Case #%d: POSSIBLE\n", cas);
            printf("1 1\n");
            printf("2 3\n");
            printf("3 1\n");
            printf("1 2\n");
            printf("2 4\n");
            printf("3 2\n");
            printf("1 3\n");
            printf("3 4\n");
            printf("2 2\n");
            printf("1 4\n");
            printf("3 3\n");
            printf("2 1\n");
        }
        else if (R == 4 && C == 3)
        {
            printf("Case #%d: POSSIBLE\n", cas);
            printf("1 1\n");
            printf("3 2\n");
            printf("1 3\n");
            printf("2 1\n");
            printf("4 2\n");
            printf("2 3\n");
            printf("3 1\n");
            printf("4 3\n");
            printf("2 2\n");
            printf("4 1\n");
            printf("3 3\n");
            printf("1 2\n");
        }
        else if (R == 4 && C == 4)
        {
            printf("Case #%d: POSSIBLE\n", cas);
            printf("1 1\n");
            printf("3 2\n");
            printf("4 4\n");
            printf("2 3\n");
            printf("3 1\n");
            printf("4 3\n");
            printf("2 4\n");
            printf("1 2\n");
            printf("3 3\n");
            printf("4 1\n");
            printf("2 2\n");
            printf("1 4\n");
            printf("4 2\n");
            printf("2 1\n");
            printf("1 3\n");
            printf("3 4\n");
        }
        else if (R <= C)
        {
            printf("Case #%d: POSSIBLE\n", cas);
            int start = 1;
            int pre_x = -1;
            int pre_y = -1;
            if (R % 2 == 1)
            {
                for (int i = 1; i <= C; i++)
                {
                    printf("1 %d\n", i);
                    printf("3 %d\n", i % C + 1);
                    printf("2 %d\n", (i + 2) % C + 1);
                }
                start = 4;
                pre_x = 2;
                pre_y = 3;
            }
            
            for (int x = start; x < R; x += 2)
            {
                int y;
                for (y = 1;; y++)
                {
                    if (check(pre_x, pre_y, x, y) == 1)
                    {
                        break;
                    }
                }
                
                for (int i = y; i < y + C; i++)
                {
                    printf("%d %d\n", x, (i - 1) % C + 1);
                    printf("%d %d\n", x + 1, (i + 2) % C + 1);
                }
                pre_x = x + 1;
                pre_y = (y + 1) % C + 1;
            }
        }
        else
        {
            int tmp = R;
            R = C;
            C = tmp;
            printf("Case #%d: POSSIBLE\n", cas);
            int start = 1;
            int pre_x = -1;
            int pre_y = -1;
            if (R % 2 == 1)
            {
                for (int i = 1; i <= C; i++)
                {
                    printf("%d 1\n", i);
                    printf("%d 3\n", i % C + 1);
                    printf("%d 2\n", (i + 2) % C + 1);
                }
                start = 4;
                pre_x = 2;
                pre_y = 3;
            }
            
            for (int x = start; x < R; x += 2)
            {
                int y;
                for (y = 1;; y++)
                {
                    if (check(pre_x, pre_y, x, y) == 1)
                    {
                        break;
                    }
                }
                
                for (int i = y; i < y + C; i++)
                {
                    printf("%d %d\n", (i - 1) % C + 1, x);
                    printf("%d %d\n", (i + 2) % C + 1, x + 1);
                }
                pre_x = x + 1;
                pre_y = (y + 1) % C + 1;
            }
        }
    }
    return 0;
}