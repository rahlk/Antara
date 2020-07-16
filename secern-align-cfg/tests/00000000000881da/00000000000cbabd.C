#include <stdio.h>
#include <string.h>

void printMirrorPath(char* path) {

    unsigned int pathLen = strlen(path);
    for (unsigned int i = 0; i < pathLen; ++i) {
        (path[i] == 'S') ? (path[i] = 'E') : (path[i] = 'S');
        putchar(path[i]);
    }
    putchar('\n');
}

int main() {

    unsigned int noTests;
    scanf("%d", &noTests);

    unsigned int gridSize;
    char path[100];
    for (unsigned int i = 1; i <= noTests; ++i) {

        scanf("%d", &gridSize);
        scanf("%s", path);
        printf("Case #%d: ", i);
        printMirrorPath(path);
        //scanf("%c", &ch);
        //while (ch != '\n') {
        //    (ch == 'E') ? (ch = 'S') : (ch = 'E');
        //    printf("%c", ch);
        //    scanf("%c", &ch);
        //}
    }

    return 0;
}
