#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int do_algorithm(int kase, char *line) {
    char a[128] = {0}, b[128] = {0};
    int i = 0, shift = 0;
    int count = 0;

    for (i = 0; i < 128; i++) if (line[i] == '\r' || line[i] == '\n') line[i] = '\0';

    for (i = 0; i < 128 && line[i] != '\0'; i++, count++) {
        if (line[i] == '4') {
            a[i] = '1', b[i] = '3';
        } else {
            a[i] = line[i], b[i] = '0';
        }
    }

    for (i = 0; i < count; i++) {
        if (b[i] != '0') break;
        else shift++;
    }

    printf("Case #%d: %s %s\n", kase, a, b+shift);
    return 0;
}

int main(int argc, char const *argv[])
{
    char line[256] = {0};
    int cases;
    fgets(line, 256, stdin);
    cases = atoi(line);

    int kase = 0;
    for (kase = 0; kase < cases; kase++) {
        memset(line, 0, 256);
        fgets(line, 256, stdin);
        do_algorithm(kase+1, line);
    }

    return 0;
}
