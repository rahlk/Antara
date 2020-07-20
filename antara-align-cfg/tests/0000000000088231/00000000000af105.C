#include <stdio.h>
#include <string.h>

int main(){
    char N[102];
    char A[102], B[102];
    int t, i, j;
    int len_n, four_idx;
    
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%s", N);
        
        len_n = strlen(N);
        for(j=0; j<len_n; j++){
            if(N[j] == '4'){
                four_idx = j;
                break;
            }
        }
        for(j=0; j<len_n; j++){
            A[j] = N[j];
            if(j == four_idx){
                A[j] = '2';
                B[0] = '2';
            }
            if(j > four_idx){
                B[j-four_idx] = '0';
            }
        }
        A[len_n] = 0;
        B[len_n-four_idx] = 0;
        
        printf("Case #%d: %s %s\n", i, A, B);
    }

    return 0;
}