#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define maxn 10007
int visE[maxn][maxn];
int visS[maxn][maxn];
char son[maxn][maxn];
int n;
int out;
bool judgeE(int x, int y)
{
    if (x > 0 && x <= n && y > 0 && y <= n && visE[x][y] == 0)
        return true;
    return false;
}
bool judgeS(int x, int y)
{
    if (x > 0 && x <= n && y > 0 && y <= n && visS[x][y] == 0)
        return true;
    return false;
}
int flag = 0;
void dfs(int x, int y)
{
    //printf("%d %d\n", x, y);
    if (flag)
        return;
    if (x == n && y == n)
    {
        printf("Case #%d: ", out);
        int i = 1, j = 1;
        int check = (n - 1) * 2;
        int fflag = 0;
        while (i <= n && j <= n && fflag < check)
        {
            fflag++;
            //printf("%d %d\n", i, j);
            printf("%c", son[i][j]);
            if (son[i][j] == 'E')
                j++;
            else
                i++;
        }
        printf("\n");
        flag = 1;
        return;
    }
    if (judgeE(x, y))
    {
        son[x][y] = 'E';
        //printf("%c\n", son[x][y]);
        dfs(x, y + 1);
    }
    if (judgeS(x, y))
    {
        son[x][y] = 'S';
        //printf("%c\n", son[x][y]);
        dfs(x + 1, y);
    }
    return;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int p = 1; p <= t; p++)
    {
        out = p;
        flag = 0;
        scanf("%d", &n);
        memset(visE, 0, sizeof visE);
        memset(visS, 0, sizeof visS);
        memset(son, '\0', sizeof son);
        char f[1000];
        scanf("%s", f);
        int k = strlen(f);
        int x = 1, y = 1;
        for (int i = 0; i < k; i++)
        {

            if (f[i] == 'E')
            {
                visE[x][y] = 1;
                y++;
            }
            else
            {
                visS[x][y] = 1;
                x++;
            }
        }
        dfs(1, 1);
    }
    return 0;
}