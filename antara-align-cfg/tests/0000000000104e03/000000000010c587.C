/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pylons.c
 * Author: preetam
 *
 * Created on April 13, 2019, 6:40 AM
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
    int t, r, c;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
    {
        scanf("%d %d",&r, &c);
        int **g = (int **)calloc(r, sizeof(int *));
        for(int j = 0; j < r; j++)
            g[j] = (int *)calloc(c, sizeof(int));
        int path [r*c][2], pi;
        for(int j = 0; j < r; j++)
        {
            pi = 0;
            path[pi][0] = j;
            for(int k = 0; k < c; k++)
            {
                path[pi][1] = k;
                g[j][k] = 1;
                for(int m = 0; m < r; m++)
                {
                    if(m == path[pi][0]) continue;
                    for(int n = 0; n < c; n++)
                    {
                        if(g[m][n]) continue;
                        if (n == path[pi][1]) continue;
                        if(path[pi][0] - path[pi][1] == m-n) continue;
                        if(path[pi][0] + path[pi][1] == m+n) continue;
                        pi++;
                        path[pi][0] = m;
                        path[pi][1] = n;
                        g[m][n] = 1;
                        m = -1; //0
                        break;                     
                    }
                }
                if(pi == r*c - 1)
                    break;
                pi = 0;
                for(int m = 0; m < r; m++)
                    for(int n = 0; n < c; n++)
                        g[m][n] = 0;
            }
            if(pi == r*c - 1)
            {
                printCase(i);
                printf("POSSIBLE");
                newLine();
                for(int j = 0; j < r*c; j++)
                    printf("%d %d\n",path[j][0]+1, path[j][1]+1);
                break;
            }
        }
        if(pi < r*c-1)
        {
            printCase(i);
            printf("IMPOSSIBLE");
            newLine();
        }
    }
    return (EXIT_SUCCESS);
}

