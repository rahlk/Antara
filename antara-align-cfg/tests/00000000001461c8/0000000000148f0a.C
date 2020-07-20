#include <stdio.h>

int main()
{
    int T, dummy, N[25][2];
    scanf("%d", &T);
    for (int cas = 1; cas <= T; cas++)
    {
        for (int i = 1; i <= 100; i++)
        {
            scanf("%d", &dummy);
            if (i <= 57)
            {
                printf("100 %d\n", ((i - 1) % 19) + 1);
                fflush(stdout);
            }
            else if (i <= 76)
            {
                int index = i - 57;
                printf("%d %d\n", 0, index);
                scanf("%d", &N[index][1]);
                N[index][0] = index;
                for (int j = 1; j <= N[index][1]; j++)
                {
                    scanf("%d", &dummy);
                }
            }
            else if (i == 100)
            {
                printf("100 20\n");
                fflush(stdout);
            }
            else
            {
                if (i == 77)
                {
                    // do sorting
                    for (int r = 1; r <= 20; r++)
                    {
                        for (int j = 1; j <= 18; j++)
                        {
                            if (N[j][1] > N[j + 1][1])
                            {
                                int tmp = N[j][1];
                                N[j][1] = N[j + 1][1];
                                N[j + 1][1] = tmp;
                                tmp = N[j][0];
                                N[j][0] = N[j + 1][0];
                                N[j + 1][0] = tmp;
                            }
                        }
                    }
                }
                
                int index = N[1][0];
                printf("100 %d\n", index);
                fflush(stdout);
                
                N[1][1]++;
                for (int j = 1; j <= 18; j++)
                {
                    if (N[j][1] > N[j + 1][1])
                    {
                        int tmp = N[j][1];
                        N[j][1] = N[j + 1][1];
                        N[j + 1][1] = tmp;
                        tmp = N[j][0];
                        N[j][0] = N[j + 1][0];
                        N[j + 1][0] = tmp;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
    return 0;
}