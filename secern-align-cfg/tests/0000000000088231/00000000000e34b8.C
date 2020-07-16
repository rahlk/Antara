#include <stdio.h>
#include <string.h>


void printSolution(char* number) {
    
    char found = '0';
    unsigned int numberLen = strlen(number);
    for (int i = 0; i < numberLen; ++i) {
        if (number[i] == '4') {
            found = '1';
            number[i] = '3';
            putchar('1');
        }
        else if (found == '1')
            putchar('0');
    }
    putchar(' ');
    printf("%s", number);
    putchar('\n');
}


int main () {
    char number[105];
    int noTests;
    scanf("%d", &noTests);
    for (int i = 0; i < noTests; ++i) {
        scanf("%s", number);
        printf("Case #%d: ", i + 1);
        printSolution(number);
    }
    return 0;
}

