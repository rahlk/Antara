#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int x;
    int y;
}arr;
arr array[100005];

int comp(const void *a, const void *b)
{
    long long int c1 = (*(arr*)a).x;
    c1 *= (*(arr*)b).y;
    long long int c2 = (*(arr*)b).x;
    c2 *= (*(arr*)a).y;
    
    if (c1 == c2) return 0;
    else if (c1 > c2) return 1;
    else return -1;
}

int abs(int n)
{
    if (n < 0)
    {
        return -1 * n;
    }
    return n;
}

long long int gcd(long long int x, long long int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}

int main()
{
    int input[310][2];
    int cases, N;
    scanf("%d", &cases);
    for (int cas = 1; cas <= cases; cas++)
    {
        scanf("%d", &N);
        for (int i = 1; i <= N; i++)
        {
            scanf("%d %d", &input[i][0], &input[i][1]);
        }
        
        int pair = 0;
        for (int i = 1; i <= N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                long long int tmp = input[i][0] - input[j][0];
                tmp *= input[i][1] - input[j][1];
                if (tmp < 0)
                {
                    array[pair].x = abs(input[i][0] - input[j][0]);
                    array[pair].y = abs(input[i][1] - input[j][1]);
                    pair++;
                }
            }
        }
        
        if (pair == 0)
        {
            printf("Case #%d: 1 1\n", cas);
        }
        else
        {
            array[pair].x = 0;
            array[pair].y = 1;
            pair++;
            array[pair].x = 1;
            array[pair].y = 0;
            pair++;
            qsort(array, pair, sizeof(arr), comp);
            
            int found = 0;
            
            for (int i = 1; i < pair; i++)
            {
                long long int c1 = array[i - 1].x * array[i].y;
                long long int c2 = array[i - 1].y * array[i].x;
                if (c1 != c2)
                {
                    long long int C = array[i - 1].x;
                    C += array[i].x;
                    long long int J = array[i - 1].y;
                    J += array[i].y;
                    
                    long long int pre = 0;
                    int yes = 1;
                    for (int j = 1; j <= N; j++)
                    {
                        long long int now = C;
                        now *= input[j][0];
                        long long int now2 = J;
                        now2 *= input[j][1];
                        now += now2;
                        if (now > pre)
                        {
                            pre = now;
                        }
                        else
                        {
                            yes = 0;
                            break;
                        }
                    }
                    
                    if (yes == 1)
                    {
                        long long int ansC, ansJ;
                        ansC = C;
                        ansJ = J;
                        
                        for (int xx = 1; xx <= 100; xx++)
                        {
                            for (int yy = 1; yy <= 100; yy++)
                            {
                                long long int tmpp;
                                long long int tmpC = array[i - 1].x;
                                tmpC *= xx;
                                tmpp = array[i].x;
                                tmpp *= yy;
                                tmpC += tmpp;
                                long long int tmpJ = array[i - 1].y;
                                tmpJ *= xx;
                                tmpp = array[i].y;
                                tmpp *= yy;
                                tmpJ += tmpp;
                                long long int tmpgcd = gcd(tmpC, tmpJ);
                                tmpC /= tmpgcd;
                                tmpJ /= tmpgcd;
                                
                                if (tmpC < ansC || (tmpC == ansC && tmpJ < ansJ))
                                {
                                    ansC = tmpC;
                                    ansJ = tmpJ;
                                }
                            }
                        }
                        
                        printf("Case #%d: %lld %lld\n", cas, ansC, ansJ);
                        found = 1;
                        break;
                    }
                }
            }
            
            if (found == 0)
            {
                printf("Case #%d: IMPOSSIBLE\n", cas);
            }
            //printf("Case #%d: %d\n", cas, ans);
        }
    }
    return 0;
}