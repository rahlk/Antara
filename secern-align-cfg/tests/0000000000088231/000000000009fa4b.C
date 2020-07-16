#include <stdio.h>
#include <stdlib.h>

int main() {
    int MAX = 110;
    
    char buffer[MAX];
    char a[MAX];
    char b[MAX];
    int offset;
    
    char nbuffer[10];
    fgets(nbuffer, 10, stdin);
    for (int i = 0; i < 10; i++) {
        if (nbuffer[i] == '\n') {
            nbuffer[i] = '\0';
        }
    }
    int n = atoi(nbuffer);
    
    for (int i = 0; i < n; i++) {
        fgets(buffer, MAX, stdin);
        for (int j = 0; j < MAX; j++) {
            if (buffer[j] == '\n') {
                a[j] = '\0';
                b[j] = '\0';
                break;
            } else if (buffer[j] == '4') {
                a[j] = '2';
                b[j] = '2';
            } else {
                a[j] = buffer[j];
                b[j] = '0';
            }
        }
        offset = 0;
        for (int k = 0; k < MAX; k++) {
            if (b[k] == '0') {
                offset++;
            } else {
                break;
            }
        }
        printf("Case #%i: %s %s\n", i + 1, a, b + offset);
    }
}
