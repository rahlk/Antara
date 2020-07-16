#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clean(char * a){
    for(int i = 0 ; i < strlen(a) ; i++){
        a[i] = '0';
    }
}

char * func(char * P , int N){
    char * ans;
    ans = malloc(sizeof(char) * (2 * N - 2));
    for(int i = 0 ; i < strlen(P) ; i++){
        if(P[i] == 69)
            ans[i] = 83;
        else
            ans[i] = 69;
    }
    return ans;
}

int main(){
    int T = 0;
    int N = 0;
    char * P;
    P = malloc(sizeof(char) * 100000 - 2);
    scanf("%d",&T);
    for(int i = 1 ; i <= T ; i++){
        clean(P);
        scanf("%d",&N);
        scanf("%s",P);
        printf("Case #%d: ",i);
        printf("%s\n",func(P,N));
    }
}
