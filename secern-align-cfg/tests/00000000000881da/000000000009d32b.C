#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t, q, n, i;
    char string[10];
    char answer[10];
    
    scanf("%d", &t);
    
    for(q = 0; q < t; q++){
        scanf("%d", &n);
        scanf("%s", string);
        
        for(i = 0; i < (2*n - 2); i++) {
            if (string[i] == 'S') {
                answer[i] = 'E';
            }
            else {
                answer[i] = 'S';
            }
        }
	    answer[i] = '\0';
        
        printf("Case #%d: %s\n", q+1, answer);
    }
}