#include <stdio.h>

int main()
{
    int cases, N, M, v, ans, add, result;
    int x[7] = {5, 7, 9, 11, 13, 16, 17};
    int y[7];
    scanf("%d %d %d", &cases, &N, &M);
    for (int cas = 1; cas <= cases; cas++)
    {
        for (int i = 0; i < 7; i++)
        {
            for (int j = 1; j <= 17; j++)
            {
                printf("%d ", x[i]);
            }
            printf("%d\n", x[i]);
            fflush(stdout);
            
            y[i] = 0;
            for (int j = 1; j <= 18; j++)
            {
                scanf("%d", &v);
                y[i] += v;
            }
            y[i] %= x[i];
        }
        
        ans = 0;
        add = 1;
        for (int i = 0; i < 7; i++)
        {
            for (int now = ans; ; now += add)
            {
                if (now % x[i] == y[i])
                {
                    ans = now;
                    break;
                }
            }
            add *= x[i];
        }
        
        printf("%d\n", ans);
        fflush(stdout);
        
        scanf("%d", &result);
        if (result == -1)
        {
            break;
        }
    }
    return 0;
}