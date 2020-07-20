/*
 * File:   main.c
 * Author: Pablo
 *
 * Created on 6 de abril de 2019, 11:36
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
 *
 */
int main(int argc, char** argv) {
    float ninicial;
    int nproblemas = 0, n1, n2, i, j, t;
    char dato1[20], cambios[20]="\0";

    scanf("%d", &nproblemas);
    for (i=0;i<nproblemas;i++){
        n1=0;
        n2=0;
        cambios[0]='\0';
        scanf("%d",&n1);
        ninicial=n1/2.0;
        n1=floor(ninicial);
        n2=ceil(ninicial);
        t=0;
        sprintf(dato1, "%d", n1);
        if(n1!=n2){
            t=strlen(dato1)-1;
            if(dato1[t] == '3' || dato1[t] == '4'){
                n2+=2;
                n1-=2;
                sprintf(dato1, "%d", n1);
            }
        }
                
        for(j=0;j<strlen(dato1);j++){
            if(dato1[j] == '4'){
                cambios[t]=strlen(dato1)-j;
                t++;
            }
        }
        if(strlen(cambios)!=0){
            t=0;
            for(j=0;j<strlen(cambios);j++){
                t+=pow(10,cambios[j]-1);
            }

            n2=n1+t;
            n1=n1-t;
        }
        
        printf("Case #%d: %d %d\n",i+1,n1,n2);
    }
        return (EXIT_SUCCESS);
}

