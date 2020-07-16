/*
 * File:   main.c
 * Author: Pablo
 *
 * Created on 6 de abril de 2019, 11:36
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int nproblemas = 0, i, j, primero;
    char dato1[1000], dato2[1000]="\0";

    scanf("%d", &nproblemas);
    for (i=0;i<nproblemas;i++){
        scanf("%s",dato1);
        for(j=0;j<strlen(dato1);j++){
            if(dato1[j] == '4'){
                dato1[j] = '3';
                dato2[j] = '1';
            }else{
                dato2[j] = '0';
            }
            dato2[j+1] = '\0';
        }
        printf("Case #%d: ",i+1);
        primero=1;
        for(j=0;j<strlen(dato1);j++){
            if(primero == 1){
                if(dato1[j] != '0'){
                    printf("%c",dato1[j]);
                    primero=0;
                }
            }else{
                printf("%c",dato1[j]);
            }
        }
        printf(" ");
        primero=1;
        for(j=0;j<strlen(dato2);j++){
            if(primero == 1){
                if(dato2[j] != '0'){
                    printf("%c",dato2[j]);
                    primero=0;
                }
            }else{
                printf("%c",dato2[j]);
            }
        }
        printf("\n");
    }
        return (EXIT_SUCCESS);
}

