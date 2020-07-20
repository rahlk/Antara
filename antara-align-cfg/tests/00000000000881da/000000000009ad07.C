#include <stdio.h>
#include <string.h>

int main(){
    
    int T, i;
    signed int N, j;
    scanf("%d", &T);
    char** result = (char**)malloc(T * sizeof(char*));
    for(i=0; i<T; i++){
        scanf("%d", &N);
        char* input = (char*)malloc((N+1) * sizeof(char));
        scanf("%s", input);
        j=0;
        while(*(input+j) != '\0'){
            if(*(input+j) == 'E')
                *(input+j) = 'S';
            else if(*(input+j) == 'S')
                *(input+j) = 'E';
            j++;
        }
        *(result+i) = input;
    }
    for(i=0; i<T; i++){
        printf("Case #%d: %s\n", i+1, *(result+i));
        free(*(result+i));
    }
    free(result);
    return 0;
}