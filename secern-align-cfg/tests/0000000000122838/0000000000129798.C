#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int T;
    int N, K;
    int A[100005], B[100005];
    int Amax;
    int Bmax;
    int ans;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        ans = 0;
        scanf("%d %d", &N, &K);
        for(int j = 0; j  < N; j++)
        {
            scanf("%d", &A[j]);
        }
        for(int j = 0; j  < N; j++)
        {
            scanf("%d", &B[j]);
        }
        for(int x = 0; x < N; x++)
        {
            Amax = 0;
            Bmax = 0;
            for(int y = x; y < N; y++)
            {
                if(Amax < A[y])
                {
                    Amax = A[y];
                }
                if(Bmax < B[y])
                {
                    Bmax = B[y];
                }
                if(Amax > Bmax)
                {
                    if(Amax - Bmax <= K)
                    {
                        ans ++;
                    }
                }
                else
                {
                    if(Bmax - Amax <= K)
                    {
                        ans ++;
                    }
                }
            }
        }
        printf("Case #%d: %d\n", i+1, ans);
    }
}