#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXR 20
#define MAXC 20

int grid[MAXR][MAXC];
int R, C;

int search(int n, int r, int c) {
    if (n == R*C) return 1;

    int r2, c2;
    for (r2 = 0; r2 < R;r2++) {
        for (c2 = 0;c2<C;c2++) {
            if (r2 == r || c2 == c || r - c == r2 - c2 || r + c == r2 + c2) continue;
            if (grid[r2][c2]) continue;
            grid[r2][c2] = n+1;
            if (search(n+1, r2, c2))
                return 1;
            else
                grid[r2][c2] = 0;
        }
    }
    return 0;
}

int search_all(void) {
    int r, c, r2, c2;
    for (r = 0; r < R; r++) {
        for (c = 0; c < C; c++) {
            grid[r][c] = 1;
            for (r2 = 0; r2 < R;r2++) {
                for (c2 = 0; c2 < C; c2++) {
                    if (r2 == r || c2 == c || r - c == r2 - c2 || r + c == r2 + c2) continue;
                    grid[r2][c2] = 2;
                    if (search(2, r2, c2))
                        return 1;
                    else
                        grid[r2][c2] = 0;
                }
            }
            grid[r][c] = 0;
        }
    }
    return 0;
}

int main(void) {
    int T;
    scanf("%d",&T);
    int i, k, r,c;
    for (i = 0; i < T; i++) {
        scanf("%d%d",&R,&C);
        if (search_all()) {
            printf("Case %d: POSSIBLE\n",i+1);
            for (k = 1; k <= R*C; k++) {
                for (r = 0; r < R; r++) {
                    for (c = 0; c < C; c++) {
                        if (grid[r][c] == k) {
                            printf("%d %d\n",r+1,c+1);
                        }
                    }
                }
            }
        } else {
            printf("Case #%d: IMPOSSIBLE\n",i+1);
        }
    }
	return 0;
}
