#include <stdio.h>
#include <string.h>


int main() {

    unsigned int noTests;
    scanf("%d", &noTests);

    unsigned int gridSize;
    char ch;
    for (unsigned int i = 1; i <= noTests; ++i) {

        scanf("%d", &gridSize);
        printf("Case #%d: ", i);
        ch = getchar();
        //printf("trec");
        while (ch != EOF) {
            (ch == 'E') ? (ch = 'S') : (ch = 'E');
            putchar(ch);
            ch = getchar();
        }
    }

    return 0;
}
