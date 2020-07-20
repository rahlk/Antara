#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int T, N;
    char M[200000], move[200000];
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        memset(move, sizeof(move), 0);
        scanf("%d", &N);
        scanf("%s", M);
        for(int j = 0 ; j < (N-1)*2; j++)
        {
            move[j] = (M[j] == 'E' ? 'S' : 'E');
        }
        printf("Case #%d: %s\n", i+1 ,move);
    }
}