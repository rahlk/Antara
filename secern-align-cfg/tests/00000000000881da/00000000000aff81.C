#include <stdio.h>
#include <string.h>

int main(){
    char P[100001];
    int N;
    int t, i, j;
    
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%d", &N);
        scanf("%s", P);
        
        printf("Case #%d: ", i);
        for(j=0; j<(N+N-2); j++){
            printf("%c", (P[j] == 'E')?'S':'E');
        }
        printf("\n");
    }

    return 0;
}