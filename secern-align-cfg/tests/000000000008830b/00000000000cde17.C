/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CryptoPangrams.c
 * Author: preetam
 *
 * Created on April 6, 2019, 3:31 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
int isPrime(int n)
{
    int d,limit = (int)sqrt(n);
    for(d = 2; d <= limit; d++)
    {
        if (n % d == 0)
            return 0;
    }
    return 1;
}
int getFirstPlainText(int ct, int n)
{
    int d, limit = (int)sqrt(ct);
    for(d = 2; d <= limit; d++)
    {
        if (ct % d == 0 && isPrime(d) && ct / d <= n)
        {
            return d;
        }
    }
    return 0;
}

int getLetter(int pt, int *ltr, int len)
{
    int start = 0, end = len-1, mid;
    do{
        mid = (start + end)/2;
        if(ltr[mid] == pt)
        {
            return mid;
        }
        else if(pt < ltr[mid])
        {
            end = mid - 1;
        }
        else
            start = mid + 1;

    }while(start <= end);
    return -1;
}
void insertLetter(int pt, int *ltr, int len )
{
    len--;
    while(len >= 0 && ltr[len] > pt)
    {
        ltr[len+1] = ltr[len];
        len--;
    }
    ltr[len+1] = pt;
}
int main(int argc, char** argv) {
    int i, j, t, n, l, letters[26], *ct, *pt, tmp, len = 0, index;
    char *text;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d%d",&n,&l);
        ct = (int *)malloc(l*sizeof(int));
        pt = (int *)calloc(l+1, sizeof(int));
        text = (char *)calloc(l+2, sizeof(char));
        text[l+1] = '\0';
        for(j = 0; j < l; j++)        
            scanf("%d",&ct[j]);
        pt[0] = getFirstPlainText(ct[0], n);
        pt[1] = ct[0] / pt[0];
        if(pt[0] != pt[1])
        {
            for(j = 0; j < l-1 && ct[j] == ct[j+1]; j++);
            if(ct[j+1] % pt[0] == 0)
            {
                tmp = pt[0];
                pt[0] = pt[1];
                pt[1] = tmp;
            }
            if(pt[0] < pt[1])
            {
                letters[0] = pt[0];
                letters[1] = pt[1];
            }
            else
            {
                letters[0] = pt[1];
                letters[1] = pt[0];
            }
            len = 2;
        }
        else{
            letters[0] = pt[0];
            len = 1;
        }
        for(j = 1; j < l; j++)
        {
            pt[j+1] = ct[j] / pt[j];
            if(len < 26)
            {
                index = getLetter(pt[j+1], letters, len);
                if(index == -1)
                {
                    insertLetter(pt[j+1], letters, len );
                    len++;
                }
            }
        }
        for(j = 0; j <= l; j++)
        {
            text[j] = 'A' + getLetter(pt[j], letters, len);
        }
        printCase(i);
        printf("%s",text);
        newLine();
    }
    return (EXIT_SUCCESS);
}
