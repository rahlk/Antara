#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int T, F;
    char str;
    int countA, countB, countC, countD, countE;
    scanf("%d %d", &T, &F);
    for(int i = 0; i < T; i++)
    {
        int count[5] = {0};
        int index1[5][24] = {0};
        int index2[5][6] = {0};
        int index3[5][2] = {0};
        int index4[5][1] = {0};
        int ans_index1[24];
        int ans_index2[6];
        int ans_index3[2];
        int ans_index4[1];
        char ans[5];
        for(int j = 0; j < 119; j++)
        {
            printf("%d\r\n", j*5 +1);
            fflush(stdout);
            scanf(" %c", &str);
            if(str == 'A')
            {
                index1[0][count[0]] = j;
                count[0]++;
            }
            if(str== 'B')
            {
                index1[1][count[1]] = j;
                count[1]++;
            }
            if(str == 'C')
            {
                index1[2][count[2]] = j;
                count[2]++;
            }
            if(str== 'D')
            {
                index1[3][count[3]] = j;
                count[3]++;
            }
            if(str == 'E')
            {
                index1[4][count[4]] = j;
                count[4]++;
            }
        }
        for(int j = 0; j < 5; j++)
        {
            if(count[j] < 24)
            {
                ans[0] = 'A'+j;
                memcpy(ans_index1, index1[j], sizeof(ans_index1));
            }
        }
        memset(count, 0, sizeof(count));
        for(int j = 0; j < 23; j++)
        {
            printf("%d\r\n", ans_index1[j]*5 +2);
            fflush(stdout);
            scanf(" %c", &str);
            if(str == 'A')
            {
                index2[0][count[0]] = j;
                count[0]++;
            }
            if(str == 'B')
            {
                index2[1][count[1]] = j;
                count[1]++;
            }
            if(str == 'C')
            {
                index2[2][count[2]] = j;
                count[2]++;
            }
            if(str== 'D')
            {
                index2[3][count[3]] = j;
                count[3]++;
            }
            if(str == 'E')
            {
                index2[4][count[4]] = j;
                count[4]++;
            }
        }
        for(int j = 0; j < 5; j++)
        {
            if(count[j] < 6 && count[j] != 0)
            {
                ans[1] = 'A'+j;
                memcpy(ans_index2, index2[j], sizeof(ans_index2));
            }
        }
        memset(count, 0, sizeof(count));
        for(int j = 0; j < 5; j++)
        {
            printf("%d\r\n", ans_index2[j]*5 +3);
            fflush(stdout);
            scanf(" %c", &str);
            if(str == 'A')
            {
                index3[0][count[0]] = j;
                count[0]++;
            }
            if(str == 'B')
            {
                index3[1][count[1]] = j;
                count[1]++;
            }
            if(str == 'C')
            {
                index3[2][count[2]] = j;
                count[2]++;
            }
            if(str== 'D')
            {
                index3[3][count[3]] = j;
                count[3]++;
            }
            if(str == 'E')
            {
                index3[4][count[4]] = j;
                count[4]++;
            }
        }
        for(int j = 0; j < 5; j++)
        {
            if(count[j] < 2 && count[j] != 0)
            {
                ans[2] = 'A'+j;
                memcpy(ans_index3, index3[j], sizeof(ans_index3));
            }
        }        memset(count, 0, sizeof(count));
        for(int j = 0; j < 2; j++)
        {
            printf("%d\r\n", ans_index3[j]*5 +4);
            fflush(stdout);
            scanf(" %c", &str);
            if(str == 'A')
            {
                index4[0][count[0]] = j;
                count[0]++;
            }
            if(str == 'B')
            {
                index4[1][count[1]] = j;
                count[1]++;
            }
            if(str == 'C')
            {
                index4[2][count[2]] = j;
                count[2]++;
            }
            if(str== 'D')
            {
                index4[3][count[3]] = j;
                count[3]++;
            }
            if(str == 'E')
            {
                index4[4][count[4]] = j;
                count[4]++;
            }
        }
        for(int j = 0; j < 5; j++)
        {
            if(count[j] < 1 && count[j] != 0)
            {
                ans[3] = 'A'+j;
                memcpy(ans_index4, index4[j], sizeof(ans_index4));
            }
        }
        int x[5]= {0};
        for(int j = 0; j < 4; j++)
        {
            x[ans[j]-'A'] =1;
        }
        for(int j = 0; j< 5; j++)
        {
            if(x[j] == 0 )
            {
                ans[4] = 'A' +j;
                break;
            }
        }
        printf("%s\r\n", ans);
        fflush(stdout);
    }
}