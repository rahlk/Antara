#include<stdio.h>

void main(){
    int i,j,T,N;
    scanf("%d", &T);
    
    char a[1000];
    char b[1000];
    for(i=0; i<T; i++){
        scanf("%d", &N);
        for(j=0; j<N*2-1; j++){
            scanf("%c", &a[j]);
            if(a[i] == S) b[i] = 'E'
            if(a[i] == E) b[i] = 'S'
            printf("Case #%d: %c", i+1, b);
        }
    }
}