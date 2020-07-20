#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

void put(char *s) {
    while(*s == '0') s++;
    while(*s) putchar(*s++);
}

int main() {
    char *in = NULL, *l, *r;
    size_t len = 0;
    int N, i, j;
    unsigned long lut = 0xFBA50;
    
    scanf("%d\n", &N);
    for(i=0; i<N; i++) {
        char last = 0;
        getline(&in, &len, stdin);
        l = malloc(len);
        r = malloc(len);
        for(j=0; in[j]!='\n'; j++) {
            int val = in[j] - '0';
            int offset = (lut >> (2 * val)) & 3;
            if(last == 1 && val == 0) {
                l[j - 1] = r[j - 1] = '0';
                l[j] = r[j] = '5';
                last = 5;
                continue;
            }
            if(j&1) offset = val - offset;
            l[j] = '0' + offset;
            r[j] = '0' + (val - offset);
            last = val;
        }
        l[j] = r[j] = '\0';
        put(l);
        putchar(' ');
        put(r);
        putchar('\n');
        free(l);
        free(r);
    }
    free(in);
    return 0;
}
