#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int T,i,j,N;
    char P[100000];

    scanf("%d",&T);

    for( i = 1 ; i <= T ; i++ )
    {
        scanf("%d",&N);
        scanf("%s",P);

        N = (2 * N)-2;
        for( j = 0; j < N; j++ )
        {
            switch(P[j])
            {
                case 'S':
                    P[j] = 'E';
                    break;
                case 'E':
                    P[j] = 'S';
                    break;
                default:
                    printf("input error\n");
                    break;
            }
        }

        printf("Case #%d: %s\n",i,P);
    }
    return 0;
}
