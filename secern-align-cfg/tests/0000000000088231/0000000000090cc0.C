#include <stdio.h>
#include <string.h>


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
    char N[100];
    char A[100];
    char B[100];

    scanf("%d", &T);

    int contador=0;

    while(contador<T){

    contador++;

    scanf("%s", &N);

    for(int i=99; i>=0; i--){

        A[i]= verificarA(N[i]);
        B[i]= verificarB(N[i]);

    }

    int contadorA = 0;
    for(int i=0; i<100 && A[i]=='0'; i++){
        contadorA++;
    }

    int contadorB = 0;
    for(int i=0; i<100 && B[i]=='0'; i++){
        contadorB++;
    }

    printf("Case #%d: ", contador);

    for(int i=contadorA; i<100 && A[i]!='\0'; i++){
        printf("%c", A[i]);
    }

    printf(" ");

    for(int i=contadorB; i<100 && B[i]!='\0'; i++){
        printf("%c", B[i]);
    }

    printf("\n");

    }


return 0;
}
