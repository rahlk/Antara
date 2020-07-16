#include<stdio.h>

int main(int argc, char *argv[]){
    int N, T, N1, N2;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d", &N);
	    int aux = 1000000;
    	if(N<aux){
      	    while(aux!=1){
        	    if(N/aux == 4){
            		N1 = N-(2*aux);
            		N2 += (2*aux);
            		N = N%aux;
            		aux = aux/10;
        		}
      		}
    	}
        printf("Case #%d: %d, %d", i+1, N1, N2);
    }
}