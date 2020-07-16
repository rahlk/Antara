#include <stdio.h>
#include <stdlib.h>

int nrd;

int contain_nr_4(int n)
{
    int ok=0;
    while(n!=0)
    {
        nrd++;
        int uc=n%10;
        if(uc==4){
            ok=1;
            break;
        }
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
            nrd=0;
            if(!contain_nr_4(j))
            {

                A=j;
                B=N-j;
                if(!contain_nr_4(B))
                {
                    printf("%d %d\n", A,B);
                    break;
                }
            }
            else
            {
                j=j+10*nrd;
            }


        }

    }
    return 0;
}
