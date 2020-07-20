#include <stdio.h>

int main() {
    int tc;
    scanf("%d", &tc);
    for(int k = 1;k <= tc;k++) {
        int p, q;
        scanf("%d %d", &p, &q);
        int X[q + 1], Y[q + 1];
        int ansX = 0, ansY = 0;
        for(int i = 0;i <= q;i++) {
            X[i] = 0;
            Y[i] = 0;
        }
        for (int i = 0;i < p;i++) {
            int x, y;
            char ch;
            scanf("%d %d %c", &x, &y, &ch);
            if(p == 1) {
                if(ch == 'N' || ch == 'S')
                    X[0]++;
                    
                if(ch == 'E' || ch == 'W')
                    Y[0]++;
            }
            if (ch == 'N') {
                X[x]++;
                Y[y + 1]++;
            }
            if(ch == 'S') {
                X[x]++;
                Y[y - 1]++;
            }
            if(ch == 'W') {
                X[x - 1]++;
                Y[y]++;
            }
            if(ch == 'E') {
                X[x + 1]++;
                Y[y]++;
            }
        }
        int maxX = X[0], maxY = Y[0];
        for (int i = 1;i <= q;i++) {
            if (maxX < X[i]) {
                maxX = X[i];
                ansX = i;
            }
            if(maxY < Y[i]) {
                maxY = Y[i];
                ansY = i;
            }
        }
        printf("Case #%d: %d %d\n", k, ansX, ansY);
    }
    return 0;
}