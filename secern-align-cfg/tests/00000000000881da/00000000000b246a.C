#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATH_LENGTH 100000          // Should be enough for N <= 50000
#define VERIFY		0
#define DEBUG		0

typedef struct tcase {
    struct {
        int n;
        char path[MAX_PATH_LENGTH];
    } i;

    struct {
        char path[MAX_PATH_LENGTH];
    } o;
} tcase_t;

int occupied(const char *p, int s, int e) {
    int s1 = 0, e1 = 0;

    while ((s1 != s) || (e1 != e)) {
        if (p[s1 + e1] == 'S')
            ++s1;
        else
            ++e1;
        if (s1 > s || e1 > e)
            return 0;
    }
    return 1;
}

void visualize_path(const char *p1, const char *p2, int n) {
    int i = 0, j = 0;

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            if (occupied(p1, j, i) && occupied(p2, j, i))
                printf("*");
            else if (occupied(p1, j, i))
                printf("1");
            else if (occupied(p2, j, i))
                printf("2");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void verify_case(const tcase_t *t) {
    int i;
    int si = 0, ei = 0, so = 0, eo = 0;
    int samespot = 1;

    for (i = 0; i < t->i.n * 2 - 2; ++i) {
        if (t->i.path[i] == 'S')
            ++si;
        if (t->i.path[i] == 'E')
            ++ei;
        if (t->o.path[i] == 'S')
            ++so;
        if (t->o.path[i] == 'E')
            ++eo;
        if (so >= t->i.n || eo >= t->i.n) {
            printf("Error: outbound\n");
            exit(1);
        }
        if (si == so && ei == eo) {
            if (samespot) {
                printf("Error at (%d, %d)\n", so, eo);
                visualize_path(t->i.path, t->o.path, t->i.n);
                printf("\n\n");
                exit(1);
            }
            samespot = 1;
        } else {
            samespot = 0;
        }
    }
}

void read_case(tcase_t *t) {
    scanf("%d", &t->i.n);
    scanf("%s", t->i.path);
}

int recurse_solve(tcase_t *t, int s1, int e1, int s2, char dir) {
    if (dir == t->i.path[s1 + e1] && s1 == s2)
        dir = (dir == 'E') ? 'S' : 'E';
    t->o.path[s1 + e1] = dir;
    if (t->i.path[s1 + e1] == 'S')
        ++s2;
    if (dir == 'S')
        ++s1;
    else
        ++e1;
    if (e1 >= t->i.n || s1 >= t->i.n)
        return 0;                       // Unsolvable
    if (e1 == t->i.n - 1 && s1 == t->i.n - 1)
        return 1; // Done
    if (e1 > s1) return recurse_solve(t, s1, e1, s2, 'S') || recurse_solve(t, s1, e1, s2, 'E');
    else return recurse_solve(t, s1, e1, s2, 'E') || recurse_solve(t, s1, e1, s2, 'S');
}

void solve_case(tcase_t *t) {
    if (!(recurse_solve(t, 0, 0, 0, 'E') || recurse_solve(t, 0, 0, 0, 'S')))
        printf("Critical error. I am totally wrong\n");
    t->o.path[2 * t->i.n - 2] = '\0';
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
        #if DEBUG
        visualize_path(t.i.path, t.o.path, t.i.n);
        #endif
        #if VERIFY
        verify_case(&t);
        #endif
        print_result(i + 1, &t);
    }
    return 0;
}
