#include <stdio.h>

int main()
{
    int T,i,j,k,N;
    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%d",&N);
        int a=0,b=0;
        if(N % 4 == 0)
        {
            for(j=2; j<=N; j++)
            {
                for(k=N; k>=2; k--)
                {
                    if(j + k == N)
                    {
                        a = j;
                        b = k;
                        break;
                    }
                }
            }
        }
        printf("Case #%d: %d %d\n", i , a , b);
    }

    return 0;
}
