#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int charToInt(char val) {
    return val - '0'; // offset to first ASCII int
}

void trim(char* num) {
    int len = strlen(num);
    if(len < 2) return; // single digit

    int i=0;    
    for(; i<len && num[i] == '0'; i++); // last 0 in a chain os 0s
    // i comes out as the index of the rightmost 0 + 1

    if (i < len) memmove(num, num+i, len-i+1);
}

void divide(char* num, char* a, char* b) {
    int len = strlen(num);

    int i=0;
    for(; i < len; i++) {
        if(num[i] == '4') {
            a[i] = '1';
            b[i] = '3';
        }
        else {
            a[i] = num[i];
            b[i] = '0';
        }
    }
    a[len] = '\0';
    b[len] = '\0';
    trim(b);
}

void forgone() {
    int t = 1; // 1 <= t <= 100
    scanf("%d", &t);

    int i = 1; // 1 <= i <= t
    for(; i <= t; i++) {
        char num[101];
        char a[101];
        char b[101];

        scanf("%s", num);

        divide(num, a, b);
        
        // Case #1: 2 2
        printf("Case #%d: %s %s\n", i, a, b);
    }
}

int main() {
    forgone();

    return 0;
}
