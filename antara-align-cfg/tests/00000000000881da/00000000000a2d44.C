#include <stdio.h>
#include <stdlib.h>

int main() {

    char buffer[1];
    char burner[100];
    char nbuffer[10];
    fgets(nbuffer, 10, stdin);
    for (int i = 0; i < 10; i++) {
        if (nbuffer[i] == '\n') {
            nbuffer[i] = '\0';
        }
    }
    int n = atoi(nbuffer);
    
    for (int i = 0; i < n; i++) {
        printf("Case #%i: ", i + 1);
        fgets(burner, 100, stdin);
        while(1) {
            fgets(buffer, 1, stdin);
            if (buffer[0] == '\n') {
                printf("\n");
                break;
            } else if (buffer[0] == 'E') {
                printf("S");
            } else {
                printf("E");
            }
        }
    }
}
