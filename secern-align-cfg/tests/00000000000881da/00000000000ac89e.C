#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d" , &N);
    for(int j = 1 ; j <= N ; j++)
    {
        int n;
        scanf("%d" , &n);
        char moves[2*n - 2];
        scanf("%s" , moves);
        getchar(); // Flush the extra white space
        printf("Case #%d: " , j);
        for(int i = 0 ; i < (2*n - 2) ; i++)
        {
            if(moves[i] == 'E')
                moves[i] = 'S';
            else
                moves[i] = 'E';
            printf("%c" , moves[i]);
        }
        if(j!=N)
            printf("\n");
    }
}