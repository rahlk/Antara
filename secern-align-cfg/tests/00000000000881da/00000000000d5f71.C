#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX 1000

typedef struct 
{
    unsigned char tabu[MAX][MAX];
    char rota[2*MAX+10];
    int qtd;
} TLab;


void init(TLab *l)
{
    int i,j;
    for(i=0;i<l->qtd;i++)
       for(j=0; j<l->qtd;j++)
          l->tabu[i][j] = 0;
}

void read(TLab *l)
{
    int i,tam,x,y;
    scanf("%i", &l->qtd);
    init(l);
    scanf("%s",l->rota);
    tam = strlen(l->rota);
    x = y = 0;
    for(i=0;i<tam;i++)
    {
        l->tabu[x][y] = l->rota[i];
        if (l->rota[i]=='E')
           x++;
        else
           y++;
    }
}


void generate(TLab *l)
{
    int i,x,y,tam;
    x = y = 0;
    tam = strlen(l->rota);
    i=tam-1;
    while (x<l->qtd-1 || y<l->qtd-1)
    {        
        char M;
        if (l->tabu[x][y]!=0)
           M = l->tabu[x][y]=='E'?'S':'E';
        else if (i>0 && x<l->qtd-1 && y<l->qtd-1)
          M = l->rota[i]=='E'?'S':'E';
        else 
          M = x<l->qtd-1?'E':'S';
        i--;
        if (M=='E')
          x++;
        else
          y++;
        printf("%c",M);        
    }
    printf("\n");
}


int main(void)
{
    int tests,testcase;
    TLab lab;
    scanf("%i",&tests);
    for (testcase=1; testcase<=tests;testcase++)
    {
        printf("Case #%i: ",testcase);
        read(&lab);
        generate(&lab);
        fflush(stdout);
    }
}
