#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int T,N,i,x = 1,z;
    scanf("%d",&T);
    char *P, *y;
    while(T-->0){
        i = 0;
        scanf("%d",&N);
        z = 2*N-2+1;
        P = (char*)malloc(z);
        y = (char*)malloc(z);
        fflush(stdin);
        gets(P);
        while(P[i] != 0 || i < z){
            if(P[i] == 'S')
                y[i] = 'E';
            else if(P[i] == 'E')
                y[i] = 'S';
            else{
                y[i] = 0;
                break;
            }
            i++;
        }
        printf("\nCase #%d: %s",x++,y);
        free(P);
        free(y);
    }
    return 0;
}