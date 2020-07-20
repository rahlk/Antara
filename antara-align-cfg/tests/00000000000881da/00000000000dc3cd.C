#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int do_algorithm(int kase, char *line) {
    char res[100010] = {0};
    int i = 0, start = 0, j = 0;

    char curr = line[0];

    for (i = 1; i < 100010 && line[i] != '\0'
            && line[i] != '\r' && line[i] != '\n'; i++) {
        if (line[i] != curr) {
            res[start] = line[i];
            start++;

            if ((i - start) % 2 == 1) {
                res[start] = line[i];
                start++, i++;
            }

            for (; start <= i; start++) {
                res[start] = curr;
            }
            curr = line[i+1];
        }
    }

    printf("Case #%d: %s\n", kase, res);
    return 0;
}

int main(int argc, char const *argv[])
{
    char line[100010] = {0};
    int cases, step;

    fgets(line, 1024, stdin);
    cases = atoi(line);

    int kase = 0;
    for (kase = 0; kase < cases; kase++) {
        memset(line, 0, 1024);

        fgets(line, 1024, stdin);
        step = atoi(line);

        fgets(line, 100010, stdin);
        do_algorithm(kase+1, line);
    }

    return 0;
}
