#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>

#define BIGENGH 1000
int has_4 = 0;
int inlen = 0;
int alen;
int blen;
int boffset; //hack, who cares
char in_10[BIGENGH];
char out_a[BIGENGH];
char out_b[BIGENGH];

//this is probably the ugliest C i've written so far :P
//it's what happens when you start with a broken program and you fix it instead
//of rewriting it

static void do_prob(){
    has_4 = 0;
    alen = 0;
    blen = 0;
    boffset = 0;
    for (int i=0; i<inlen; i++) {
        out_a[i] = in_10[i];
        out_b[i] = '0';
        alen = i + 1;
        blen = i + 1;
        if (out_a[i] == '4') {
            boffset = inlen - i - 1; // i don't know why this line works, but it does
            has_4 = 1;
            out_a[i] = '3';
            out_b[i] = '1';
        }
    }
    out_a[alen] = 0;
    out_b[blen] = 0;
}
static void set_input(const char *line) {
    const char *beg = line;
    const char *end = line + strlen(line) - 1; //inc
    char *out = in_10;
    while (!isdigit(*beg))
        beg++;
    while (!isdigit(*end) && end > beg) 
        end--;
    inlen = end - beg + 1;
    while (isdigit(*end) && beg <= end) {
        *out = *beg;
        beg++;
        out++;
    }
    assert(inlen > 0);
}
static void print_res(int case_num) {
    //Case #3: 667 3777
    printf("Case #%d: %s %s\n", case_num, out_a, out_b + boffset);
}

int aatoi(const char *ln) {
    while (!isdigit(*ln) && *ln)
        ln++;
    return atoi(ln);
}

int main(int argc, const char **argv) {
    char line[1000];
    if (fgets(line, 1000, stdin) == NULL)
        return 1;
    int ncases = aatoi(line);
    for (int i=0; i<ncases && (fgets(line, 1000, stdin) != NULL); i++) {
        set_input(line);
        do_prob();
        print_res(i+1);
    }
}
