#include <stdio.h>
#include <string.h>

int verifica_digito_4(unsigned int a) {
    
    char str[a];
    int i;
    
    sprintf(str,"%d",a);
    
    for(i=0;i<strlen(str);++i){
        if(str[i] == '4'){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int T,i;
    unsigned int N,A,B,soma;
    
    scanf("%u",&T);
    i=1;
    while(T > 0){
        scanf("%u",&N);
        A = B = N/2;
        soma = 0;
        while(soma != N){
            if(verifica_digito_4(A)!=0){
                if(verifica_digito_4(B)!=0){
                    soma = A + B;
                }
            }
            A--;
            B++;
        }
        printf("Case %d: %u %u\n",i,A,B);
        T--;
        i++;
    }

    return 0;
}
