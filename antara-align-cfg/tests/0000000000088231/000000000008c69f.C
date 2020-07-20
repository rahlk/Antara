/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Main.c
 * Author: preetam
 *
 * Created on April 6, 2019, 12:14 AM
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
int getOne(int n)
{
    int a = 0, p = 1, r;
    while(n!=0)
    {
        r = n % 10;
        a += p * (r == 4? 1 : 0);
        p *=10;
        n/=10;
    }
    return a;
}

int main(int argc, char** argv) {
    int i, t, n, a;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d",&n);
        a = getOne(n);
        printCase(i);
        printf("%d %d", a, n-a);
        newLine();
    }
    return (EXIT_SUCCESS);
}



