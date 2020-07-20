#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int do_algorithm(int kase, char *line, int n) {
    char res[100010] = {0};
    int i = 0, start = 0, j = 0, count = 0, p = 2 * n - 2, count2 = 0;;

    char curr = line[0];

    // printf("Input: %s\n", line);

    for (i = 1; i < p; i++) {
        if (line[i] != curr) {
            count = i - start;

            for (j = i; i < p && line[j] == line[i]; j++) ;
            count2 = j - i;
            if (count2 >= count) {
                for (j = 0; j < count; j++, start++) {
                    res[start] = line[i];
                }
            }

            for (j = 0; j < count; j++, start++) {
                res[start] = curr;
            }

            // printf("%d %d\n", count, count2);
            i += count;
            curr = line[i];
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
