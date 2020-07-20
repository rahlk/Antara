#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int Teste4(int N){
    int r=0;
    while(N){
        r = N%10;
        if(r==4)return 1;
        N=N/10;
    }
    return 0;
}
void AB(int N,int *A,int *B){
    *B=0;
    do{
        *B++;
        *A =N-*B;
        
    }while(Teste4(*A)||Teste4(*B));
}
int main(){
    int T;//Nombre de teste
    int N;
    int A,B;
    int i=9988;
    do{
        scanf("%d",&T);
    }while(T<1 || T>100);
    srand(NULL);
    for(int i=0;i<T;i++){
        do{
            N=rand()%i+2;
        }while(!Teste4(N));
        AB(N,&A,&B);
        printf("Cas n ° %d : %d %d \n",i,A,B);
    }
}