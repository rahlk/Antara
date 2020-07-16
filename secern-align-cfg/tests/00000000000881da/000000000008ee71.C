/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OwnWay.c
 * Author: preetam
 *
 * Created on April 6, 2019, 6:06 AM
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
    int i, j, t, n;
    char s[100000];
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d",&n);
        getchar();
        scanf("%s",s);
        n = 2*n-2;
        for(j = 0; j < n; j++)
        {
            s[j] = s[j] == 'E' ? 'S' : 'E';
        }
        printCase(i);
        printf("%s",s);
        newLine();
    }
    return (EXIT_SUCCESS);
}

