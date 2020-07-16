
#include <stdio.h>
#include <string.h>

#define MAX_R 16
#define MAX_C 16

#define MAX(A,B) (A > B ? A : B)

typedef struct {
    int R, C;
    char state[MAX_R][MAX_C];
} Board;

// Return 0 if lose, 1 if works.
static int spread(Board *b, int r, int c, char type) {
    if (r < 0 || r >= b->R) return 1;
    if (c < 0 || c >= b->C) return 1;
    if (b->state[r][c] == '0') return 1;
    if (b->state[r][c] == '#') return 0;

    b->state[r][c] = '0';
    switch (type) {
        case 'H':
            if (spread(b, r, c-1, 'H') == 0) return 0;
            if (spread(b, r, c+1, 'H') == 0) return 0;
            break;
        case 'V': 
            if (spread(b, r-1, c, 'V') == 0) return 0;
            if (spread(b, r+1, c, 'V') == 0) return 0;
            break;
    }
    return 1;
}


static int alphabeta(Board b, int alpha, int beta) {
    int hasChild = 0;
    for (int r = 0; r < b.R; r++) {
        for (int c = 0; c < b.C; c++) {
            if (b.state[r][c] == '.') {
                Board childBoard;
                hasChild = 1;

                memcpy(&childBoard, &b, sizeof(Board));
                if (spread(&childBoard, r, c, 'H') != 0) {
                    alpha = MAX(alpha, -alphabeta(childBoard, -beta, -alpha));
                }

                memcpy(&childBoard, &b, sizeof(Board));
                if (spread(&childBoard, r, c, 'V') != 0) {
                    alpha = MAX(alpha, -alphabeta(childBoard, -beta, -alpha));
                }

                if (alpha >= beta) return alpha;
            }
        }
    }
    if (!hasChild) return -1;
    return alpha;
}

int main(void) {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        Board b;
        scanf("%d %d", &(b.R), &(b.C)); getchar();
        for (int r = 0; r < b.R; r++) {
            fgets(b.state[r], MAX_C, stdin);
        }

        int wins = 0;
        for (int r = 0; r < b.R; r++) {
            for (int c = 0; c < b.C; c++) {
                Board childBoard;

                memcpy(&childBoard, &b, sizeof(Board));
                if (spread(&childBoard, r, c, 'H') != 0) {
                    if (-alphabeta(childBoard, -1, 1) == 1) {
                        wins++;
                    }
                }

                memcpy(&childBoard, &b, sizeof(Board));
                if (spread(&childBoard, r, c, 'V') != 0) {
                    if (-alphabeta(childBoard, -1, 1) == 1) {
                        wins++;
                    }
                }
            }
        }
        printf("Case #%d: %d\n", t, wins);
    }
    return 0;
}
