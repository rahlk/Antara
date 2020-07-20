#include<stdio.h>
#include<stdlib.h>
int main(){
    int T,N,x = 1;
    scanf("%d",T);
    char *P, *y;
    while(T-->0){
        i = 0;
        scanf("%d",N)
        P = (char*)malloc(2N - 2 + 1);
        y = (char*)malloc(2N - 2 + 1);
        gets(P);
        while(P[i] != 0){
            if(P[i] == 'S')
                y[i] = 'E';
            if(P[i] == 'E')
                y[i] = 'S';
            i++;
        }
        printf("Case #%d: ",x++);
        puts(y);
        free(P);
        free(y);
    }
    return 0;
}