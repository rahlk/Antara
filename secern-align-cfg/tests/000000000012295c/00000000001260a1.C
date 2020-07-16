#include <stdio.h>
#include <string.h>

void fillGrid(int (*grid0)[], int Q, int x0, int y0, char d) {
    int (*grid)[Q] = grid0;

    int xmin=0, xmax=Q;
    int ymin=0, ymax=Q;
    if(d =='E') {
        xmin=x0+1;
    }
    if(d =='W') {
        xmax=x0;
    }
    if(d =='N') {
        ymin=y0+1;
    }
    if(d =='S') {
        ymax=y0;
    }

    for(int x=xmin; x<xmax; x++) {
        for(int y=ymin; y<ymax; y++) {
            grid[x][y]++;
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for(int t=0; t<T; t++) {
        int P, Q;
        scanf("%d %d", &P, &Q);
        Q++; // Q inclusive!

        int grid[Q][Q];
        for(int x=0; x<Q; x++) {
            for(int y=0; y<Q; y++) {
                grid[x][y] = 0;
            }
        }

        for(int i=0; i<P; i++) {
            int x0, y0;
            char d;
            scanf("%d %d %c", &x0, &y0, &d);
            fillGrid(grid, Q, x0, y0, d);
        }

        int xmax=0, ymax=0, max=-1;
        for(int x=0; x<Q; x++) {
            for(int y=0; y<Q; y++) {
                //printf("grid[%2d][%2d]=%d\n", x, y, grid[x][y]);
                if(grid[x][y] > max) {
                    max = grid[x][y];
                    xmax = x;
                    ymax = y;
                }
            }
        }

        printf("Case #%d: %d %d\n", t+1, xmax, ymax);
    }

    return 0;
}

