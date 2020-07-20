#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i, j, n, testCase;
    scanf("%d", &testCase);

    char** paths = malloc(testCase * sizeof(char*));

    for(i = 0; i < testCase; i++){
        scanf("%d", &n);

        paths[i] = malloc((2*n - 2) * sizeof(char));
        scanf("%s", paths[i]);
    }

    for(i = 0; i < testCase; i++){
        for(j = 0; j < strlen(paths[i]); j++){
            if(paths[i][j] == 'S')
                paths[i][j] = 'E';
            else
                paths[i][j] = 'S';
        }
        printf("Case #%d: %s\n", i + 1, paths[i]);
    }


    return 0;
}