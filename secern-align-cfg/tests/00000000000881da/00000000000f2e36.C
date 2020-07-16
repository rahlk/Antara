#include "stdio.h"
int main(){
    int t, i, j, n;
    char m[1000];
    getc("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        scanf("%s", m);
        for(j = 0;j<2*n - 2; j++){
            if(*(m+j) == 'E') *(m+j) = 'S';
            else if(*(m+j) == 'S')*(m+j) = 'E';
        }
        printf("Case #%d: ",i);
        for(j=0;j<2*n -2;j++){
            printf("%c",m[j]);
        }
        printf("\n");
    }
}
