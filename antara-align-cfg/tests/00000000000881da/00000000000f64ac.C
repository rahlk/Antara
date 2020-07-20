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
        int n = getInt();
        char* p = getWord();

        for(int i = 0; i < (2 * (n - 1)); i++) {
            p[i] = (p[i] == 'S') ? 'E' : 'S';
        }

       printf("Case #%i: %s\n", c, p);

       free(p);
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
