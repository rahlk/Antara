#include <stdio.h>
#include <stdlib.h>

int comp(const void *x, const void *y)
{
    return *(int*)x - *(int*)y;
}

int gcd(int a, int b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main()
{
    int cases, N, L, ans[105], num[26], inp[105];
    scanf("%d", &cases);
    for (int cas = 1; cas <= cases; cas++)
    {
        scanf("%d %d", &N, &L);
        for (int i = 1; i <= L; i++)
        {
            scanf("%d", &inp[i]);
        }
        
        for (int i = 1;; i++)
        {
            if (inp[i] != inp[i + 1])
            {
                ans[i + 1] = gcd(inp[i], inp[i + 1]);
                for (int j = i; j >= 1; j--)
                {
                    ans[j] = inp[j] / ans[j + 1];
                }
                for (int j = i + 2; j <= L + 1; j++)
                {
                    ans[j] = inp[j - 1] / ans[j - 1];
                }
                break;
            }
        }
        
        int now = 0;
        for (int i = 1; i <= L + 1; i++)
        {
            int same = 0;
            for (int j = 0; j < now; j++)
            {
                if (num[j] == ans[i])
                {
                    same = 1;
                    break;
                }
            }
            
            if (same == 0)
            {
                num[now] = ans[i];
                now++;
            }
        }
        
        qsort(num, 26, sizeof(int), comp);
        
        printf("Case #%d: ", cas);
        for (int i = 1; i <= L + 1; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (ans[i] == num[j])
                {
                    printf("%c", j + 65);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}