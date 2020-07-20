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
        found = 1;
        return;
    }
    
    // printf("dep = %d:", dep);
    // for(int i = 0; i < dep; i++) {
    //     printf(" %d", now[i]);
    // }
    // putchar('\n');
    
    for (int i = 0; i < R * C; i++) {
        if (dep == 0 || (!visited[i] && map[now[dep - 1]][i])) {
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
                map[i * C + j][i * C + j] = 0;
                for (int k = 1; i+k < R; k++) {
                    map[i * C + j][(i+k) * C + j] = 0;
                    map[(i+k) * C + j][i * C + j] = 0;
                }
                for (int k = 1; j+k < C; k++) {
                    map[i * C + j][i * C + j+k] = 0;
                    map[i * C + j+k][i * C + j] = 0;
                }
                for (int k = 1; i+k < R && j+k < C; k++) {
                    map[i * C + j][(i+k) * C + j+k] = 0;
                    map[(i+k) * C + j+k][i * C + j] = 0;
                }
                for (int k = 1; i-k >= 0 && j+k < C; k++) {
                    map[i * C + j][(i-k) * C + j+k] = 0;
                    map[(i-k) * C + j+k][i * C + j] = 0;
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
                printf("%d %d\n", sol[i] / C + 1, sol[i] % C + 1);
            }
        }
    }
}