#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* itoa (int, char*, int);

char verificarA(char num){

    char r;
    switch (num){

    case '0': r = '0'; break;
    case '1': r = '1'; break;
    case '2': r = '1'; break;
    case '3': r = '1'; break;
    case '4': r = '2'; break;
    case '5': r = '2'; break;
    case '6': r = '3'; break;
    case '7': r = '5'; break;
    case '8': r = '3'; break;
    case '9': r = '6'; break;
    default:                ;
    }

return r;
}

char verificarB(char num){

    char r;
    switch (num){

    case '0': r = '0'; break;
    case '1': r = '0'; break;
    case '2': r = '1'; break;
    case '3': r = '2'; break;
    case '4': r = '2'; break;
    case '5': r = '3'; break;
    case '6': r = '3'; break;
    case '7': r = '2'; break;
    case '8': r = '5'; break;
    case '9': r = '3'; break;
    default:                ;
    }

return r;
}

int main(){

    int T;
    int n;
    char N[100];
    char A[100];
    char B[100];

    scanf("%d", &T);

    int contador=0;

    while(contador<T){

    contador++;

    scanf("%d", &n);

    snprintf(N, 100, "%d", n);

    for(int i=99; i>=0; i--){

        A[i]= verificarA(N[i]);
        B[i]= verificarB(N[i]);

    }

    printf("Case #%d: ", contador);

    char *ptrA;
    char *ptrB;
    int numA = strtol(A, &ptrA, 10);
    int numB= strtol(B, &ptrB, 10);


    printf("%d %d\n", numA, numB);

    }


return 0;
}

