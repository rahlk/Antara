#include <stdio.h>

int main()
{
    int T, N, i, j;
    char p;
    scanf("%d", &T);
    for(i=0; i < T; i++)
    {
        scanf("%d", &N);
        N = (N-1)*2;
        char L[N+1], M[N+1];
        fflush(stdout);
        scanf("%s", L);
        for(j=0; j < N; j++)
        {
            if(L[j] == 'S')
                M[j] = 'E';
            else
                M[j] = 'S';
        }
        M[j] = '\0';
        printf("Case #%d: %s\n", i+1, M);
    }
    
    return 0;
}