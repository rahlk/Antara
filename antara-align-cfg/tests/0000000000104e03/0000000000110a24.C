#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool find_path(int rsize, int csize, int r, int c, int num, int **grid) {
    int i, j;

    if (num > (rsize * csize)) {
        return true;
    }


    if (r < 0) {
        for (i = 0; i < rsize; i++) {
            for (j = 0; j < csize; j++) {
                grid[i][j] = num;
                if (find_path(rsize, csize, i, j, num+1, grid)) {
                    return true;
                }
                grid[i][j] = 0;
            }
        }
    } else {
        for (i = 0; i < rsize; i++) {
            for (j = 0; j < csize; j++) {
                if (grid[i][j]) {
                    continue;
                }
                if (r == i || c == j || ((r-c) == (i-j)) || ((r+c) == (i+j))) {
                    continue;
                }
                grid[i][j] = num;
                if (find_path(rsize, csize, i, j, num+1, grid)) {
                    return true;
                }
                grid[i][j] = 0;
            }
        }
    }

    return false;
}

int main() {
    int tc, i, j, k, T;

    scanf("%d", &T);

    for (tc = 1; tc <= T; tc++) {
        int r, c;

        scanf("%d %d", &r, &c);

        int **grid;

        grid = (int **)malloc(sizeof(int *) * r);

        for (i = 0; i < r; i++) {
            grid[i] = (int *)calloc(sizeof(int), c);
        }

        bool res = find_path(r, c, -1, -1, 1, grid);
        printf("Case #%d: %s\n", tc, res ? "POSSIBLE" : "IMPOSSIBLE");
        for (i = 1; i <= (r * c); i++) {
            for (j = 0; j < r; j++) {
                for (k = 0; k < c; k++) {
                    if (grid[j][k] == i) {
                        printf("%d %d\n", j+1, k+1);
                    }
                }
            }
        }

        for (i = 0; i < r; i++) {
            free(grid[i]);
        }
        free(grid);
    }

    return 0;
}