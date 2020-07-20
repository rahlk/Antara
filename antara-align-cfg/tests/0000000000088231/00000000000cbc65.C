#include<stdio.h>

int main(int argc, char *argv[]){
    int N, T, N1, N2;
    N2=0;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%d", &N);
	    int aux = 10000000;
	    N1 = N;
	    while(aux!=0){
            if(N/aux == 4){
                N1 -= (2*aux);
                N2 += (2*aux);
            }
            N = N%aux;
            aux = aux/10;
      	}
        printf("Case #%d: %d, %d", i+1, N1, N2);
    }
}