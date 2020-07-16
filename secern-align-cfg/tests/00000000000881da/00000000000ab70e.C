#include <stdio.h>
#include <stdlib.h>

#define MAX_PATH_LENGTH 100000          // Should be enough for N <= 50000
#define VERIFY		0

typedef struct tcase {
    struct {
        int n;
        char path[MAX_PATH_LENGTH];
    } i;

    struct {
        char path[MAX_PATH_LENGTH];
    } o;
} tcase_t;

void verify_case(const tcase_t *t) {
    int i;
    int si = 0, ei = 0, so = 0, eo = 0;
    for (i = 0; i < t->i.n * 2 - 3; ++i) {
        if (t->i.path[i] == 'S') ++ si;
        if (t->i.path[i] == 'E') ++ ei;
        if (t->o.path[i] == 'S') ++ so;
        if (t->o.path[i] == 'E') ++ eo;
    }
}

void read_case(tcase_t *t) {
    scanf("%d", &t->i.n);
    scanf("%s", t->i.path);
}

void solve_case(tcase_t *t) {
    int i;
    int s1 = 0, e1 = 0, s2 = 0;

    for (i = 0; i < 2 * t->i.n - 2; ++i) {
        char dir = (s1 > e1) ? 'E' : 'S';

        if (dir == t->i.path[i] && s1 == s2)
            dir = (dir == 'E') ? 'S' : 'E';
        if (dir == 'S')
            ++s1;
        else
            ++e1;
        if (t->i.path[i] == 'S')
            ++s2;
        t->o.path[i] = dir;
    }
    t->o.path[i] = '\0';
}

void print_result(int i, const tcase_t *t) {
    printf("Case #%d: %s\n", i, t->o.path);
}

int main(int argc, char *argv[]) {
    int ncases, i;
    tcase_t t;

    scanf("%d", &ncases);
    for (i = 0; i < ncases; ++i) {
        read_case(&t);
        solve_case(&t);
        #ifdef VERIFY
        verify_case(&t);
        #endif
        print_result(i + 1, &t);
    }
    return 0;
}
