
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node {
    int r, c;
    struct node *next;
};

typedef struct {
    Node *top;
} Stack;

void push(Stack *s, int r, int c) {
    Node *n = malloc(sizeof(*n));
    n->r = r;
    n->c = c;
    n->next = s->top;
    s->top = n;
}

int pop(Stack *s, int *r, int *c) {
    if (s->top == NULL) return 0;

    *r = s->top->r;
    *c = s->top->c;

    Node *temp = s->top;
    s->top = s->top->next;
    free(temp);
    
    return 1;
}

int process(int map[20][20], int cr, int cc, int R, int C, int depth, Stack *seq) {
    if (depth == R*C) return 1;

    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            if (r == cr || c == cc) continue;
            if (r-c == cr-cc || r+c == cr+cc) continue;
            if (map[r][c] != 0) continue;

            map[r][c] = 1;
            if (process(map, r, c, R, C, depth+1, seq)) {
                push(seq, r, c);
                return 1;
            }
        }
    }
    return 0;
}

int main(void) {
    int T;
    scanf("%d", &T); getchar();
    for (int t = 1; t <= T; t++) {
        int possible = 0;
        int R, C;
        int map[20][20] = {0};
        Stack seq = {0};
        scanf("%d %d", &R, &C); getchar();

        for (int r = 0; !possible && r < R; r++) {
            for (int c = 0; !possible && c < C; c++) {
                if (process(map, r, c, R, C, 0, &seq)) {
                    possible = 1;
                }
            }
        }
        
        printf("Case #%d: ", t);
        if (!possible) printf("IM");
        printf("POSSIBLE\n");
        while (pop(&seq, &R, &C)) {
            printf("%d %d\n", R, C);
        }
    }
    return 0;
}
