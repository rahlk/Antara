#include <stdio.h>
#include <stdlib.h>

int main(){
    int casosDeTeste;
    
    scanf("%d", &casosDeTeste);

    for(int i=0; i < casosDeTeste; i++){
        char A[101];
        int B=0;
        
        scanf("%s", A);

        for(int j=0; j<101; j++){
            if(A[j] == '4'){
                A[j] = '3';
                B += 1;
            }
			if(A[j+1] == '\0'){
                printf("Case #%d: %s %d\n", i+1, A, B);
                break;
            }
            B *= 10;
        }   
    }
    
    return 0;
}