#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
static void die(const char *msg)
{
    fprintf(stderr, "%s\n", msg);
    abort();
    exit(1);
}

#define MAXN 2400L
#define MAXLINE (MAXN)
char g_line[MAXLINE];
char g_in[MAXLINE];
char g_out_a[MAXLINE];
char g_out_b[MAXLINE];
int g_in_len;
int g_out_a_len;
int g_out_b_len;


static void do_prob(){
    g_out_a_len = 0;
    g_out_b_len = 0;

    int beg_idx = 0;
    for (int i=0; g_line[i] && !isdigit(g_line[i]);  i++) {
        beg_idx++;
    }
    for (int i=beg_idx; isdigit(g_line[i]);  i++) {
        if (g_line[i] == '4') {
            g_out_a[g_out_a_len++] = '3';
            g_out_b[g_out_b_len++] = '1';
        }
        else {
            g_out_a[g_out_a_len++] = g_line[i];
            if (g_out_b_len)
                g_out_b[g_out_b_len++] = '0';
        }
    }
    g_out_a[g_out_a_len] = 0;
    g_out_b[g_out_b_len] = 0;
}

static int aatoi(const char *ln, int *out) {
    const char *adv = ln;
    int acc = 0;
    while (!isdigit(*adv) && *adv)
        adv++;
    if (!isdigit(*adv))
        return 0;
    while (isdigit(*adv)){
        acc *= 10;
        acc += *adv - '0';
        adv++;
    }
    *out = acc;
    return adv - ln;
}

static void print_res(int case_num) {
    //Case #3: 667 3777
    printf("Case #%d: ", case_num);
    printf("%s %s\n", g_out_a, g_out_b);
}

int main(int argc, const char **argv) {
    if (fgets(g_line, MAXLINE, stdin) == NULL)
        return 1;
    int ncases;
    int i;
    if (!aatoi(g_line, &ncases))
        die("cant parse ncases");
    for (i=0; i<ncases; i++) {
        if (!fgets(g_line, MAXLINE, stdin))
            die("cant parse grid moves");
        do_prob(g_line);
        print_res(i+1);
    }
    assert(i == ncases);
}
