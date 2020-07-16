#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int T; scanf("%d", &T);
    int A[T];
    long char C[T][255][501];
    for(int i = 0 ; i < T ; i++){
        scanf("%d", &A[i]);
        for(int j = 0 ; j < A[i] ; j++){
            scanf("%s", C[i][j]);
        }
    }
    for(int i = 0 ; i < T ; i++){

        int L[A[i]];
        for(int k = 0 ; k < A[i] ; k++){
            L[k] = strlen(C[i][k]);
        }
        char X[501];
        for(int m = 0 ; ; m++){
            if(m == 500){
                printf("Case #%d: IMPOSSIBLE\n", i + 1);
                break;
            }
            bool R = false, P = false, S = false;
            for(int j = 0 ; j < A[i] && (!R || !P || !S) ; j++){
                char Z = C[i][j][m % L[j]];
                if(Z == 'R') R = true;
                else if(Z == 'P') P = true;
                else S = true;
            }
            if(R && P && S){
                printf("Case #%d: IMPOSSIBLE\n", i + 1);
                break;
            }else if(R && P && !S) X[m] = 'P';
            else if(R && !P && S) X[m] = 'R';
            else if(!R && P && S) X[m] = 'S';
            else if(!R && !P && S){
                X[m] = 'R', X[m + 1] = '\0';
                printf("Case #%d: %s\n", i + 1, X);
                break;
            }else if(!R && P && !S){
                X[m] = 'S', X[m + 1] = '\0';
                printf("Case #%d: %s\n", i + 1, X);
                break;
            }else{
                X[m] = 'P', X[m + 1] = '\0';
                printf("Case #%d: %s\n", i + 1, X);
                break;
            }
        }
    }
    return 0;
}
