#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

void solve();
char* withoutLeadingZeros(char* s);
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
        char* w1 = getWord();

        int l = strlen(w1);

        char* w2 = calloc(l + 1, sizeof(char));

        for(int i = 0; i < l; i++) {
            if(w1[i] == '4') {
                w1[i] = '3';
                w2[i] = '1';
            } else {
                w2[i] = '0';
            }
        }

        w2[l] = '\0';

       printf("Case #%i: %s %s\n", c, w1, withoutLeadingZeros(w2));

       free(w1);
       free(w2);
    }
}

char* withoutLeadingZeros(char* s) {
    for(int i = 0; ; i++) {
        if(s[i] != '0') {
            return &s[i];
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
    char* word = calloc(size, sizeof(char));

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
