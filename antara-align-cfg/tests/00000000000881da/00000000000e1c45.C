#include <stdio.h>
#include <string.h>


int main() {

    unsigned int noTests;
    scanf("%d", &noTests);

    unsigned int gridSize;
    char ch;
    for (unsigned int i = 0; i < noTests; ++i) {

        scanf("%d", &gridSize);
        getchar();
        printf("Case #%d: ", i + 1);
        for (unsigned int j = 0; j < 2 * gridSize - 2; ++j) {
            ch = getchar();
            // getchar();
            (ch == 'E') ? (ch = 'S') : (ch = 'E');
            putchar(ch);
        }
        putchar('\n');
    }

    return 0;
}
