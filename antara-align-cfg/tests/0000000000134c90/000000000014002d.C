#include <stdio.h>
#include <string.h>

#define R 1;
#define S 0;
#define P -1;

typedef struct {
    int nopo;
    char *jogo;
} oponentes;



int main()
{
    int cases = 0, i, j;
    scanf("%d", &cases);

    for(i=0;i<cases;i++)
    {
        oponentes *opo;
        scanf("%d", &(opo->nopo) );
        for(j = 0; j < opo->nopo; j++)
        {
            gets(&opo->jogo[j]);
        }
        for(j = 0; j < opo->nopo; j++)
        {
            puts(opo->jogo);
        }
        
    }
}
