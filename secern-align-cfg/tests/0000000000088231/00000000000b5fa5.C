#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim(char **ptr, int len, char c){
    int i;
    int number = 0;
    char ch;

    for(i = 0; i < len; i++){
        if((*ptr)[i] != c){
            (*ptr) = (*ptr) + i;
            break;
        }
    }
}


int main(){

    int i, j, k, len1, len2, right, testNumber;
    scanf("%d", &testNumber);


    char ***numbers = malloc( testNumber*sizeof(char**) );

    for(i = 0; i < testNumber; i++){
        numbers[i] = malloc(2 * sizeof(char*));
        numbers[i][0] = malloc( 100 * sizeof(char));
        numbers[i][1] = malloc( 100 * sizeof(char));

        scanf("%s", numbers[i][0]);
        memset(numbers[i][1], '0', 100);

    }

    for(i = 0; i < testNumber; i++){
        len1 = strlen(numbers[i][0]);

       for(j = 0; j < len1; j++){
            if(numbers[i][0][j] == '4'){
                numbers[i][0][j] = '3';

                right = len1 - j - 1;

                numbers[i][1][100 - 1 - len1 + j + 1] = '1';
            }
        }

    }

    for(i = 0; i < testNumber; i++){
        trim(&numbers[i][1], 100, '0');
        printf("Case #%d: %s %s\n", i + 1, numbers[i][0], numbers[i][1]);
    }

    return 0;
}