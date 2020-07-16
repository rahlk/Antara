#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <assert.h>

char* makePath(unsigned int n) {
    unsigned long int len = 2*n - 2;
    char* path = malloc(len+1);

    return path;
}

char oppose(char dir) {
    return dir == 'E' ? 'S' : 'E'; 
}

// differ with lydia on first move and go all the way to lydia's last move's direction before opposing her on last movements
void makeMyWay(char* myPath, char* lydia, unsigned int n) {
    unsigned long int len = strlen(lydia);
    assert(len == 2*n - 2);

    char lFirst = lydia[0];
    char lLast = lydia[len-1];

    char myFirst = oppose(lFirst);
    char myLast = oppose(lLast);


    unsigned long int movement = 0; // movements made
    myPath[movement++] = myFirst;

    unsigned int i = myFirst == lLast ? 1 : 0; // distance walked in lLast's direction
    unsigned int j = !i; // distance walked in myLast's direction
    for(; i < n-1; i++) {
        myPath[movement++] = lLast;
    }

    // last movements
    while(movement < len) {
        myPath[movement++] = myLast;
    }
}

void way() {
    int t = 1; // 1 <= t <= 100
    scanf("%d", &t);

    int i = 1;
    for(; i <= t; i++) {
        unsigned int n = 2; // 2 <= n <= 50000
        scanf("%u", &n);

        char* lydia = makePath(n);
        scanf("%s", lydia);

        char* myPath = makePath(n);
        makeMyWay(myPath, lydia, n);

        // Case #1: ES
        printf("Case #%d: %s\n", i, myPath);

        free(myPath);
        free(lydia);
    }
}

int main() {
    way();

    return 0;
}
