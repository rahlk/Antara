/* 
 * File:   main.c
 * Author: Pablo
 *
 * Created on 28 de abril de 2019, 18:04
 */

#include <stdio.h>
#include <stdlib.h>

struct Posiciones{
    int x;
    int y;
    char direccion;
} ;

int main(int argc, char** argv) {
    int nproblemas = 0, i, j, t, k;
    int final, mayor, x, y;
    int personas, tam, totalCuadricula;
    struct Posiciones posicionesPersonas[600];

    scanf("%d", &nproblemas);
    for (i=1;i<=nproblemas;i++){
        scanf("%d %d",&personas, &tam);
        for(j=0;j<personas;j++){
            scanf("%d %d %c", &posicionesPersonas[j].x, &posicionesPersonas[j].y, &posicionesPersonas[j].direccion);
            //printf("Prueba: %d %d %c",posicionesPersonas[j].x, posicionesPersonas[j].y, posicionesPersonas[j].direccion);
        }
        tam++;
        totalCuadricula=tam*tam;
        int posicionesPasan[totalCuadricula];
        if(personas == 1){
            switch(posicionesPersonas[0].direccion){
                case 'N': //y++;
                    posicionesPersonas[0].x=0;
                    posicionesPersonas[0].y+=1;
                    break;
                case 'S': //y--;
                    posicionesPersonas[0].x=0;
                    posicionesPersonas[0].y-=1;
                    break;
                case 'W': //x--;
                    posicionesPersonas[0].y=0;
                    posicionesPersonas[0].x-=1;
                    break;
                case 'E': //x++;
                    posicionesPersonas[0].y=0;
                    posicionesPersonas[0].x+=1;
                    break;
                    
            }
            printf("Case #%d: %d %d\n",i, posicionesPersonas[0].x,posicionesPersonas[0].y);
        }else{
            for(j=0;j<totalCuadricula;j++){
                posicionesPasan[j]=0;
            }
            for(j=0;j<personas;j++){
                switch(posicionesPersonas[j].direccion){
                    case 'N': //y++;
                        for(t=posicionesPersonas[j].y+1;t<tam;t++){
                            for(k=0;k<tam;k++){
                                posicionesPasan[k+t*tam]+=1;
                            }
                        }
                        break;
                    case 'S': //y--;
                        for(t=posicionesPersonas[j].y-1;t>=0;t--){
                            for(k=0;k<tam;k++){
                                posicionesPasan[k+t*tam]+=1;
                            }
                        }
                        break;
                    case 'W': //x--;
                        for(t=posicionesPersonas[j].x-1;t>=0;t--){
                            for(k=0;k<tam;k++){
                                posicionesPasan[t+k*tam]+=1;
                            }
                        }
                        break;
                    case 'E': //x++;
                        for(t=posicionesPersonas[j].x+1;t<tam;t++){
                            for(k=0;k<tam;k++){
                                posicionesPasan[t+k*tam]+=1;
                            }
                        }
                        break;
                }
            }
            mayor=-1;
            final=-1;
            for(j=0;j<totalCuadricula;j++){
                y=(int)j/tam;
                x=j-tam*y;
                //printf("Posicion(%d,%d)=%d\n", x, y, posicionesPasan[j]);
                if(posicionesPasan[j]>mayor){
                    mayor=posicionesPasan[j];
                    final=j;
                }
            }
            y=(int)final/tam;
            x=final-tam*y;
            printf("Case #%d: %d %d\n", i, x, y);
        }
    }
        return (EXIT_SUCCESS);
}