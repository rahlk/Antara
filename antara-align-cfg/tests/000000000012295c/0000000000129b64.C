#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef unsigned char bool;

typedef struct 
{
    int pos, n;
} axis;

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

axis lX[100100], lY[100100];
int ltopX, ltopY;
int lN[100100], lS[100100], lE[100100], lW[100100];
int ltopN, ltopS, ltopE, ltopW;

axis getMax(axis* Y, int* N, int* S, int topY, int topN, int topS, int q)
{
    int i, in, is;
    axis maxy;
    
    N[topN] = S[topS] = q+1;
        
    qsort(N, topN+1, sizeof(int), cmpfunc);
    qsort(S, topS+1, sizeof(int), cmpfunc);
    
    topY = 0;
    Y[topY].pos = 0, Y[topY].n = topS;
    topY++;
    for(in = 0, is = 0; in < topN || is < topS; )
        if(S[is] <= N[in])
        {
            if(Y[topY-1].pos != S[is])
            {
                Y[topY].pos = S[is], Y[topY].n = (topS-is)+(in);
                topY++;
            }
            is++;
        }
        else
        {
            if(Y[topY-1].pos != N[in])
            {
                Y[topY].pos = N[in], Y[topY].n = (in+1)+(topS-is);
                topY++;
            }
            else
            {
                Y[topY-1].n++;
            }
            in++;
        }   
        
    /*for(i = 0; i < topN+1; i++)
        printf("%d ", N[i]);
    printf("\n");
    for(i = 0; i < topS+1; i++)
        printf("%d ", S[i]);
    printf("\n");
    for(i = 0; i < topY; i++)
        printf("(%d) %d %d\n", i, Y[i].pos, Y[i].n);*/
        
    maxy = Y[0];
    for(i = 1; i < topY; i++)
        if(Y[i].n > maxy.n)
            maxy = Y[i];
            
    return maxy;
}

int main()
{
    int T, cont = 0;
    scanf("%d\n", &T);

    while(T--)
    {
        int p, q;
        int i;
        axis maxx, maxy;
        
        scanf("%d %d\n", &p, &q);
        
        ltopN = 0, ltopS = 0, ltopE = 0, ltopW = 0;
        for(i = 0; i < p; i++)
        {
            int x, y;
            char d;
            scanf("%d %d %c\n", &x, &y, &d);
            if(d == 'N')
                lN[ltopN++] = y+1;
            if(d == 'S')
                lS[ltopS++] = y-1;
            if(d == 'E')
                lE[ltopE++] = x+1;
            if(d == 'W')
                lW[ltopW++] = x-1;
        }
        
        maxx = getMax(lX, lE, lW, ltopX, ltopE, ltopW, q);
        maxy = getMax(lY, lN, lS, ltopY, ltopN, ltopS, q);
                
        printf("Case #%d: %d %d\n", ++cont, maxx.pos, maxy.pos);
    }
    
    return 0;
}
