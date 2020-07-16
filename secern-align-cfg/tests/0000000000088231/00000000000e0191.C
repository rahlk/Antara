#include <stdio.h>
#include <string.h>
int main (void){
    char input[103] = {0};
    char A[103] = {0};
    char B[103] = {0};
    int T;
    scanf("%d", T);
    for (int i = 0; i< T; i++){
        scanf("%s", input);
        int len = strlen(input);
        for (int j = 0; j<len;j++){
            if(input[j]=='4'){
                A[j] = '1';
                B[j] = '3';
            }
            else{
                A[j] = input[j];
                B[j] = '0';
            }
        }
        printf("Case #%d: %s %s", T, A, B);
    }
    return 0;
}