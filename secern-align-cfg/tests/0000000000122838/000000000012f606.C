/* 
 * File:   main.c
 * Author: Pablo
 *
 * Created on 28 de abril de 2019, 19:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nproblemas = 0, i, j, k;
    int numeroEspadas, diferenciaNivel;
    int espadasCharlie[100005];
    int espadasDelia[100005];
    int total;
    
    scanf("%d", &nproblemas);
    for (i=1;i<=nproblemas;i++){
        total=0;
        scanf("%d %d", &numeroEspadas, &diferenciaNivel);
        for(j=0;j<numeroEspadas;j++){
            scanf("%d", &espadasCharlie[j]);
        }
        for(j=0;j<numeroEspadas;j++){
            scanf("%d", &espadasDelia[j]);
        }
        for(j=0;j<numeroEspadas;j++){
            if(espadasCharlie[j]==0){
                continue;
            }else{
                for(k=0;k<numeroEspadas;k++){
                    if(abs(espadasDelia[k]-espadasCharlie[j])<=diferenciaNivel){
                        total+=1;
                    }
                }
            }
        }
        printf("Case #%d: %d\n",i,total);
    }
        return (EXIT_SUCCESS);
}

