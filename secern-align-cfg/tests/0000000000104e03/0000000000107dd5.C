#include <stdio.h>
int map[400][400];
int visited[400];
int R, C;
int found;
int now[400];
int sol[400];

int dfs(int dep) {
    if (found) {
        return;
    }
    if (dep == R * C) {
        for (int i = 0; i < R * C; i++) {
            sol[i] = now[i];
        }
        return;
    }
    for (int i = 0; i < R * C; i++) {
        if (dep == 0 || !visited[i] && map[now[dep - 1]][i]) {
            visited[i] = 1;
            now[dep] = i;
            dfs(dep + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    int T;   
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        
        scanf("%d%d", &R, &C);
        for (int i = 0; i < R * C; i++) {
            visited[i] = 0;
            for (int j = 0; j < R * C; j++) {
                map[i][j] = 1;
            }
        }
        
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                for (int k = 1; i+k < R; k++) {
                    map[i * R + j][(i+k) * R + j] = 0;
                    map[(i+k) * R + j][i * R + j] = 0;
                }
                for (int k = 1; j+k < C; k++) {
                    map[i * R + j][i * R + j+k] = 0;
                    map[i * R + j+k][i * R + j] = 0;
                }
                for (int k = 1; i+k < R && j+k < C; k++) {
                    map[i * R + j][(i+k) * R + j+k] = 0;
                    map[(i+k) * R + j+k][i * R + j] = 0;
                }
            }
        }
        
        // for (int i = 0; i < R * C; i++) {
        //     for (int j = 0; j < R * C; j++) {
        //         printf("%d ", map[i][j]);
        //     }
        //     putchar('\n');
        // }
        found = 0;
        dfs(0);
        printf("Case #%d: %s\n", t, found ? "POSSIBLE" : "IMPOSSIBLE");
        if (found) {
            for (int i = 0; i < R * C; i++) {
                printf("%d %d\n", sol[i] / R + 1, sol[i] % R + 1);
            }
        }
    }
}