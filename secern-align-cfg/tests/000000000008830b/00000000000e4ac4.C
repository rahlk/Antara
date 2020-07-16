#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int t, i, L, j, k;
    long long int N;
    
    scanf("%d", &t);
    long long int prime[26];
    i = 3;
    int count = 0;
    while (count <= 25)
    {
        int c;
        for (c = 2; c < i; c++)
        {
            if (i % c == 0)
                break;
        }
        if (c == i)
        {
            prime[count] = i;
            count++;
        }
        i++;
    }
    count = 0;
    int loop = 1;
    for (i = 0; i < t; i++)
    {
        char ch[100];
        scanf("%d%d", &N, &L);
        int *array = malloc(sizeof(int) * L);
        for (j = 0; j < L; j++)
        {
            scanf("%d", &array[j]);
        }
        int num1, num2;
        for (j = 0; j < 25; j++)
        {
            for (k = j + 1; k < 26; k++)
            {
                if ((prime[j] * prime[k]) == array[0])
                {
                    num1 = j;
                    num2 = k;
                    ch[count++] = (char)(j + 65);
                    ch[count++] = (char)(k + 65);
                    break;
                }
            }
        }
                
        for (int z = 1; z < L; z++)
        {
            for (j = 0; j < 26; j++)
            {
                if ((prime[num1] * prime[j]) == array[z])
                {
                    num1 = num1;
                    num2 = j;
                    // printf("%d * %d = %d %s\n", prime[num1], prime[num2], array[z], ch);
                    ch[count++] = (char)(j + 65);
                    break;
                }
                else if ((prime[num2] * prime[j]) == array[z])
                {
                    num1 = num2;
                    num2 = j;
                    ch[count++] = (char)(j + 65);
                    break;
                }
            }
        }
        printf("Case #%d: %s\n", i + 1, ch);
    }
}