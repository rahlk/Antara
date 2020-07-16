#include <stdio.h>
#include <string.h>

char result[5][1100];
char input[1100];

int pt(int v, int space)
{
    if (space == 0)
    {
        printf("%d", v);
        space = 1;
    }
    else
    {
        printf(" %d", v);
    }
    return space;
}
int main()
{
    int sw[5] = {16, 8, 4, 2, 1};
    int cases, N, B, F, ans[1100];
    scanf("%d", &cases);
    for (int cas = 1; cas <= cases; cas++)
    {
        scanf("%d %d %d", &N, &B, &F);
        for (int i = 0; i < 5; i++)
        {
            int now = 0;
            int cnt = 0;
            for (int j = 0; j < N; j++)
            {
                if (cnt == sw[i])
                {
                    now = 1 - now;
                    cnt = 0;
                }
                input[j] = now + 48;
                cnt++;
            }
            input[N] = '\0';
            printf("%s\n", input);
            fflush(stdout);
            scanf("%s", &result[i]);
        }
        memset(ans, N, sizeof(int));
        
        int len = strlen(result[0]);
        int pre = 0;
        char prefix = result[0][0];
        for (int i = 0; i < len; i++)
        {
            if (result[0][i] != prefix)
            {
                pre += 16;
                prefix = result[0][i];
            }
            
            int val = pre;
            if (result[1][i] == '1')
            {
                val += 8;
            }
            if (result[2][i] == '1')
            {
                val += 4;
            }
            if (result[3][i] == '1')
            {
                val += 2;
            }
            if (result[4][i] == '1')
            {
                val += 1;
            }
            
            ans[val] = 1;
        }
        
        int space = 0;
        for (int i = 0; i < N; i++)
        {
            if (ans[i] == 0)
            {
                space = pt(i, space);
            }
        }
        printf("\n");
        fflush(stdout);
        int judge;
        scanf("%d", &judge);
        if (judge == -1)
        {
            break;
        }
    }
    return 0;
}