#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t = 1; t <= T; t++) {
        printf("Case #%d: ", t);
        
        int a;
        scanf("%d", &a);
        
        char c[a][501];
        int len[a];
        int defeat[a];
        for (int i = 0; i < a; i++) {
            scanf("%s", c[i]);
            len[i] = strlen(c[i]);
            defeat[i] = 0;
        }
        
        char out[501];
        int j;
        int ok = 0;
        for (j = 0; j < 500; j++) {
            int r = 0;
            int p = 0;
            int s = 0;
            
            for (int i = 0; i < a; i++) {
                if (!defeat[i]) {
                    char x = c[i][j % len[i]];
                    if (x == 'R') {
                        r++;
                    } else if (x == 'P') {
                        p++;
                    } else if (x == 'S') {
                        s++;
                    }
                }
            }
            
            char y;
            if (r > 0 && p > 0 && s > 0) {
                break;
            } else if (r > 0) {
                if (s > 0) {
                    y = 'R';
                } else {
                    y = 'P';
                }
            } else if (p > 0) { // r == 0
                y = 'S';
            } else { // r, p == 0, s > 0
                y = 'R';
            }
            out[j] = y;
            
            int all = 1;
            for (int i = 0; i < a; i++) {
                if (!defeat[i]) {
                    char x = c[i][j % len[i]];
                    if ((y < x && (y != 'P' || x != 'S')) || (x == 'P' && y == 'S')) {
                        defeat[i] = 1;
                    } else {
                        all = 0;
                    }
                }
            }
            if (all) {
                ok = 1;
                j++;
                break;
            }
            
        }
        out[j] = '\0';
        
        if (ok) {
            printf("%s\n", out);
        } else {
            printf("IMPOSSIBLE\n");
        }
    }
}
