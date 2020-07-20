#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t t;
    scanf("%zu\n", &t);
    // printf("t: %zu\n", t);
    char *line = NULL;
    size_t linecap = 0;
    for (size_t i = 0U; i < t; ++i) {
        ssize_t linelen;
        linelen = getline(&line, &linecap, stdin);
        // printf("linelen: %zd, line: %s", linelen, line);
        char *a, *b;
        a = malloc(linelen - 1);
        b = malloc(linelen - 1);
        if (a == NULL || b == NULL) {
            perror("malloc");
            return EXIT_FAILURE;
        }

        for (ssize_t j = 0; j < linelen - 1; ++j) {
            if (line[j] == '4') {
                a[j] = '3';
                b[j] = '1';
            } else {
                a[j] = line[j];
                b[j] = '0';
            }
        }

        char *bb = b;
        for (; *bb == '0'; ++bb);

        a[linelen - 1] = '\0';
        b[linelen - 1] = '\0';

        printf("Case #%zu: %s %s\n", i+1, a, bb);
    }

    free(line);
    return EXIT_SUCCESS;
}
