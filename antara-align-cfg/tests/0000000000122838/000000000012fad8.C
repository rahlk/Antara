#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include <omp.h>

#define MAX(a,b) \
   ({ __typeof__ ((a)+(b)) _a = (a); \
       __typeof__ ((a)+(b)) _b = (b); \
     _a > _b ? _a : _b; })
#define ABS(a) \
   ({ __typeof__ (a) _a = (a); \
     _a > 0 ? _a : -_a; })


int main()
{
    int T;
    scanf("%d\n", &T);
    for (int t = 0; t < T; t++)
    {
        int N, K;
        static int C[100000];
        static int D[100000];
        scanf("%d %d\n", &N, &K);
        assert(N <= 100000);
        for (int i = 0; i < N; i++)
            scanf("%d\n", &C[i]);
        for (int i = 0; i < N; i++)
            scanf("%d\n", &D[i]);

        int fair = 0;
        if (N <= 1000)
        {
            for (int i = 0; i < N; i++)
            {
                int mc = 0;
                int md = 0;
                for (int j = i; j < N; j++)
                {
                    mc = MAX(mc, C[j]);
                    md = MAX(md, D[j]);
                    if (ABS(mc - md) <= K)
                    {
                        fair += 1;
                    }
                }
            }
        }
        else
        {
            assert(N == 100000);

            long long foo[8] = {0};
            #pragma omp parallel for
            for (int k = 0; k < 8; k++)
            {
                int f = 0;
                for (int i = k*25000; i < k*25000+25000; i++)
                {
                    int mc = 0;
                    int md = 0;
                    for (int j = i; j < N; j++)
                    {
                        mc = MAX(mc, C[j]);
                        md = MAX(md, D[j]);
                        if (ABS(mc - md) <= K)
                        {
                            f += 1;
                        }
                    }
                }
                foo[k] = f;
            }
            fair = foo[0]+foo[1]+foo[2]+foo[3]+foo[4]+foo[5]+foo[6]+foo[7];
        }

        //~ fprintf(stderr, "%d\n", t+1);
        printf("Case #%d: %d\n", t+1, fair);
        fflush(stdout);
    }
    return 0;
}
