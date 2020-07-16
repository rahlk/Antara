#include <stdio.h>
#include <string.h>

int main(){
    char N[102];
    char A[102], B[102];
    int t, i, j;
    int len_n, first_four;
    
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%s", N);
        
        len_n = strlen(N);
        first_four = -1;
        for(j=0; j<len_n; j++){
            A[j] = N[j];
            if(N[j] == '4'){
                if(first_four == -1) first_four = j;
                A[j] = '2';
                B[j-first_four] = '2';
            }
            else if(first_four > -1){
                B[j-first_four] = '0';
            }
        }
        A[len_n] = 0;
        B[len_n-first_four] = 0;
        
        printf("Case #%d: %s %s\n", i, A, B);
    }

    return 0;
}