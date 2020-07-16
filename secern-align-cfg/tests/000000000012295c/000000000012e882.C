/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CrepeCart.c
 * Author: preetam
 *
 * Created on April 28, 2019, 10:53 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void printCase(int itr)
{
    printf("Case #%d: ", itr);
}
void newLine(void)
{
    printf("\n");
}

int main(int argc, char** argv) {
    int i, p, q, x, y, t;
    char d;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d%d",&p,&q);
        int **m = (int **)calloc(q+1, sizeof(int *));
        for(int j = 0; j <= q; j++)
            m[j] = (int *)calloc(q+1, sizeof(int));
        for(int j = 1; j <= p; j++)
        {
            scanf("%d%d%c",&x,&y,&d);
            d = getchar();
//            printf("%c",d);
            switch(d)
            {
                case 'N':
                    for(int k = 0; k <= q; k++)
                        for(int l = y+1; l <= q; l++ )
                            m[k][l]++;
                    break;
                case 'E':
                    for(int k = x+1; k <= q; k++)
                        for(int l = 0; l <= q; l++ )
                            m[k][l]++;
                    break;
                case 'W':
                    for(int k = 0; k <= x-1; k++)
                        for(int l = 0; l <= q; l++ )
                            m[k][l]++;
                    break;
                case 'S':
                    for(int k = 0; k <= q; k++)
                        for(int l = 0; l <= y-1; l++ )
                            m[k][l]++;
                    break;
            }
        }
        x = y = 0;
        for(int k = 0; k <= q; k++)
        {
//            newLine();
            for(int l = 0; l <= q; l++)
            {
//                printf("%d\t",m[k][l]);
                if(m[k][l] > m[x][y])
                {
                    x = k;
                    y = l;
                }
            }
        }
        printCase(i);
        printf("%d %d",x, y);
        newLine();
    }
        
    return (EXIT_SUCCESS);
}

