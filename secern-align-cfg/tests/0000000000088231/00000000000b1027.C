#include <stdio.h>
#include <string.h>

char A[200], B[200];

void slv(){
        int i;
        for(i = 0; i<strlen(A); i++){
                if( A[i] == '4'){
                        A[i]--;
                        B[i] = '1';
                }else{
                        B[i] = '0';
                }
        }
        B[i] = '\0';
}

int main(){
        int T, i;
        scanf("%d", &T);
        for( i = 0;  i<T; i++){
                scanf("%s", A);
                slv();
                printf("Case #%d: %s %s\n", i+1, A, B);
        }
}
