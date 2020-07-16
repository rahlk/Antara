#include <stdio.h>
#include <stdlib.h>

int contain_nr_4(int n)
{
    int ok=0;
    while(n!=0)
        {
            int uc=n%10;
            if(uc==4)
                ok=1;
            n=n/10;
        }
    return ok;
}

int main()
{
    int N,A,B;
    int T;
    scanf("%d", &T);
    for(int i=1; i<=T; i++)
    {
        scanf("%d", &N);
        printf("Case #%d: ",i);
        int nr=N;
        for(int j=1; j<=N; j++)
        {
            A=j;
            B=N-j;
            if(!contain_nr_4(A) && !contain_nr_4(B))
            {
                printf("%d %d\n", A,B);
                break;
            }
        }

    }
    return 0;
}
