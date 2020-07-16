#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX 2000

typedef struct 
{
    unsigned char tabu[MAX][MAX];
    char rota[2*MAX+10];
    int qtd;
} TLab;

TLab lab;

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
    int i,x,y,tam,target;
    x = y = 0;
    tam = strlen(l->rota);
    i=tam-1;
    target = l->qtd-1;
    while (x<target || y<target)
    {        
        char M;
        if (l->tabu[x][y]!=0 && x<target && y<target)
           M = l->tabu[x][y]=='E'?'S':'E';
        else if (i>0 && x<target && y<target)
          M = l->rota[i]=='E'?'S':'E';
        else 
          M = x<target?'E':'S';
        i--;
        if (M=='E')
          x++;
        else
          y++;
        printf("%c",M);        
    }
    printf("\n");
    fflush(stdout);
}


int main(void)
{
    int tests,testcase;
    scanf("%i",&tests);
    for (testcase=1; testcase<=tests;testcase++)
    {
        read(&lab);
        printf("Case #%i: ",testcase);
        generate(&lab);
        fflush(stdout);
    }
    return 0;
}
