#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int do_algorithm(int kase, char *line, int n) {
    char res[100010] = {0};
    int i = 0, start = 0, j = 0, count = 0, p = 2 * n - 2;

    char curr = line[0];

    for (i = 1; i < p; i++) {
        if (line[i] != curr) {
            count = i - start + 1;

            res[start] = line[i];
            start++, count--;

            for (j = i + 1; j < p && line[j] == line[i]; j++) ;
            if ((i + 1 < p) && (j == p)) {
                // The same to the end
                // printf("Same to the end\n");
                for (j = i + 1; j < p; j++, start++) {
                    res[start] = line[j];
                }
            }

            for (j = 0; j < count; j++, start++) {
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
    int cases, n;

    fgets(line, 1024, stdin);
    cases = atoi(line);

    int kase = 0;
    for (kase = 0; kase < cases; kase++) {
        memset(line, 0, 1024);

        fgets(line, 1024, stdin);
        n = atoi(line);

        fgets(line, 100010, stdin);
        do_algorithm(kase+1, line, n);
    }

    return 0;
}
