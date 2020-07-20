#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct xx
{
    char x[55];
}arr;
arr array[1005];

int comp(const void *x, const void *y)
{
    if (strcmp((*(arr*)x).x, (*(arr*)y).x) < 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int find(int s, int e, int pos)
{
    if (s == e)
    {
        return 0;
    }
    
    int total = 0;
    int st = -1;
    for (int i = s; i <= e; i++)
    {
        if (array[i].x[pos] != '\0')
        {
            st = i;
            break;
        }
    }
    
    if (st == -1)
    {
        return 2;
    }
    
    for (int i = st + 1; i <= e; i++)
    {
        if (array[st].x[pos] != array[i].x[pos])
        {
            total += find(st, i - 1, pos + 1);
            st = i;
        }
    }
    
    total += find(st, e, pos + 1);
    if (total <= (e - s + 1) - 2 && pos != 0)
    {
        total += 2;
    }
    
    return total;
}

int main()
{
    int cases, N, len;
    char ch[55];
    scanf("%d", &cases);
    for (int cas = 1; cas <= cases; cas++)
    {
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            scanf("%s", &ch);
            len = strlen(ch);
            for (int j = 0; j < len; j++)
            {
                array[i].x[j] = ch[len - 1 - j];
            }
            array[i].x[len] = '\0';
        }
        
        qsort(array, N, sizeof(arr), comp);
        
        int ans = find(0, N - 1, 0);
        printf("Case #%d: %d\n", cas, ans);
    }
    return 0;
}