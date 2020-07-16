/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RobotProgrammingStrategy.c
 * Author: preetam
 *
 * Created on May 4, 2019, 2:48 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int t, i, a;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d",&a);
        int j, len[a];
        char **c = (char **)calloc(a, sizeof(char *));
        for(j = 0; j < a; j++)
            c[j] = (char *)calloc(500, sizeof(char));
        for(j = 0; j < a; j++)
        {
            scanf("%s",c[j]);
            len[j] = strlen(c[j]);
            getchar();
        }
        char rs[500];
        for(j = 0; j < 500; j++)
        {
            int p = 0, r = 0, s = 0;
            for(int k = 0; k < a; k++)
            {
                if(!len[k]) continue;
                if(c[k][j % len[k]] == 'P')
                    p = 1;
                else if (c[k][j % len[k]] == 'R')
                    r = 1;
                else s = 1;                    
            }
            if(p && r && s )
            {
                strcpy(rs,"IMPOSSIBLE");
                break;
            }
            else if( p && !r && !s)
            {
                rs[j] = 'S';
                rs[j+1] = '\0';
                break;
            }
            else if( !p && r && !s)
            {
                rs[j] = 'P';
                rs[j+1] = '\0';
                break;
            }
            else if( !p && !r && s)
            {
                rs[j] = 'R';
                rs[j+1] = '\0';
                break;
            }
            else if( p && r && !s)
            {
                rs[j] = 'P';
                for(int k = 0; k < a; k++)
                {
                    if(c[k][j % len[k]] != 'P')
                        len[k] = 0;
                }
            }
            else if( p && !r && s)
            {
                rs[j] = 'S';
                for(int k = 0; k < a; k++)
                {
                    if(c[k][j % len[k]] != 'S')
                        len[k] = 0;
                }
            }
            else if( !p && r && s)
            {
                rs[j] = 'R';
                for(int k = 0; k < a; k++)
                {
                    if(c[k][j % len[k]] != 'R')
                        len[k] = 0;
                }
            }
        }
        if(j == 500)
            strcpy(rs,"IMPOSSIBLE");
        printCase(i);
        printf("%s",rs);
        newLine();
    }
    return (EXIT_SUCCESS);
}

