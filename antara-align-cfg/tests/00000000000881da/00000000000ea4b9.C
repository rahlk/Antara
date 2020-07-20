#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int T,i,j;
    int *N;
    char *P,**S;
    scanf("%d",&T);
    S=malloc(T*sizeof(char*));
    N=malloc(T*sizeof(int));
    for(i=0;i<T;i++){
        scanf("%d",&N[i]);
        P=malloc((2*N[i]-1)*sizeof(char));
        scanf("%s",P);
        S[i]=malloc((2*N[i]-1)*sizeof(char));
        S[i][2*N[i]-2]='\0';
        for(j=0;j<2*N[i]-2;j++){
            if(P[j]=='S')
                S[i][j]='E';
            if(P[j]=='E'){
            S[i][j]='S';
            }
        }
    }
    for(j=0;j<T;j++)
    printf("Case #%d: %s\n",j+1,S[j]);    
    return 0;
}