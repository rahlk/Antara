#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

void solve();
int getInt();
float getFloat();
char* getWord();

int main(int argc, char** argv) {
    solve();

    return 0;
}

void solve() {
    int numCases = getInt();

    for(int c = 1; c <= numCases; c++) {
        const int rows = getInt();
        const int cols = getInt();

        if((cols <= 1) || (rows <= 1) || ((cols % 2) && (rows % 2)) || ((cols <= 3) && (rows <= 3))) {
            printf("Case #%i: IMPOSSIBLE\n", c);
        } else {
            printf("Case #%i: POSSIBLE\n", c);

            if(cols % 2) {
                for(int y = 0; y < rows; y += 2) {
                    for(int x = 0; x < cols; x += 1) {
                        printf("%i %i\n", y + 1 + 1, ((x + 2) % cols) + 1);
                        printf("%i %i\n", y + 1, x + 1);
                    }
                }
            } else {
                for(int x = 0; x < cols; x += 2) {
                    for(int y = 0; y < rows; y += 1) {
                        printf("%i %i\n", ((y + 2) % rows) + 1, x + 1 + 1);
                        printf("%i %i\n", y + 1, x + 1);
                    }
                }
            }
        }
    }
}

int getInt() {
    int result;

    scanf("%i", &result);

    return result;
}

float getFloat() {
    float result;

    scanf("%f", &result);

    return result;
}

char* getWord() {
    int size = 1;
    char* word = malloc(size * sizeof(char));

    char c;
    int i = 0;

    while(isspace(c = getchar()));

    ungetc(c, stdin);

    while(!isspace(c = getchar())) {
        if(i + 1 >= size) {
            size *= 2;
            word = realloc(word, size * sizeof(char));
        }

        word[i] = c;

        i++;
    }

    word[i] = '\0';

    return word;
}
