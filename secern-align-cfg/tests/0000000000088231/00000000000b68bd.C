#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Solve case
void solve(char *n_str, char result[][101]) {
    int len, i, j = 0;

    len = strlen(n_str);
    for (i = 0; i < len; i++){
        switch(n_str[i]) {
            case '0':
                // Case B string started
                if (j > 0) {
                    result[0][i] = '0';
                    result[1][j++] = '0';
                }
                else {
                    result[0][i] = '0';
                }
                break;
            case '1':
                // Case B string started
                if (j > 0) {
                    result[0][i] = '1';
                    result[1][j++] = '0';
                }
                else {
                    result[0][i] = '1';
                }
                break;
            case '2':
                result[0][i] = '1';
                result[1][j++] = '1';
                break;
            case '3':
                result[0][i] = '1';
                result[1][j++] = '2';
                break;
            case '4':
                result[0][i] = '2';
                result[1][j++] = '2';
                break;
            case '5':
                result[0][i] = '2';
                result[1][j++] = '3';
                break;
            case '6':
                result[0][i] = '3';
                result[1][j++] = '3';
                break;
            case '7':
                result[0][i] = '2';
                result[1][j++] = '5';
                break;
            case '8':
                result[0][i] = '3';
                result[1][j++] = '5';
                break;
            case '9':
                result[0][i] = '3';
                result[1][j++] = '6';
                break;
            default:
                printf("Error in input: char is not a digit\n");
                exit(1);
        }
    }

    result[0][i] = '\0';
    result[1][j] = '\0';
    
    return;
}

// Read input
int main(int argc, char *argv[]) {
    int t;
    int i;
    /* max is 10^100*/
    char p[101];
    /* result is 2 strings, 1 for A, other for B */
    char result[2][101];

    scanf("%d", &t);

    for (i = 0; i < t; i++){
        scanf("%s", p);

        solve(p, result);

        printf("Case #%d: %s %s\n", i + 1, result[0], result[1]);
    }

    return 0;
}