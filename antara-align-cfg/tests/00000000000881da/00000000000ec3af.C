/* 
 * File:   main.c
 * Author: Pablo
 *
 * Created on 6 de abril de 2019, 23:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int T, i, N, n;
    char camino[100000];
    
    scanf("%d", &T);
    
    for (i=0;i<T;i++) {
        scanf("%d", &N);
        scanf("%s", camino);
        printf("Case #%d: ", i+1);
        for (n = 0; n < 2*N-2; n++) {
            if(camino[n]=='E'){
                    printf("S");
            }else{
                    printf("E");
            }
        }
        printf("\n");
        fflush(stdout);
    }
    
    return (EXIT_SUCCESS);
}

