#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 512

char buffer[BUFSIZE];

int main() {
    int k;

    int T;
    if (fgets(buffer, BUFSIZE, stdin) == NULL) {
        perror("fgets");
        exit(1);
    }
    k = 0;
    while(buffer[k] != '\n') k++;
    buffer[k] = '\0';
    T = atoi(buffer);

    int casenum = 1;
    int done = 0;
    char c;
    int my_x;
    int my_y;
    int lydia_x;
    int lydia_y;
    int N;

    while(!done) {
        if (fgets(buffer, BUFSIZE, stdin) == NULL) {
            exit(0);
        }
        k = 0;
        while(buffer[k] != '\n') k++;
        buffer[k] = '\0';
        N = atoi(buffer);

        char path[2*N+1];
        bzero(path, 2*N+1);
        my_x = 0;
        my_y = 0;
        lydia_x = 0;
        lydia_y = 0;
        k = 0;
        while ((c = fgetc(stdin)) != EOF) {
            if (c == 'S') {
                lydia_y++;
            }
            else if (c == 'E') {
                lydia_x++;
            }
            else if (c == '\n') {
                break;
            }
            if (lydia_x > my_y) {
                my_y++;
                path[k] = 'S';
            }
            else {
                my_x++;
                path[k] = 'E';
            }
            k++;
        }
        if (c == EOF) {
            done = 1;
        }

        printf("Case #%d: %s\n", casenum, path);
        casenum ++;
    }

    return 0;
}
