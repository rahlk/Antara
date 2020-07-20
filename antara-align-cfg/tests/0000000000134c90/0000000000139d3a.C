#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int T;
    int A;
    char str[300][600];
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d", &A);
        int flag[600];
        char ans[600];
        int type[3];
        int count = 0;
        memset(flag, 0, sizeof(flag));
        memset(ans, 0, sizeof(ans));
        memset(type, 0, sizeof(type));
        for(int j = 0; j < A; j++)
        {
            scanf("%s", &str[j]);
        }
        for(int k = 0 ; k < 501; k++)
        {
            for(int j = 0; j < A; j++ )
            {
                if(flag[j] == 1)
                {
                    continue;
                }
                if(str[j][k%strlen(str[j])] == 'R')
                {
                    if(type[0] == 0)
                    {
                        count++;
                        type[0] =1;
                    }
                }
                if(str[j][k%strlen(str[j])] == 'P')
                {
                    if(type[1] == 0)
                    {
                        type[1] =1;
                        count++;                        
                    }
                }
                if(str[j][k%strlen(str[j])] == 'S')
                {
                    if(type[2]==0)
                    {
                        type[2] = 1;
                        count ++;
                    }
                }
            }
            if(count == 3 || strlen(ans) > 500)
            {
                printf("Case #%d: IMPOSSIBLE\n", i+1);
                break;
            }
            if(count == 1)
            {
                if(type[0] == 1)
                {
                   printf("Case #%d: %sP\n", i+1, ans); 
                }
                else if(type[1] ==1)
                {
                    printf("Case #%d: %sS\n", i+1, ans);
                }
                else
                {
                    printf("Case #%d: %sR\n", i+1, ans);
                }
                break;
            }
            if(count == 2)
            {
                
                if(type[0] == 1 && type[1] == 1)
                {
                   ans[k] = 'P';
                }
                else if(type[1] ==1 && type[2] == 1)
                {
                    ans[k] = 'S';
                }
                else
                {
                    ans[k] = 'R';
                }
                count = 0;
                memset(type, 0 ,sizeof(type));
            }
            for(int j = 0; j < A; j++ )
            {
                if(flag[j] == 1)
                {
                    continue;
                }
                if(str[j][k%strlen(str[j])] == 'R')
                {
                    if(ans[k] == 'P')
                    {
                        flag[j] =1;
                    }
                }
                if(str[j][k%strlen(str[j])] == 'P')
                {
                    if(ans[k] == 'S')
                    {
                        flag[j] =1;
                    }
                }
                if(str[j][k%strlen(str[j])] == 'S')
                {
                    if(ans[k] == 'R')
                    {
                        flag[j] =1;
                    }
                }
            }
        }
    }
}